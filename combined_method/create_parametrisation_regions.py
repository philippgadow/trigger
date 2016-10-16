#! /bin/env python
"""Process calibration data to obtain parametrisation."""
import os
import time
import ROOT

ROOT.gROOT.SetBatch(True)


# define fit procedure
def fit_parametrisation(t, b_pt_i, b_pt_f, isba, baty, isre, cs, eb, pm):
    """fit procedure, input tree t."""
    print "pt_min: {}, pt_max: {}, barrel: {}, barrel type: {}, \
transition_region: {}, small sector: {}, eta_min: {}, eta_max: {}, sagitta {} \
0".format(b_pt_i, b_pt_f, isba, baty, isre, cs, eb[0], eb[1], pm)
    # fit in pt
    h_pt = ROOT.TH2D("h_{}_{}_{}_{}_{}_pt".format(eb[0], eb[1], cs, pm, baty),
                     "h_{}_{}_{}_{}_{}_pt".format(eb[0], eb[1], cs, pm, baty),
                     6000, b_pt_i, b_pt_f, 4000, -0.5, 0.5)

    tf1_pt = ROOT.TF1('tf1_pt', 'pol1', b_pt_i, b_pt_f)
    tf1_pt.SetParameters(0., 0.)

    cut = "pt > {} && pt < {} && abs(sagitta) > 5 && sagitta {} 0 &&\
is_barrel == {} && is_transition_region == {} && is_small_sector == {} &&\
abs(eta) > {} && abs(eta) < {}".format(b_pt_i, b_pt_f, pm,
                                       isba, isre, cs, eb[0], eb[1])
    # if large barrel sector: check inner chamber type
    if isba == 1 and cs == 0:
        cut += " && chamber_type_inner == {}".format(baty)

    check = t.Draw("1./sagitta:pt>>h_{}_{}_{}_{}_{}_pt".format(eb[0], eb[1],
                                                               cs, pm, baty),
                   cut)
    if check < 100:
        return [9999999, 0, 1, 0, 0, 0, 0, 0]


    # fit pol1
    h_pt.Fit("tf1_pt", 'R')
    f_pt = tf1_pt.GetParameters()
    e_pt = tf1_pt.GetParErrors()

    print "pt fit result: (1./sagitta -(%f))/(%f)" % (f_pt[0], f_pt[1])
    h_pt.Write()

    # fit in phi
    h_phi = ROOT.TH2D("h_{}_{}_{}_{}_{}_phi".format(eb[0], eb[1], cs, pm, baty),
                      "h_{}_{}_{}_{}_{}_phi".format(eb[0], eb[1], cs, pm, baty),
                      2000, -0.5, 0.5, 4000, -20, 20)
    tf1_phi = ROOT.TF1('tf1_phi', 'pol2', -0.5, 0.5)
    tf1_phi.SetParameters(0., 0., 0.)

    t.Draw("((1./sagitta-({}))/({}) - pt) : phi_mod>>\
h_{}_{}_{}_{}_{}_phi".format(f_pt[0], f_pt[1], eb[0], eb[1], cs, pm, baty), cut)

    # fit pol2
    h_phi.Fit("tf1_phi", 'R')
    f_phi = tf1_phi.GetParameters()
    e_phi = tf1_phi.GetParErrors()

    h_phi.Write()
    print "phi fit result: (1./sagitta -(%f))/(%f) + (%f)*phi*phi + \
(%f)*phi +(%f)" % (f_pt[0], f_pt[1], f_phi[2], f_phi[1], f_phi[0])

    # fit in eta
    h_eta = ROOT.TH2D("h_{}_{}_{}_{}_{}_eta".format(eb[0], eb[1], cs, pm, baty),
                      "h_{}_{}_{}_{}_{}_eta".format(eb[0], eb[1], cs, pm, baty),
                      1008, -2.52, 2.52, 4000, -20, 20)
    tf1_eta = ROOT.TF1('tf1_eta', 'pol2', -2.52, 2.52)
    tf1_eta.SetParameters(0., 0., 0.)
    t.Draw("((1./sagitta-({}))/({}) - \
        {}*phi_mod*phi_mod-{}*phi_mod-{} - pt) : eta>>\
h_{}_{}_{}_{}_{}_eta".format(f_pt[0], f_pt[1], f_phi[2], f_phi[1], f_phi[0],
                             eb[0], eb[1], cs, pm, baty), cut)

    # fit pol2
    h_eta.Fit("tf1_eta", 'R')
    f_eta = tf1_eta.GetParameters()
    e_eta = tf1_eta.GetParErrors()

    h_eta.Write()
    print "eta fit result: (1./sagitta -(%f))/(%f) \
+ (%f)*phi*phi + (%f)*phi + (%f) + (%f)*eta*eta + (%f)*eta + (%f) " % \
        (f_pt[0], f_pt[1], f_phi[2], f_phi[1], f_phi[0],
            f_eta[2], f_eta[1], f_eta[0])
    return [f_pt[0], f_pt[1], f_phi[2], f_phi[1], f_phi[0],
            f_eta[2], f_eta[1], f_eta[0]]



