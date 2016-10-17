#! /bin/env/python
"""determine thresholds for 95% efficiency."""
import os
import ROOT
from MDT_trigger_toolbox import calc_efficiency

# get input ntuple
f = ROOT.TFile('rate_study.root')
t = f.Get('ntuple')

# create threshold file
output = open('L1MU20_thresholds_combined.txt', 'w')

# define histograms
h_cut = {}
h_all = {}
thresholds_regions = {}

# eta_boundary = [(0.00, 1.05),
#                 (1.05, 1.30),
#                 (1.30, 1.40), (1.40, 1.50), (1.50, 1.60), (1.60, 1.70),
#                 (1.70, 1.80), (1.80, 1.90), (1.90, 2.00), (2.00, 2.10),
#                 (2.10, 2.20), (2.20, 2.30), (2.30, 2.40)]
eta_boundary = [(0.00, 1.05), (1.05, 1.40),
                (1.40, 1.60), (1.60, 2.00), (2.00, 2.40)]
# phi_boundary = [(-3.60, 3.60)]
phi_boundary = [(-0.20, 3.60), (-3.60, -2.6), (-2.60, -2.385), (-2.385, -2.20),
                (-2.20, -1.80), (-1.80, -1.40), (-1.40, -1.15), (-1.15, -0.20)]
chamber_size = [0, 1]

for b in eta_boundary:
    for p in phi_boundary:
        for c in chamber_size:
            name = 'h_barrel_{}_{}_{}_{}_{}_c'.format(b[0], b[1], p[0], p[1], c)
            h_cut[(b, p, c)] = ROOT.TH1F(name, name, 3000, 10, 100)
            h_cut[(b, p, c)].SetTitle(
                ';pt^{{CB}}_{{T}};entries / {} GeV'.format(
                    h_cut[(b, p, c)].GetXaxis().GetBinWidth(1)))

            name = 'h_barrel_{}_{}_{}_{}_{}_a'.format(b[0], b[1], p[0], p[1], c)
            h_all[(b, p, c)] = ROOT.TH1F(name, name, 3000, 10, 100)
            h_all[(b, p, c)].SetTitle(
                ';pt^{{CB}}_{{T}};entries / {} GeV'.format(
                    h_all[(b, p, c)].GetXaxis().GetBinWidth(1)))

# loop over regions:
for b in eta_boundary:
    for p in phi_boundary:
        for c in chamber_size:
            print b, p, c
            second_loop = True
            # going down from 20 GeV to 5 GeV in steps of 0.5 GeV 
            for pt_threshold in xrange(200, 50, -5):
                pt_threshold *= 0.1
                h_cut[(b, p, c)].Reset()
                h_all[(b, p, c)].Reset()
                for event in t:
                    pt = event.pt
                    pt_rec = event.pt_on
                    if(pt_rec > 99):
                        pt_rec = 99
                    eta = abs(event.eta)
                    phi = event.phi
                    sector = event.is_small_sector
                    if eta > b[0] and eta < b[1] and phi > p[0] and \
                    phi < p[1] and sector == c:
                        h_all[(b, p, c)].Fill(pt)
                        if pt_rec > pt_threshold:
                            h_cut[(b, p, c)].Fill(pt)
                efficiency = calc_efficiency(h_cut[(b, p, c)], h_all[(b, p, c)])

                print pt_threshold, efficiency
                if pt_threshold == 5.5:
                    second_loop = False
                if efficiency < 0:
                    second_loop = False
                    break
                if efficiency >= 0.945:
                    break

            new_range = int(pt_threshold*100)+50
            efficiency = 0
            for pt_threshold in xrange(new_range, 500, -2):
                if (not second_loop):
                    pt_threshold *= 0.01
                    break
                pt_threshold *= 0.01
                event_counter = 0
                h_cut[(b, p, c)].Reset()
                h_all[(b, p, c)].Reset()
                for event in t:
                    pt = event.pt
                    pt_rec = event.pt_on
                    if(pt_rec > 99):
                        pt_rec = 99
                    eta = abs(event.eta)
                    phi = event.phi
                    sector = event.is_small_sector
                    if eta > b[0] and eta < b[1] and phi > p[0] and \
                    phi < p[1] and sector == c:
                        h_all[(b, p, c)].Fill(pt)
                        if pt_rec > pt_threshold:
                            h_cut[(b, p, c)].Fill(pt)
                efficiency = calc_efficiency(h_cut[(b, p, c)], h_all[(b, p, c)])
                print pt_threshold, efficiency
                if efficiency < 0:
                    break
                if efficiency >= 0.945:
                    break
            print b, p, c
            print pt_threshold, efficiency
            outline = str(b[0]) + ' ' + str(b[1]) + ' ' + \
                str(p[0]) + ' ' + str(p[1]) + ' ' + str(c) + ' ' + \
                str(pt_threshold) + ' ' + str(efficiency) + '\n'
            output.write(outline)
output.close()
