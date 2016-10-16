#! /bin/env python
"""Take merged output of calibration to write region parametrisation.cxx."""
import os
import sys

# store directory where the script was called
script_dir = os.path.dirname(os.path.abspath(__file__))
if not script_dir.endswith('/'):
    script_dir += '/'

if len(sys.argv) == 1:
    print "usage: specify date YYYY-MM-DD as argument"
    sys.exit()

# manage file output
path = "/mnt/scratch/pgadow/trigger/resolution_study/{}/".format(
    sys.argv[1])
if not os.path.isdir(path):
    os.makedirs(path)
os.chdir(path)
outputpath = path + 'pt_on_region.cxx'

infile_barrel = open('fitparameters_barrel_beta_om.csv', 'r')
infile_region = open('fitparameters_transition_region.csv', 'r')
infile_endcap = open('fitparameters_endcap.csv', 'r')

variable_barrel = 'abs(beta_outer - beta_middle)'
# variable_barrel = 'abs(beta_outer - beta_inner)'
# variable_barrel = 'abs(beta_middle - beta_inner)'
variable_endcap = 'abs(beta_middle - beta_inner)'
variable_transition_region = 'abs(beta_middle - beta_inner)'

with open(outputpath, 'wb') as f:
    f.write('//////////////////////////////////////////////////////////\n')
    f.write('// ATLAS L1 MDT trigger study: pt parametrisation for   //\n')
    f.write('// different station combinations of the Muon System    //\n')
    f.write('// in terms of sagitta, eta and phi.                    //\n')
    f.write('// Author: Paul.Philipp.Gadow@cern.ch                   //\n')
    f.write('//////////////////////////////////////////////////////////\n')
    f.write('\n\n')
    f.write('double pt_on_regions(double dbeta, double eta, double phi_mod,\n\
         int is_barrel, int is_transition_region, int is_small_sector,\n\
         int chamber_type_inner){\n')
    f.write('    double PASS = 999.0;\n\n')

    write_first_ifstatement = True
    # barrel
    for row in infile_barrel.read().split('\n'):
        data = row.split(',')
        if len(data) == 1:
            continue
        data[-1] = data[-1].replace('\r', '')
        print data
        if data[0] == 'is_barrel':
            continue

        is_barrel = data[0]
        is_region = data[1]
        pt_i = data[2]
        pt_f = data[3]
        eta_i = data[4]
        eta_f = data[5]
        cp_sign = data[6]
        cs = data[7]
        baty = data[8]
        a0 = data[9]
        a1 = data[10]
        p2 = data[11]
        p1 = data[12]
        p0 = data[13]
        e2 = data[14]
        e1 = data[15]
        e0 = data[16]

        if write_first_ifstatement:
            ifstatement = "if"
            write_first_ifstatement = False
        else:
            ifstatement = "else if"


        if baty != '0':
            baty_insert = '&& chamber_type_inner == {}'.format(baty)
        else:
            baty_insert = ''

        f.write('    {} (is_barrel == {} && is_transition_region == {} &&\n\
    is_small_sector == {} {} && abs(eta) > {} && abs(eta) < {})\
    {{\n'.format(ifstatement, is_barrel, is_region, cs,
                                 baty_insert, eta_i, eta_f))
        f.write('        return (({})/(({}) - ({})) -\n\
            ({})*phi_mod*phi_mod - ({})*phi_mod - ({}) -\n\
            ({})*eta*eta - ({})*eta - ({}));}}\n\n'.format(
            a1, variable_barrel, a0, p2, p1, p0, e2, e1, e0))

    # transition region
    for row in infile_region.read().split('\n'):
        data = row.split(',')
        if len(data) == 1:
            continue
        data[-1] = data[-1].replace('\r', '')
        print data
        if data[0] == 'is_barrel':
            continue

        is_barrel = data[0]
        is_region = data[1]
        pt_i = data[2]
        pt_f = data[3]
        eta_i = data[4]
        eta_f = data[5]
        cp_sign = data[6]
        cs = data[7]
        baty = data[8]
        a0 = data[9]
        a1 = data[10]
        p2 = data[11]
        p1 = data[12]
        p0 = data[13]
        e2 = data[14]
        e1 = data[15]
        e0 = data[16]


    #     f.write('    else if (is_barrel == {} && is_transition_region == {} &&\n\
    # is_small_sector == {} && abs(eta) > {} && abs(eta) < {})\
    # {{\n'.format(is_barrel, is_region, cs, eta_i, eta_f))
    #     f.write('        return (({})/(({}) - ({})) -\n\
    #         ({})*phi_mod*phi_mod - ({})*phi_mod - ({}) -\n\
    #         ({})*eta*eta - ({})*eta - ({}));}}\n\n'.format(
    #         a1, variable_transition_region, a0, p2, p1, p0, e2, e1, e0))

    # end-cap
    for row in infile_endcap.read().split('\n'):
        data = row.split(',')
        if len(data) == 1:
            continue
        data[-1] = data[-1].replace('\r', '')
        print data
        if data[0] == 'is_barrel':
            continue

        is_barrel = data[0]
        is_region = data[1]
        pt_i = data[2]
        pt_f = data[3]
        eta_i = data[4]
        eta_f = data[5]
        cp_sign = data[6]
        cs = data[7]
        baty = data[8]
        a0 = data[9]
        a1 = data[10]
        p2 = data[11]
        p1 = data[12]
        p0 = data[13]
        e2 = data[14]
        e1 = data[15]
        e0 = data[16]

        
    #     f.write('    else if (is_barrel == {} && is_transition_region == {} &&\n\
    # is_small_sector == {} && abs(eta) > {} && abs(eta) < {})\
    # {{\n'.format(is_barrel, is_region, cs, eta_i, eta_f))
    #     f.write('        return (({})/(({}) - ({})) -\n\
    #         ({})*phi_mod*phi_mod - ({})*phi_mod - ({}) -\n\
    #         ({})*eta*eta - ({})*eta - ({}));}}\n\n'.format(
    #         a1, variable_endcap, a0, p2, p1, p0, e2, e1, e0))

    f.write('    return PASS;')
    f.write('}')
