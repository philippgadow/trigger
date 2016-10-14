//////////////////////////////////////////////////////////
// ATLAS L1 MDT trigger study: pt parametrisation for   //
// different station combinations of the Muon System    //
// in terms of sagitta, eta and phi.                    //
// Author: Paul.Philipp.Gadow@cern.ch                   //
//////////////////////////////////////////////////////////


double pt_on_sagitta_regions(double sagitta, double eta, double phi_mod,
         int is_barrel, int is_transition_region, int is_small_sector,
         int chamber_type_inner){
    double PASS = 99999.0;

    int plus_sign = (sagitta > 0);
    if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.0063245889092))/(-0.00263207906144) -
            (-49.5124348449)*phi_mod*phi_mod - (-4.4141510473)*phi_mod - (0.664456641974) -
            (-12.5458685795)*eta*eta - (0.735329153367)*eta - (0.87741189319));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.010265313853))/(-0.00562802821386) -
            (-70.2501070389)*phi_mod*phi_mod - (-3.77223629012)*phi_mod - (0.846967808353) -
            (-5.48153381068)*eta*eta - (-0.157001608103)*eta - (0.290596090233));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00961098333037))/(-0.0033354855121) -
            (-47.4204512266)*phi_mod*phi_mod - (-4.50045100854)*phi_mod - (0.44602698839) -
            (-1.37644660019)*eta*eta - (1.05763111155)*eta - (0.156205038325));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00297061877745))/(-0.00126865000341) -
            (195.837614356)*phi_mod*phi_mod - (16.8490495843)*phi_mod - (-2.14553866193) -
            (-8.49175413009)*eta*eta - (1.32184623084)*eta - (0.437238655124));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00449928956132))/(-0.00222814517402) -
            (-53.6837892378)*phi_mod*phi_mod - (-3.8711141042)*phi_mod - (0.725820912561) -
            (-4.97878366848)*eta*eta - (0.893602710844)*eta - (1.7501677146));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00514623248045))/(-0.00472018844862) -
            (-62.1532581)*phi_mod*phi_mod - (-6.03953538614)*phi_mod - (0.687494503066) -
            (-4.82815406887)*eta*eta - (0.871435531577)*eta - (1.56834169347));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 0){
        return ((1./sagitta - (0.0072169579171))/(-0.00287814452594) -
            (-41.0898804461)*phi_mod*phi_mod - (-3.03210314898)*phi_mod - (0.555499883111) -
            (-4.93846640855)*eta*eta - (0.714344400752)*eta - (1.75320435626));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00250478590987))/(-0.00111991271224) -
            (207.792382053)*phi_mod*phi_mod - (15.8203683491)*phi_mod - (-2.4605145224) -
            (-5.44942576409)*eta*eta - (1.21494424309)*eta - (2.02695734738));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00361430830299))/(-0.00189280983821) -
            (-60.1106523042)*phi_mod*phi_mod - (-3.9853253215)*phi_mod - (0.84317129478) -
            (-5.67813063182)*eta*eta - (0.710629827568)*eta - (4.860745613));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00267780141871))/(-0.00386673752096) -
            (-91.5019223482)*phi_mod*phi_mod - (-2.2246086889)*phi_mod - (1.14118043265) -
            (-8.06246912229)*eta*eta - (0.679072610349)*eta - (6.36143780156));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00394570341834))/(-0.00235531340802) -
            (-59.0287726334)*phi_mod*phi_mod - (-5.70251609281)*phi_mod - (0.602895828019) -
            (-4.57189669929)*eta*eta - (0.810902702796)*eta - (3.59128846907));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00118496050354))/(-0.000889744642396) -
            (235.13014186)*phi_mod*phi_mod - (18.2313680554)*phi_mod - (-2.42543491884) -
            (-5.41312484568)*eta*eta - (1.35204197935)*eta - (4.24410958133));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00631764080806))/(0.00263617045764) -
            (-54.7430759587)*phi_mod*phi_mod - (4.59165087817)*phi_mod - (0.733088022433) -
            (-11.2592330608)*eta*eta - (-1.21079448016)*eta - (0.786826288975));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.0101807369038))/(0.00556719927342) -
            (-77.1060174841)*phi_mod*phi_mod - (7.06406894307)*phi_mod - (0.902313703264) -
            (-7.73621971547)*eta*eta - (-1.50516870534)*eta - (0.342220429363));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00875511727311))/(0.0032454682802) -
            (-61.1681478381)*phi_mod*phi_mod - (5.44936226318)*phi_mod - (0.749064715017) -
            (-6.47029466565)*eta*eta - (-0.32430101166)*eta - (0.599031330855));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00226822240541))/(0.00122026159342) -
            (203.667648444)*phi_mod*phi_mod - (-16.9383376065)*phi_mod - (-2.13131725054) -
            (-6.55559657762)*eta*eta - (-1.52174664989)*eta - (0.339034672906));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00521932186196))/(0.00227305013976) -
            (-57.0317794451)*phi_mod*phi_mod - (4.05175370841)*phi_mod - (0.769324199785) -
            (-4.64210950019)*eta*eta - (-0.834522176684)*eta - (1.59857993238));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00779839044653))/(0.00490960578934) -
            (-75.0691045538)*phi_mod*phi_mod - (7.15314602188)*phi_mod - (0.604230686863) -
            (-4.70710918041)*eta*eta - (-0.767252153656)*eta - (1.59882822985));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00470920376785))/(0.00272145378571) -
            (-54.4211295745)*phi_mod*phi_mod - (4.60530131932)*phi_mod - (0.614172451709) -
            (-5.54472810356)*eta*eta - (-0.711909957978)*eta - (1.9385342004));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00177577004792))/(0.0010626023493) -
            (190.481785033)*phi_mod*phi_mod - (-14.4047051079)*phi_mod - (-2.21115080651) -
            (-4.93062396496)*eta*eta - (-1.42944102718)*eta - (1.85936764366));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00387421565268))/(0.00193688130882) -
            (-54.2806989883)*phi_mod*phi_mod - (4.38967334306)*phi_mod - (0.581202773158) -
            (-5.02168737899)*eta*eta - (-0.721555933512)*eta - (4.21189429083));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.009159002106))/(0.00436566411031) -
            (-84.9136992348)*phi_mod*phi_mod - (6.36940891253)*phi_mod - (0.763897167757) -
            (-7.20140146196)*eta*eta - (-0.750262820211)*eta - (5.86236866546));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00224254244536))/(0.00224995483092) -
            (-48.1134574243)*phi_mod*phi_mod - (3.36489263723)*phi_mod - (0.638175029725) -
            (-6.05721483702)*eta*eta - (-0.858363770755)*eta - (4.90204458482));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000624021003949))/(0.000852305268762) -
            (220.580010652)*phi_mod*phi_mod - (-15.3711460971)*phi_mod - (-2.32678752754) -
            (-5.50164967889)*eta*eta - (-1.47535731227)*eta - (4.23139532232));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.05 && abs(eta) < 1.1 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00361089764386))/(-0.00219427581485) -
            (-87.1482925071)*phi_mod*phi_mod - (-1.41116717508)*phi_mod - (1.26258856912) -
            (-5.52013598118)*eta*eta - (-0.0112201047819)*eta - (6.39401615998));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.05 && abs(eta) < 1.1 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000573984662181))/(-0.000698823610399) -
            (302.486867692)*phi_mod*phi_mod - (15.5433732637)*phi_mod - (-3.02565967264) -
            (-382.504762007)*eta*eta - (-861.955900317)*eta - (-484.412432357));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.1 && abs(eta) < 1.15 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00626116352859))/(-0.00228200671944) -
            (-96.9213380361)*phi_mod*phi_mod - (-3.00495890579)*phi_mod - (1.29654855164) -
            (-7.0697659822)*eta*eta - (-0.045148780822)*eta - (8.93549752911));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.1 && abs(eta) < 1.15 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.00210605091406))/(-0.000713029067554) -
            (303.596942464)*phi_mod*phi_mod - (15.870154752)*phi_mod - (-5.42014122254) -
            (30.6929785845)*eta*eta - (-1.84810527351)*eta - (-40.9379760392));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.15 && abs(eta) < 1.2 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00255912142659))/(-0.00195976221444) -
            (-93.6075862468)*phi_mod*phi_mod - (-2.55771936397)*phi_mod - (1.56112549875) -
            (7.47096176133)*eta*eta - (-0.00860283463617)*eta - (-10.3222933134));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.15 && abs(eta) < 1.2 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.00110502550927))/(-0.000797381973581) -
            (298.229607087)*phi_mod*phi_mod - (10.97546497)*phi_mod - (-3.72970868755) -
            (19.2479111376)*eta*eta - (3.36018324997)*eta - (-22.5648995249));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.2 && abs(eta) < 1.25 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00333592375726))/(-0.00212018734238) -
            (-104.638986211)*phi_mod*phi_mod - (-0.214642155276)*phi_mod - (1.36696240553) -
            (1.65167340762)*eta*eta - (-0.0981453590765)*eta - (-2.49065683504));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.2 && abs(eta) < 1.25 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.00675319562155))/(-0.000614104324449) -
            (381.542057193)*phi_mod*phi_mod - (26.6385772507)*phi_mod - (-5.49060507488) -
            (4354.43316277)*eta*eta - (10548.4015273)*eta - (6387.17734631));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.25 && abs(eta) < 1.3 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.00392529212009))/(-0.00199539049495) -
            (-184.19166802)*phi_mod*phi_mod - (-4.47125383224)*phi_mod - (1.91233161484) -
            (31.7363924109)*eta*eta - (0.354076108316)*eta - (-51.6048254974));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.25 && abs(eta) < 1.3 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000922342510362))/(-0.00128590619245) -
            (323.618678244)*phi_mod*phi_mod - (14.6177117885)*phi_mod - (-4.41507010434) -
            (16.311703638)*eta*eta - (1.76236500529)*eta - (-24.4735394583));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.35 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.0132951288994))/(-0.00165020935157) -
            (-344.894660484)*phi_mod*phi_mod - (-4.54088327455)*phi_mod - (1.4983990582) -
            (-105.289170257)*eta*eta - (0.395429507926)*eta - (179.14041771));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.35 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00469821613485))/(-0.00138159327332) -
            (415.587071824)*phi_mod*phi_mod - (0.856478925759)*phi_mod - (-2.92823299669) -
            (26305.5309705)*eta*eta - (68784.6485904)*eta - (44964.5492773));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.05 && abs(eta) < 1.1 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.0222305754875))/(0.00290292120689) -
            (-44.7737232572)*phi_mod*phi_mod - (5.27499310987)*phi_mod - (1.23452540784) -
            (-22.8938900189)*eta*eta - (0.174190472364)*eta - (27.3828575119));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.05 && abs(eta) < 1.1 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00226808609804))/(0.000787812924093) -
            (425.611380308)*phi_mod*phi_mod - (-5.97839778235)*phi_mod - (-3.85108677233) -
            (3742.81505104)*eta*eta - (8148.9776222)*eta - (4435.33340208));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.1 && abs(eta) < 1.15 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00486832311249))/(0.00212313932852) -
            (-74.5762076759)*phi_mod*phi_mod - (2.12986070858)*phi_mod - (1.32245583721) -
            (-6.00522400793)*eta*eta - (0.139850664405)*eta - (7.67609544725));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.1 && abs(eta) < 1.15 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000984007823256))/(0.000738156207314) -
            (240.652567168)*phi_mod*phi_mod - (-8.43282107248)*phi_mod - (-1.48902888023) -
            (5.00378231713)*eta*eta - (-5.10732143643)*eta - (-11.9964892782));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.15 && abs(eta) < 1.2 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00285370934072))/(0.00197338128269) -
            (-90.675657663)*phi_mod*phi_mod - (1.11044413236)*phi_mod - (1.51882613839) -
            (-1.75429500865)*eta*eta - (0.161812590991)*eta - (2.4556800591));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.15 && abs(eta) < 1.2 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00384422537356))/(0.000995752965392) -
            (309.730357153)*phi_mod*phi_mod - (-15.451494726)*phi_mod - (-1.48720860126) -
            (333.788242944)*eta*eta - (755.188342107)*eta - (426.424813517));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.2 && abs(eta) < 1.25 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00473471377375))/(0.00217978034589) -
            (-84.6883657748)*phi_mod*phi_mod - (1.4639815729)*phi_mod - (1.30902932333) -
            (9.21232691657)*eta*eta - (0.021019278457)*eta - (-13.7721547227));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.2 && abs(eta) < 1.25 &&
    plus_sign == 1){
        return ((1./sagitta - (0.011023109065))/(0.000450148958075) -
            (1033.27099426)*phi_mod*phi_mod - (-70.3100435358)*phi_mod - (-11.1752011872) -
            (-1877.40562953)*eta*eta - (-4639.30742874)*eta - (-2865.39816718));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.25 && abs(eta) < 1.3 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00311954931835))/(0.00221010954241) -
            (-130.443418438)*phi_mod*phi_mod - (1.04962118814)*phi_mod - (2.67124328308) -
            (18.8694714658)*eta*eta - (0.125557148712)*eta - (-30.8385191263));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.25 && abs(eta) < 1.3 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.0046437297512))/(0.00136117824185) -
            (321.144267727)*phi_mod*phi_mod - (-18.9865849312)*phi_mod - (-1.89219985447) -
            (-682.586531152)*eta*eta - (-1787.13600658)*eta - (-1168.9653126));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.35 &&
    plus_sign == 1){
        return ((1./sagitta - (-5.48672847408e-05))/(0.002319759566) -
            (-142.144303368)*phi_mod*phi_mod - (2.39110307888)*phi_mod - (2.34026450756) -
            (8.57899236898)*eta*eta - (0.153858494726)*eta - (-14.5783112946));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.35 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000447874752138))/(0.00122668096722) -
            (312.16954361)*phi_mod*phi_mod - (-12.2544121561)*phi_mod - (-2.13129639627) -
            (25.2961668918)*eta*eta - (-1.12050257139)*eta - (-44.9650755904));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.4 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.0026602299933))/(-0.000715182958919) -
            (-184.598117235)*phi_mod*phi_mod - (0.694048767649)*phi_mod - (2.97687717141) -
            (-11.6247528239)*eta*eta - (0.0560825438962)*eta - (22.1267514386));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000750784719654))/(-0.000551047857943) -
            (216.888098551)*phi_mod*phi_mod - (0.318386295759)*phi_mod - (-1.14271953169) -
            (13.8617831985)*eta*eta - (0.18713330616)*eta - (-26.3941095194));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.4 && abs(eta) < 1.5 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00141548618298))/(-0.000846377753945) -
            (-83.0581673262)*phi_mod*phi_mod - (-0.614839661214)*phi_mod - (2.51056308629) -
            (3.86163015487)*eta*eta - (0.103215790596)*eta - (-8.12725406382));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.4 && abs(eta) < 1.5 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.000289987819437))/(-0.000689025126631) -
            (250.49157004)*phi_mod*phi_mod - (3.36345950096)*phi_mod - (-1.82458763164) -
            (36.0538413463)*eta*eta - (-0.124565884862)*eta - (-75.7818742616));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.5 && abs(eta) < 1.6 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000723127928766))/(-0.000822451905541) -
            (-8.0691941145)*phi_mod*phi_mod - (0.0162809497765)*phi_mod - (0.140943141173) -
            (-3.10518933958)*eta*eta - (0.0566059387949)*eta - (7.38302914572));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.5 && abs(eta) < 1.6 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.0314870917121))/(-0.000939968018343) -
            (-560.792920976)*phi_mod*phi_mod - (9.23774659783)*phi_mod - (-0.948921647176) -
            (13.8115966638)*eta*eta - (0.0509387620857)*eta - (-40.2695432662));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.6 && abs(eta) < 1.7 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.000454761926853))/(-0.000658816951845) -
            (99.978088944)*phi_mod*phi_mod - (-0.180578513566)*phi_mod - (-3.07505792525) -
            (-3.18427892831)*eta*eta - (-0.0504779331482)*eta - (8.71189164058));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.6 && abs(eta) < 1.7 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.0114545019959))/(-0.00112174557759) -
            (-341.240187453)*phi_mod*phi_mod - (3.49236574341)*phi_mod - (-1.7575863706) -
            (-30.1482966817)*eta*eta - (0.216614685373)*eta - (82.8587388181));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.7 && abs(eta) < 1.8 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.000496237830975))/(-0.00062712960427) -
            (97.7764450885)*phi_mod*phi_mod - (0.428042941843)*phi_mod - (-2.78973740134) -
            (-0.476700363802)*eta*eta - (-0.00560361395013)*eta - (1.46264831078));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.7 && abs(eta) < 1.8 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000784624210486))/(-0.0010357314066) -
            (-110.0180285)*phi_mod*phi_mod - (-1.21801547872)*phi_mod - (0.727646641255) -
            (-13.7144164553)*eta*eta - (-0.0248157438987)*eta - (41.8514343532));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.8 && abs(eta) < 1.9 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000199677101489))/(-0.000675432747775) -
            (53.9920856928)*phi_mod*phi_mod - (-0.686692860208)*phi_mod - (-1.29818956325) -
            (3.77833470949)*eta*eta - (0.00204292480295)*eta - (-12.7941457309));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.8 && abs(eta) < 1.9 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000530270497617))/(-0.000822092188812) -
            (-46.0916866693)*phi_mod*phi_mod - (-0.705343777683)*phi_mod - (0.247790086011) -
            (-4.4676068903)*eta*eta - (0.0155030109786)*eta - (15.1152584929));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.9 && abs(eta) < 2.0 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000363169001095))/(-0.000732621871866) -
            (30.2573508616)*phi_mod*phi_mod - (0.2913899969)*phi_mod - (-0.599416062333) -
            (3.60116055443)*eta*eta - (-0.102257611959)*eta - (-13.5313875118));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.9 && abs(eta) < 2.0 &&
    plus_sign == 0){
        return ((1./sagitta - (-0.000168847521408))/(-0.00071599291257) -
            (30.3077950788)*phi_mod*phi_mod - (1.81660730162)*phi_mod - (-0.341453671025) -
            (1.46502116527)*eta*eta - (0.0213997405582)*eta - (-5.4961124251));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.0 && abs(eta) < 2.1 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00090180243027))/(-0.000797526785007) -
            (16.3271563906)*phi_mod*phi_mod - (0.699245662706)*phi_mod - (-0.359695994278) -
            (1.55726681653)*eta*eta - (0.034864900281)*eta - (-6.66367188612));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.0 && abs(eta) < 2.1 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000878356395058))/(-0.000748804298658) -
            (57.4847725013)*phi_mod*phi_mod - (-0.398602852315)*phi_mod - (-0.622151827037) -
            (1.39807203786)*eta*eta - (-0.00373339401668)*eta - (-5.8897272302));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.1 && abs(eta) < 2.2 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000600913292977))/(-0.00080648266046) -
            (15.9651760304)*phi_mod*phi_mod - (-0.313298203805)*phi_mod - (-0.352160580977) -
            (1.82212118114)*eta*eta - (-0.0607995726179)*eta - (-8.4807612171));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.1 && abs(eta) < 2.2 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00107176814311))/(-0.000787498192196) -
            (44.608899375)*phi_mod*phi_mod - (2.16376369348)*phi_mod - (-0.542480788936) -
            (2.2315260715)*eta*eta - (-0.0504900528162)*eta - (-10.2706084899));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.2 && abs(eta) < 2.3 &&
    plus_sign == 0){
        return ((1./sagitta - (0.000202774259386))/(-0.000817945403527) -
            (29.2377785231)*phi_mod*phi_mod - (0.364430111317)*phi_mod - (-0.655421110164) -
            (1.4610371878)*eta*eta - (-0.0416301235496)*eta - (-7.34114882328));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.2 && abs(eta) < 2.3 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00314371928428))/(-0.000975942888307) -
            (76.8691403741)*phi_mod*phi_mod - (1.15558990298)*phi_mod - (-1.1681640538) -
            (0.835520725897)*eta*eta - (0.103419399006)*eta - (-4.21336134401));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.3 && abs(eta) < 2.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00424075235156))/(-0.00111422385094) -
            (43.8296771428)*phi_mod*phi_mod - (1.85694890117)*phi_mod - (-1.5363465275) -
            (1.78772729229)*eta*eta - (-0.053395869409)*eta - (-9.89380625497));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.3 && abs(eta) < 2.4 &&
    plus_sign == 0){
        return ((1./sagitta - (0.00153119495974))/(-0.000896982362997) -
            (62.8678056459)*phi_mod*phi_mod - (1.49933195253)*phi_mod - (-0.786677625109) -
            (1.76910875037)*eta*eta - (-0.0563434241548)*eta - (-9.80550941284));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.4 &&
    plus_sign == 1){
        return ((1./sagitta - (0.00192931183917))/(0.000753900164686) -
            (-225.376337135)*phi_mod*phi_mod - (0.205273427516)*phi_mod - (2.40229746789) -
            (22.2415712086)*eta*eta - (-0.0444025379368)*eta - (-40.3019444499));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.4 &&
    plus_sign == 1){
        return ((1./sagitta - (0.0002831028336))/(0.000511392221685) -
            (176.310101858)*phi_mod*phi_mod - (0.131872969564)*phi_mod - (-2.19767687378) -
            (14.0650629696)*eta*eta - (-0.0246884853958)*eta - (-25.7258034783));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.4 && abs(eta) < 1.5 &&
    plus_sign == 1){
        return ((1./sagitta - (0.000542494494289))/(0.000833102795312) -
            (-126.723487968)*phi_mod*phi_mod - (-0.741412795819)*phi_mod - (1.93724369039) -
            (-1.12522151024)*eta*eta - (0.0643341445052)*eta - (2.34615131457));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.4 && abs(eta) < 1.5 &&
    plus_sign == 1){
        return ((1./sagitta - (0.000772844462634))/(0.000766002410303) -
            (192.949174611)*phi_mod*phi_mod - (0.931727967655)*phi_mod - (-3.2048807684) -
            (32.9432426094)*eta*eta - (-0.00269070720984)*eta - (-69.5089241504));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.5 && abs(eta) < 1.6 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000781034068911))/(0.000822137200449) -
            (23.6210322445)*phi_mod*phi_mod - (-0.441485074835)*phi_mod - (-0.469863549144) -
            (-8.30568930459)*eta*eta - (-0.0352167277974)*eta - (19.8450323612));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.5 && abs(eta) < 1.6 &&
    plus_sign == 1){
        return ((1./sagitta - (0.0141034779954))/(0.0014197405416) -
            (-290.814477757)*phi_mod*phi_mod - (-1.39625481352)*phi_mod - (-1.89079749394) -
            (10.9776573798)*eta*eta - (0.123737233848)*eta - (-27.057096929));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.6 && abs(eta) < 1.7 &&
    plus_sign == 1){
        return ((1./sagitta - (0.000147673121956))/(0.000672691338659) -
            (132.700593572)*phi_mod*phi_mod - (0.491046407503)*phi_mod - (-3.00234339254) -
            (-2.47680394516)*eta*eta - (-0.0614898502645)*eta - (6.70524289075));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.6 && abs(eta) < 1.7 &&
    plus_sign == 1){
        return ((1./sagitta - (0.0050322673866))/(0.00139581424935) -
            (-239.053555984)*phi_mod*phi_mod - (-0.621918117003)*phi_mod - (-0.119964989619) -
            (-24.6064379448)*eta*eta - (-0.087704164006)*eta - (67.086190212));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.7 && abs(eta) < 1.8 &&
    plus_sign == 1){
        return ((1./sagitta - (0.000137468476859))/(0.000661416972887) -
            (111.015221715)*phi_mod*phi_mod - (0.449749607563)*phi_mod - (-2.54678703042) -
            (0.87123973645)*eta*eta - (-0.0595389376449)*eta - (-2.67973593278));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.7 && abs(eta) < 1.8 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00110734112341))/(0.000987034165171) -
            (-66.3123651573)*phi_mod*phi_mod - (0.517638640438)*phi_mod - (0.669718123734) -
            (-12.7404682717)*eta*eta - (0.036395772939)*eta - (39.0201686653));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.8 && abs(eta) < 1.9 &&
    plus_sign == 1){
        return ((1./sagitta - (2.00163441599e-05))/(0.000679973067365) -
            (50.3351636038)*phi_mod*phi_mod - (-0.627424244111)*phi_mod - (-0.98749178382) -
            (1.71752554333)*eta*eta - (-0.014554430002)*eta - (-5.81221715536));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.8 && abs(eta) < 1.9 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000599801584817))/(0.00080024166915) -
            (-29.2362708976)*phi_mod*phi_mod - (0.126575512568)*phi_mod - (0.295873497702) -
            (-3.38797712539)*eta*eta - (-0.0406868725396)*eta - (11.5178531704));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.9 && abs(eta) < 2.0 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000424452757622))/(0.000761278212109) -
            (25.7384468224)*phi_mod*phi_mod - (-1.16957791256)*phi_mod - (-0.546721634019) -
            (2.99713465051)*eta*eta - (0.0270472459744)*eta - (-11.2532414813));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.9 && abs(eta) < 2.0 &&
    plus_sign == 1){
        return ((1./sagitta - (-7.23788166389e-05))/(0.000777505317997) -
            (30.8716991585)*phi_mod*phi_mod - (-0.391160435294)*phi_mod - (-1.06629927446) -
            (2.97564954805)*eta*eta - (0.0285605021938)*eta - (-11.1678809068));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.0 && abs(eta) < 2.1 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000271945978768))/(0.000767033476461) -
            (1.72047750618)*phi_mod*phi_mod - (-1.48109143436)*phi_mod - (-0.0144863731279) -
            (3.91946014516)*eta*eta - (0.063813572843)*eta - (-16.8061345571));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.0 && abs(eta) < 2.1 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000954938138223))/(0.000767629349836) -
            (41.5827332295)*phi_mod*phi_mod - (0.111204240757)*phi_mod - (-0.39480951597) -
            (2.04034042625)*eta*eta - (-0.0249300381731)*eta - (-8.62875737063));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.1 && abs(eta) < 2.2 &&
    plus_sign == 1){
        return ((1./sagitta - (-9.11513854941e-05))/(0.000783172600702) -
            (17.4386490641)*phi_mod*phi_mod - (-0.060386273095)*phi_mod - (-0.291378858943) -
            (2.03164735544)*eta*eta - (-0.00163430021307)*eta - (-9.32467013258));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.1 && abs(eta) < 2.2 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000785462505751))/(0.000774035773924) -
            (55.5201759531)*phi_mod*phi_mod - (1.6948772571)*phi_mod - (-0.50787342321) -
            (2.91914271043)*eta*eta - (0.137645213992)*eta - (-13.4034372009));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.2 && abs(eta) < 2.3 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.00122291310813))/(0.000878896849168) -
            (25.2861776456)*phi_mod*phi_mod - (-0.452857942906)*phi_mod - (-0.586707655124) -
            (1.48208541208)*eta*eta - (-0.0382329554752)*eta - (-7.49297800636));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.2 && abs(eta) < 2.3 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000189580455187))/(0.000767197004386) -
            (50.5750878182)*phi_mod*phi_mod - (-0.277416958629)*phi_mod - (-0.526287049711) -
            (2.9008056992)*eta*eta - (-0.0301076688414)*eta - (-14.7098891107));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.3 && abs(eta) < 2.4 &&
    plus_sign == 1){
        return ((1./sagitta - (0.00256633584799))/(0.00071856308358) -
            (39.002370616)*phi_mod*phi_mod - (0.156674115618)*phi_mod - (-1.67691328375) -
            (2.35748705707)*eta*eta - (-0.0383092956638)*eta - (-12.9397356784));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.3 && abs(eta) < 2.4 &&
    plus_sign == 1){
        return ((1./sagitta - (-0.000475964786192))/(0.000814903844451) -
            (12.1389785908)*phi_mod*phi_mod - (0.0127228523219)*phi_mod - (-0.107362819202) -
            (4.06000780333)*eta*eta - (-0.0288869678089)*eta - (-22.3746115744));}

    return PASS;}