# open file
filename = "/mnt/scratch/pgadow/trigger/master_thesis_study/\
user.pgadow.data12_8TeV.periodB.physics_Muons.PhysCont.AOD.repro14_v01.160517.\
MDT_standalone.v1_EXT0.MERGE.MDT-standalone.sagitta_tr.minitupel.root"

"/ptmp/mpp/pgadow/trigger/data_master_periodB/\
user.pgadow.data12_8TeV.periodB.physics_Muons.PhysCont.AOD.repro14_v01.\
160517.MDT_standalone.v1_EXT0.MERGE.MDT-standalone.minitupel.root"

"/mnt/scratch/pgadow/trigger/master_thesis/\
user.pgadow.data12_8TeV.periodB.physics_Muons.PhysCont.AOD.repro14_v01.160517.\
MDT_standalone.v1_EXT0.MERGE.MDT-standalone.minitupel.root"

f = ROOT.TFile(filename)
t = f.Get("L1_MDT_trigger_tree")

# manage file output
path = "/mnt/scratch/pgadow/trigger/resolution_study/{}".format(
    time.strftime("%Y-%m-%d"))
if not os.path.isdir(path):
    os.makedirs(path)
os.chdir(path)
o = ROOT.TFile("control_plots.root", 'RECREATE')
param_out = open('fitparameters.csv', 'w')
param_out.write('is_barrel,is_region,pt_i,pt_f,eta_i,eta_f,sagitta_X_0,\
chamber_size,barrel_type,a0,a1,p2,p1,p0,e2,e1,e0\n')

# define pt region for fit
b_pt_i = 10.
b_pt_f = 40.

# determine barrel parametrisation
# region definitions
eta_boundary = [(0.00, 0.40), (0.40, 0.80), (0.80, 1.05)]
plus_minus = ['<', '>']
chamber_size = [0, 1]
barrel_type = [1, 8, 13]
for pm in plus_minus:
    for eb in eta_boundary:
        for cs in chamber_size:
            if cs == 0:
                for baty in barrel_type:
                    r = fit_parametrisation(t, b_pt_i, b_pt_f, 1, baty, 0,
                                            cs, eb, pm)
                    param_out.write('1,0,{},{},{},{},{},{},{},{},{},{},{},{},\
{},{},{}\n'.format(b_pt_i, b_pt_f, eb[0], eb[1], pm, cs, baty, r[0], r[1],
                        r[2], r[3], r[4], r[5], r[6], r[7]))

            else:
                r = fit_parametrisation(t, b_pt_i, b_pt_f, 1, 0, 0,
                                        cs, eb, pm)
                param_out.write('1,0,{},{},{},{},{},{},{},{},{},{},{},{},\
{},{},{}\n'.format(b_pt_i, b_pt_f, eb[0], eb[1], pm, cs, baty, r[0], r[1],
                    r[2], r[3], r[4], r[5], r[6], r[7]))


# determine transition region parametrisation
eta_boundary = [(1.05, 1.10), (1.10, 1.15), (1.15, 1.20), (1.20, 1.25),
                (1.25, 1.30), (1.30, 1.35)]
plus_minus = ['<', '>']
chamber_size = [0, 1]
for pm in plus_minus:
    for eb in eta_boundary:
        for cs in chamber_size:
            r = fit_parametrisation(t, b_pt_i, b_pt_f, 1, 0, 0,
                                    cs, eb, pm)
            param_out.write('0,1,{},{},{},{},{},{},{},{},{},{},{},{},\
{},{},{}\n'.format(b_pt_i, b_pt_f, eb[0], eb[1], pm, cs, baty, r[0], r[1],
                   r[2], r[3], r[4], r[5], r[6], r[7]))

# determine end-cap parametrisation
eta_boundary = [(1.30, 1.40), (1.40, 1.50), (1.50, 1.60),
                (1.60, 1.70), (1.70, 1.80), (1.80, 1.90), (1.90, 2.00),
                (2.00, 2.10), (2.10, 2.20), (2.20, 2.30), (2.30, 2.40)]
plus_minus = ['<', '>']
chamber_size = [0, 1]
for pm in plus_minus:
    for eb in eta_boundary:
        for cs in chamber_size:
            r = fit_parametrisation(t, b_pt_i, b_pt_f, 1, 0, 0,
                                    cs, eb, pm)
            param_out.write('0,0,{},{},{},{},{},{},{},{},{},{},{},{},\
{},{},{}\n'.format(b_pt_i, b_pt_f, eb[0], eb[1], pm, cs, baty, r[0], r[1],
                   r[2], r[3], r[4], r[5], r[6], r[7]))

# close files
param_out.close()
o.Write()
o.Close()

# phi_b = [(-0.20, 3.60), (-3.60, -2.6), (-2.60, -2.385), (-2.385, -2.20),
#          (-2.20, -1.80), (-1.80, -1.40), (-1.40, -1.15), (-1.15, -0.20)]
