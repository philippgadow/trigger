#! /bin/env python
"""Process calibration data to obtain parametrisation."""
import os
import time
import ROOT

ROOT.gROOT.SetBatch(True)


variable = "abs(beta_middle - beta_inner)"

# define fit procedure
def fit_parametrisation(t, b_pt_i, b_pt_f, isba, baty, isre, cs, eb, pm):
    """fit procedure, input tree t."""
    print "pt_min: {}, pt_max: {}, barrel: {}, barrel type: {}, \
transition_region: {}, small sector: {}, eta_min: {}, eta_max: {}, dbeta {} \
0".format(b_pt_i, b_pt_f, isba, baty, isre, cs, eb[0], eb[1], pm)
    # fit in pt
    h_pt = ROOT.TH2D("h_{}_{}_{}_{}_{}_pt".format(eb[0], eb[1], cs, pm, baty),
                     "h_{}_{}_{}_{}_{}_pt".format(eb[0], eb[1], cs, pm, baty),
                     6000, 1./b_pt_f, 1./b_pt_i, 1000, 0.0, 0.1)

    tf1_pt = ROOT.TF1('tf1_pt', 'pol1', 1./b_pt_f, 1./b_pt_i)
    tf1_pt.SetParameters(0., 0.)

    cut = "pt > {} && pt < {} && abs({}) < 0.1 && \
is_barrel == {} && is_transition_region == {} && is_small_sector == {} &&\
abs(eta) > {} && abs(eta) < {}".format(b_pt_i, b_pt_f, variable,
                                       isba, isre, cs, eb[0], eb[1])
    
    check = t.Draw("{}:1./pt>>h_{}_{}_{}_{}_{}_pt".format(variable, eb[0], eb[1],
                                                               cs, pm, baty),
                   cut)
    if check < 100:
        return [999, 0, 1, 0, 0, 0, 0, 0]

    # fit pol1
    h_pt.Fit("tf1_pt", 'R')
    f_pt = tf1_pt.GetParameters()
    e_pt = tf1_pt.GetParErrors()

    print "pt fit result: %f /(%s - %f)" % (f_pt[1], variable, f_pt[0])
    h_pt.Write()

    # fit in phi
    h_phi = ROOT.TH2D("h_{}_{}_{}_{}_{}_phi".format(eb[0], eb[1], cs, pm, baty),
                      "h_{}_{}_{}_{}_{}_phi".format(eb[0], eb[1], cs, pm, baty),
                      2000, -0.5, 0.5, 4000, -20, 20)
    tf1_phi = ROOT.TF1('tf1_phi', 'pol2', -0.5, 0.5)
    tf1_phi.SetParameters(0., 0., 0.)

    t.Draw("(({})/({}-({})) - pt) : phi_mod>>\
h_{}_{}_{}_{}_{}_phi".format(f_pt[1], variable, f_pt[0], eb[0], eb[1], cs, pm, baty), cut)

    # fit pol2
    h_phi.Fit("tf1_phi", 'R')
    f_phi = tf1_phi.GetParameters()
    e_phi = tf1_phi.GetParErrors()

    h_phi.Write()
    print "phi fit result: (%f /(%s - %f) + (%f)*phi*phi + \
(%f)*phi +(%f)" % (f_pt[1], variable, f_pt[0], f_phi[2], f_phi[1], f_phi[0])

    # fit in eta
    h_eta = ROOT.TH2D("h_{}_{}_{}_{}_{}_eta".format(eb[0], eb[1], cs, pm, baty),
                      "h_{}_{}_{}_{}_{}_eta".format(eb[0], eb[1], cs, pm, baty),
                      1008, -2.52, 2.52, 4000, -20, 20)
    tf1_eta = ROOT.TF1('tf1_eta', 'pol2', -2.52, 2.52)
    tf1_eta.SetParameters(0., 0., 0.)
    t.Draw("(({})/({}-({})) - \
        {}*phi_mod*phi_mod-{}*phi_mod-{} - pt) : eta>>\
h_{}_{}_{}_{}_{}_eta".format(f_pt[1], variable, f_pt[0], f_phi[2], f_phi[1], f_phi[0],
                             eb[0], eb[1], cs, pm, baty), cut)

    # fit pol2
    h_eta.Fit("tf1_eta", 'R')
    f_eta = tf1_eta.GetParameters()
    e_eta = tf1_eta.GetParErrors()

    h_eta.Write()
    print "eta fit result: %f /(%s - %f) \
+ (%f)*phi*phi + (%f)*phi + (%f) + (%f)*eta*eta + (%f)*eta + (%f) " % \
        (f_pt[1], variable, f_pt[0], f_phi[2], f_phi[1], f_phi[0],
            f_eta[2], f_eta[1], f_eta[0])
    return [f_pt[0], f_pt[1], f_phi[2], f_phi[1], f_phi[0],
            f_eta[2], f_eta[1], f_eta[0]]


# open file
# filename = "/mnt/scratch/pgadow/trigger/master_thesis_study/\
# user.pgadow.data12_8TeV.periodB.physics_Muons.PhysCont.AOD.repro14_v01.160517.\
# MDT_standalone.v1_EXT0.MERGE.MDT-standalone.sagitta_tr.minitupel.root"
filename = "/mnt/scratch/pgadow/trigger/combined_method/\
user.pgadow.data12_8TeV.periodB.physics_Muons.PhysCont.AOD.repro14_v01.160517.\
MDT_standalone.v1_EXT0.MERGE.MDT-standalone.sagitta_tr_combined_analysis_horii.minitupel.root"


f = ROOT.TFile(filename)
t = f.Get("L1_MDT_trigger_tree")

varname = "beta_mi"

# manage file output
path = "/mnt/scratch/pgadow/trigger/resolution_study/{}".format(
    time.strftime("%Y-%m-%d"))
if not os.path.isdir(path):
    os.makedirs(path)
os.chdir(path)
o = ROOT.TFile("control_plots_endcap.root", 'RECREATE')
param_out = open('fitparameters_endcap.csv', 'w')
param_out.write('is_barrel,is_region,pt_i,pt_f,eta_i,eta_f,sagitta_X_0,\
chamber_size,barrel_type,a0,a1,p2,p1,p0,e2,e1,e0\n')

# define pt region for fit
b_pt_i = 10.
b_pt_f = 40.

# determine end-cap parametrisation
eta_boundary = [(1.30, 1.40), (1.40, 1.50), (1.50, 1.60),
                (1.60, 1.70), (1.70, 1.80), (1.80, 1.90), (1.90, 2.00),
                (2.00, 2.10), (2.10, 2.20), (2.20, 2.30), (2.30, 2.40)]
#plus_minus = ['<', '>']
plus_minus = ['>']
chamber_size = [0, 1]
for pm in plus_minus:
    for eb in eta_boundary:
        for cs in chamber_size:
            r = fit_parametrisation(t, b_pt_i, b_pt_f, 0, 0, 0,
                                    cs, eb, pm)
            param_out.write('0,0,{},{},{},{},{},{},{},{},{},{},{},{},\
{},{},{}\n'.format(b_pt_i, b_pt_f, eb[0], eb[1], pm, cs, 0, r[0], r[1],
                   r[2], r[3], r[4], r[5], r[6], r[7]))

# close files
param_out.close()
o.Write()
o.Close()
