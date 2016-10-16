//////////////////////////////////////////////////////////
// ATLAS L1 MDT trigger study: pt parametrisation for   //
// different station combinations of the Muon System    //
// in terms of sagitta, eta and phi.                    //
// Author: Paul.Philipp.Gadow@cern.ch                   //
//////////////////////////////////////////////////////////


double pt_on_beta_oi_regions(double beta_outer, double beta_inner, double eta, double phi_mod,
         int is_barrel, int is_transition_region, int is_small_sector,
         int chamber_type_inner){
    double PASS = 999.0;

    if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.748573546712)/((abs(beta_outer - beta_inner)) - (-0.00579128334552)) -
            (35.1027797405)*phi_mod*phi_mod - (-0.112501164905)*phi_mod - (-0.348520181486) -
            (-35.9283911879)*eta*eta - (0.0520128117249)*eta - (2.93374434325));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.548180099689)/((abs(beta_outer - beta_inner)) - (-0.00474951380132)) -
            (70.3426424815)*phi_mod*phi_mod - (-1.09812065669)*phi_mod - (-0.65205936619) -
            (-29.5377602692)*eta*eta - (0.039193131279)*eta - (1.69213875647));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.740556567004)/((abs(beta_outer - beta_inner)) - (-0.00614587501281)) -
            (15.6000567433)*phi_mod*phi_mod - (0.331069873304)*phi_mod - (-0.0718946505245) -
            (-11.1241925357)*eta*eta - (-0.05293929011)*eta - (1.20706416622));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.915106016079)/((abs(beta_outer - beta_inner)) - (-9.8354091099e-05)) -
            (273.51977637)*phi_mod*phi_mod - (-0.361540145711)*phi_mod - (-1.81690375223) -
            (-36.2894342571)*eta*eta - (-0.00197249642239)*eta - (2.27148813208));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.809933705491)/((abs(beta_outer - beta_inner)) - (-0.00590038955216)) -
            (-39.6236111752)*phi_mod*phi_mod - (0.0405147622445)*phi_mod - (0.735716417571) -
            (0.346246033029)*eta*eta - (-0.023242563229)*eta - (-0.126397614791));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.641512510025)/((abs(beta_outer - beta_inner)) - (-0.0057377075545)) -
            (-19.8302451375)*phi_mod*phi_mod - (0.133328447592)*phi_mod - (0.682727262822) -
            (-1.21315111007)*eta*eta - (-0.0267544863105)*eta - (0.421722172333));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.763152643918)/((abs(beta_outer - beta_inner)) - (-0.00601929288779)) -
            (-28.2093506919)*phi_mod*phi_mod - (0.442799598131)*phi_mod - (0.603369049546) -
            (0.288602782242)*eta*eta - (-0.0570118505658)*eta - (-0.109696787864));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((1.13253179211)/((abs(beta_outer - beta_inner)) - (-0.00484242054984)) -
            (167.758901649)*phi_mod*phi_mod - (-0.290432479126)*phi_mod - (-0.831230195847) -
            (0.234447230474)*eta*eta - (-0.025573243683)*eta - (-0.0788891444497));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.760206166874)/((abs(beta_outer - beta_inner)) - (-0.00485737373672)) -
            (-65.6666377724)*phi_mod*phi_mod - (0.0625167755907)*phi_mod - (1.07499168717) -
            (2.14865654132)*eta*eta - (-0.0292771244114)*eta - (-1.77518343377));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.58452958879)/((abs(beta_outer - beta_inner)) - (-0.00444716309564)) -
            (-54.5303855854)*phi_mod*phi_mod - (0.413618473991)*phi_mod - (1.04383762332) -
            (2.18938534235)*eta*eta - (-0.0513610250025)*eta - (-1.78295504077));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.701486389197)/((abs(beta_outer - beta_inner)) - (-0.0045849940553)) -
            (-56.5757910228)*phi_mod*phi_mod - (0.852917051142)*phi_mod - (0.968913368957) -
            (3.00589946866)*eta*eta - (-0.0441825441307)*eta - (-2.45450493593));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((1.1003840175)/((abs(beta_outer - beta_inner)) - (-0.00377797257097)) -
            (190.579320503)*phi_mod*phi_mod - (-0.429171609349)*phi_mod - (-0.958832492742) -
            (-1.5509102713)*eta*eta - (-0.0432359208277)*eta - (1.20979015042));}

    return PASS;}