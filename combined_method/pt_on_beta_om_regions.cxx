//////////////////////////////////////////////////////////
// ATLAS L1 MDT trigger study: pt parametrisation for   //
// different station combinations of the Muon System    //
// in terms of sagitta, eta and phi.                    //
// Author: Paul.Philipp.Gadow@cern.ch                   //
//////////////////////////////////////////////////////////


double pt_on_beta_om_regions(double beta_outer, double beta_middle, double eta, double phi_mod,
         int is_barrel, int is_transition_region, int is_small_sector,
         int chamber_type_inner){
    double PASS = 999.0;

    if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0  && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.31568264927)/((abs(beta_outer - beta_middle)) - (-0.00138198318981)) -
            (0.423580067179)*phi_mod*phi_mod - (-0.0517422445184)*phi_mod - (0.14086180499) -
            (1.76875613421)*eta*eta - (0.0815334933878)*eta - (-0.121971128361));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.322275824411)/((abs(beta_outer - beta_middle)) - (-0.000734466500588)) -
            (23.5620451973)*phi_mod*phi_mod - (-0.0159482072974)*phi_mod - (-0.17016849417) -
            (9.1869958703)*eta*eta - (0.100094894309)*eta - (-0.556183907224));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0  && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.354365771774)/((abs(beta_outer - beta_middle)) - (-0.00243402374234)) -
            (9.49099286318)*phi_mod*phi_mod - (0.0735745008347)*phi_mod - (0.621543099874) -
            (0.220838487741)*eta*eta - (-0.0090344586284)*eta - (-0.0389309190434));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.387483702602)/((abs(beta_outer - beta_middle)) - (-0.00323990721482)) -
            (125.370794193)*phi_mod*phi_mod - (-0.109090043775)*phi_mod - (-0.14378282427) -
            (0.00494609158493)*eta*eta - (-0.00337972461364)*eta - (0.0484989367491));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0  && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.331037974092)/((abs(beta_outer - beta_middle)) - (-0.00227625554995)) -
            (-19.6577803808)*phi_mod*phi_mod - (0.0247966914751)*phi_mod - (0.533788746895) -
            (3.36982724596)*eta*eta - (-0.00378021071853)*eta - (-2.77524135709));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.390349331947)/((abs(beta_outer - beta_middle)) - (-0.00305630717017)) -
            (180.800910769)*phi_mod*phi_mod - (-0.523584569865)*phi_mod - (-0.653305167393) -
            (-6.9714931555)*eta*eta - (0.0231549407526)*eta - (5.44774017001));}

    return PASS;}