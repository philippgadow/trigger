//////////////////////////////////////////////////////////
// ATLAS L1 MDT trigger study: pt parametrisation for   //
// different station combinations of the Muon System    //
// in terms of sagitta, eta and phi.                    //
// Author: Paul.Philipp.Gadow@cern.ch                   //
//////////////////////////////////////////////////////////


double pt_on_beta_mi_regions(double beta_middle, double beta_inner, double eta, double phi_mod,
         int is_barrel, int is_transition_region, int is_small_sector,
         int chamber_type_inner){
    double PASS = 999.0;

    if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.423988025896)/((abs(beta_middle - beta_inner)) - (-0.00242351260011)) -
            (-36.5112355992)*phi_mod*phi_mod - (-0.0117964099892)*phi_mod - (0.961610042324) -
            (-7.67494051155)*eta*eta - (0.0468959870753)*eta - (0.672059760311));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.201854412144)/((abs(beta_middle - beta_inner)) - (0.00104159530371)) -
            (-122.484190377)*phi_mod*phi_mod - (2.33293147956)*phi_mod - (1.61970919792) -
            (18.5734277797)*eta*eta - (0.166801445062)*eta - (-1.18228955403));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.386828085484)/((abs(beta_middle - beta_inner)) - (-0.00244084227415)) -
            (-56.3770151566)*phi_mod*phi_mod - (2.07014200168)*phi_mod - (1.79884836749) -
            (-0.131221477759)*eta*eta - (0.438275454237)*eta - (0.0913832156536));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.0 && abs(eta) < 0.4)    {
        return ((0.794916319993)/((abs(beta_middle - beta_inner)) - (-0.00483900455764)) -
            (180.323163452)*phi_mod*phi_mod - (-0.14480709044)*phi_mod - (-1.41233802752) -
            (-14.8144525796)*eta*eta - (-0.0685431158802)*eta - (0.94196475264));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.469004238304)/((abs(beta_middle - beta_inner)) - (-0.00317621846717)) -
            (-73.3051573423)*phi_mod*phi_mod - (0.0898275028081)*phi_mod - (2.03924383143) -
            (0.639491034915)*eta*eta - (-0.0207278581897)*eta - (-0.205009046302));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.261672785716)/((abs(beta_middle - beta_inner)) - (-0.00151747667794)) -
            (-97.458779453)*phi_mod*phi_mod - (-0.0974158766484)*phi_mod - (4.0613794894) -
            (1.89799937413)*eta*eta - (-0.00253103936683)*eta - (-0.183290361938));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.409401254705)/((abs(beta_middle - beta_inner)) - (-0.0028901540902)) -
            (-66.9518819802)*phi_mod*phi_mod - (0.785878178134)*phi_mod - (2.20058181519) -
            (0.859019488257)*eta*eta - (-0.0604304799064)*eta - (-0.270450683551));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.4 && abs(eta) < 0.8)    {
        return ((0.896849887936)/((abs(beta_middle - beta_inner)) - (-0.00678964341024)) -
            (139.484842048)*phi_mod*phi_mod - (-0.166849598203)*phi_mod - (-0.705416295159) -
            (0.278848297835)*eta*eta - (-0.0401457847198)*eta - (-0.0907646334558));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 1 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.440354060802)/((abs(beta_middle - beta_inner)) - (-0.00260505044147)) -
            (-94.3868773505)*phi_mod*phi_mod - (0.213944301618)*phi_mod - (2.0171752519) -
            (0.546990058492)*eta*eta - (-0.0411876341122)*eta - (-0.43947893105));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 8 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.237899644311)/((abs(beta_middle - beta_inner)) - (-0.0013079415467)) -
            (-90.6128402794)*phi_mod*phi_mod - (0.181026966471)*phi_mod - (3.38411283239) -
            (-3.29042448557)*eta*eta - (-0.0318940577525)*eta - (2.83362323667));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 0 && chamber_type_inner == 13 && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.374879095628)/((abs(beta_middle - beta_inner)) - (-0.00215910762907)) -
            (-85.7009026554)*phi_mod*phi_mod - (1.46269246551)*phi_mod - (2.1174619918) -
            (1.44029625066)*eta*eta - (-0.112986528007)*eta - (-1.15175793235));}

    else if (is_barrel == 1 && is_transition_region == 0 &&
    is_small_sector == 1  && abs(eta) > 0.8 && abs(eta) < 1.05)    {
        return ((0.850806483297)/((abs(beta_middle - beta_inner)) - (-0.00567302689449)) -
            (150.367659858)*phi_mod*phi_mod - (-0.288298009724)*phi_mod - (-0.832737348959) -
            (0.559195568127)*eta*eta - (-0.0710971020299)*eta - (-0.432653957676));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.05 && abs(eta) < 1.1)    {
        return ((0.509921990007)/((abs(beta_middle - beta_inner)) - (-0.00357989501055)) -
            (-116.710528263)*phi_mod*phi_mod - (0.800221837332)*phi_mod - (2.03215029122) -
            (0.971109293594)*eta*eta - (-0.0860141135138)*eta - (-1.18083791254));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.05 && abs(eta) < 1.1)    {
        return ((0)/((abs(beta_middle - beta_inner)) - (999)) -
            (1)*phi_mod*phi_mod - (0)*phi_mod - (0) -
            (0)*eta*eta - (0)*eta - (0));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.1 && abs(eta) < 1.15)    {
        return ((0.5007452712)/((abs(beta_middle - beta_inner)) - (-0.00385653300876)) -
            (-116.137674689)*phi_mod*phi_mod - (0.609939831089)*phi_mod - (1.82903252011) -
            (8.5505019504)*eta*eta - (0.132932021884)*eta - (-10.7817675588));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.1 && abs(eta) < 1.15)    {
        return ((0)/((abs(beta_middle - beta_inner)) - (999)) -
            (1)*phi_mod*phi_mod - (0)*phi_mod - (0) -
            (0)*eta*eta - (0)*eta - (0));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.15 && abs(eta) < 1.2)    {
        return ((0.491580036142)/((abs(beta_middle - beta_inner)) - (-0.00444098606551)) -
            (-122.69353736)*phi_mod*phi_mod - (0.502029551997)*phi_mod - (2.28915266131) -
            (14.7292657894)*eta*eta - (0.10015333411)*eta - (-20.184529617));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.15 && abs(eta) < 1.2)    {
        return ((0.309592660657)/((abs(beta_middle - beta_inner)) - (0.0100876223938)) -
            (-85.1104622783)*phi_mod*phi_mod - (-9.19181411674)*phi_mod - (3.22745081727) -
            (29.3118762658)*eta*eta - (-1.30171730858)*eta - (-41.7299571451));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.2 && abs(eta) < 1.25)    {
        return ((0.437847919918)/((abs(beta_middle - beta_inner)) - (-0.00341230500516)) -
            (-157.844088465)*phi_mod*phi_mod - (1.39265624715)*phi_mod - (2.64372805516) -
            (26.0931553953)*eta*eta - (0.422677303204)*eta - (-38.7312673437));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.2 && abs(eta) < 1.25)    {
        return ((0.437354427393)/((abs(beta_middle - beta_inner)) - (-0.00147387036187)) -
            (-14.4776130527)*phi_mod*phi_mod - (-0.444051028139)*phi_mod - (1.42468352231) -
            (1.05795613412)*eta*eta - (-1.80878839366)*eta - (-3.68904703266));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.25 && abs(eta) < 1.3)    {
        return ((0.35560830695)/((abs(beta_middle - beta_inner)) - (-0.00247368203312)) -
            (-251.705478169)*phi_mod*phi_mod - (2.67725124243)*phi_mod - (6.06320959829) -
            (40.6219781124)*eta*eta - (-0.0703977217406)*eta - (-66.5600246904));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.25 && abs(eta) < 1.3)    {
        return ((0.39633191236)/((abs(beta_middle - beta_inner)) - (-0.00242948730069)) -
            (51.8007787791)*phi_mod*phi_mod - (0.715466898647)*phi_mod - (-0.140842999455) -
            (38.1969121999)*eta*eta - (-2.64475518651)*eta - (-66.2623582859));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.35)    {
        return ((0.288975668708)/((abs(beta_middle - beta_inner)) - (-0.00207255601236)) -
            (-247.172727091)*phi_mod*phi_mod - (5.2250461516)*phi_mod - (4.92107784925) -
            (12.5718972733)*eta*eta - (0.132371897568)*eta - (-20.954360824));}

    else if (is_barrel == 0 && is_transition_region == 1 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.35)    {
        return ((0.351069765284)/((abs(beta_middle - beta_inner)) - (-0.00216239929415)) -
            (5.56714395452)*phi_mod*phi_mod - (0.557281852249)*phi_mod - (0.167924173342) -
            (-1451.72026929)*eta*eta - (-3877.242752)*eta - (-2587.60087385));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.3 && abs(eta) < 1.4)    {
        return ((0.293450515175)/((abs(beta_middle - beta_inner)) - (0.000331973758581)) -
            (-260.440699358)*phi_mod*phi_mod - (0.189210305778)*phi_mod - (3.86250925442) -
            (10.8204173961)*eta*eta - (0.0545275801996)*eta - (-19.8818266757));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.3 && abs(eta) < 1.4)    {
        return ((0.60659555044)/((abs(beta_middle - beta_inner)) - (-0.00412818520957)) -
            (67.1498527329)*phi_mod*phi_mod - (-0.447280637234)*phi_mod - (-0.114424655365) -
            (18.2646322843)*eta*eta - (-0.0480040429081)*eta - (-34.1776691999));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.4 && abs(eta) < 1.5)    {
        return ((0.41268433831)/((abs(beta_middle - beta_inner)) - (-0.00100330281783)) -
            (51.3249141702)*phi_mod*phi_mod - (-0.381238997999)*phi_mod - (-0.51636946161) -
            (-9.94993081502)*eta*eta - (0.106729360566)*eta - (21.3426348139));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.4 && abs(eta) < 1.5)    {
        return ((0.429783570939)/((abs(beta_middle - beta_inner)) - (-0.0014466023639)) -
            (134.358657863)*phi_mod*phi_mod - (1.79252824503)*phi_mod - (0.133597246804) -
            (35.7690440213)*eta*eta - (-0.00456231940431)*eta - (-75.0393841811));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.5 && abs(eta) < 1.6)    {
        return ((0.502294874105)/((abs(beta_middle - beta_inner)) - (-0.00246826696898)) -
            (152.945023285)*phi_mod*phi_mod - (-0.449568271811)*phi_mod - (-2.00072264494) -
            (-10.741848381)*eta*eta - (0.106912899816)*eta - (25.3446190373));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.5 && abs(eta) < 1.6)    {
        return ((0.17170141236)/((abs(beta_middle - beta_inner)) - (-0.000159293023751)) -
            (-800.470059071)*phi_mod*phi_mod - (2.68999556317)*phi_mod - (3.65618345971) -
            (8.66481355305)*eta*eta - (0.082665470778)*eta - (-20.7947761899));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.6 && abs(eta) < 1.7)    {
        return ((0.574782221259)/((abs(beta_middle - beta_inner)) - (-0.00244600413087)) -
            (262.86221096)*phi_mod*phi_mod - (-0.69413333487)*phi_mod - (-3.96087376612) -
            (-4.80302453644)*eta*eta - (0.0744644440232)*eta - (13.1625711574));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.6 && abs(eta) < 1.7)    {
        return ((0.264032822957)/((abs(beta_middle - beta_inner)) - (-0.000455732941883)) -
            (-389.409756149)*phi_mod*phi_mod - (1.59117944459)*phi_mod - (1.92435560986) -
            (-34.5814533249)*eta*eta - (0.0935863166673)*eta - (95.4972616486));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.7 && abs(eta) < 1.8)    {
        return ((0.582310873848)/((abs(beta_middle - beta_inner)) - (-0.00228759071216)) -
            (182.41463223)*phi_mod*phi_mod - (-0.629121391332)*phi_mod - (-2.47376274974) -
            (0.247331879562)*eta*eta - (0.0249565089103)*eta - (-0.752305889814));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.7 && abs(eta) < 1.8)    {
        return ((0.376296029899)/((abs(beta_middle - beta_inner)) - (-0.000919800585442)) -
            (-168.63352102)*phi_mod*phi_mod - (0.116874159538)*phi_mod - (1.20797865024) -
            (-16.2816019206)*eta*eta - (0.0612838003128)*eta - (49.9088858987));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.8 && abs(eta) < 1.9)    {
        return ((0.549955870842)/((abs(beta_middle - beta_inner)) - (-0.00153063549)) -
            (124.217768042)*phi_mod*phi_mod - (-0.310364395835)*phi_mod - (-1.51497142282) -
            (3.15747803347)*eta*eta - (0.033508664818)*eta - (-10.7579811559));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.8 && abs(eta) < 1.9)    {
        return ((0.438272026294)/((abs(beta_middle - beta_inner)) - (-0.00117462525452)) -
            (-76.3333611088)*phi_mod*phi_mod - (0.0742888791682)*phi_mod - (0.546099323234) -
            (-5.98859434545)*eta*eta - (0.0433531899985)*eta - (20.476387771));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 1.9 && abs(eta) < 2.0)    {
        return ((0.528526123265)/((abs(beta_middle - beta_inner)) - (-0.00141150563423)) -
            (64.5951402146)*phi_mod*phi_mod - (-0.207091139681)*phi_mod - (-0.669809352548) -
            (1.91630005009)*eta*eta - (0.0230743350715)*eta - (-7.18417449269));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 1.9 && abs(eta) < 2.0)    {
        return ((0.46068771168)/((abs(beta_middle - beta_inner)) - (-0.00117233003975)) -
            (-52.586705897)*phi_mod*phi_mod - (0.39625986647)*phi_mod - (0.581932164243) -
            (-2.90896865644)*eta*eta - (0.0398429930128)*eta - (10.7519539021));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.0 && abs(eta) < 2.1)    {
        return ((0.495529127692)/((abs(beta_middle - beta_inner)) - (-0.000689144877104)) -
            (42.7188829926)*phi_mod*phi_mod - (0.0131806937826)*phi_mod - (-0.288917170227) -
            (3.88206625275)*eta*eta - (0.0132300194153)*eta - (-16.5102912042));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.0 && abs(eta) < 2.1)    {
        return ((0.46566105216)/((abs(beta_middle - beta_inner)) - (-0.000602574638921)) -
            (-30.4922037668)*phi_mod*phi_mod - (0.758107076789)*phi_mod - (0.559434765167) -
            (0.676295437483)*eta*eta - (0.00771597394706)*eta - (-2.83512097999));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.1 && abs(eta) < 2.2)    {
        return ((0.492890462321)/((abs(beta_middle - beta_inner)) - (-0.000702521487022)) -
            (46.0453491319)*phi_mod*phi_mod - (0.136686447114)*phi_mod - (-0.399178506169) -
            (0.767856952852)*eta*eta - (0.0252922590483)*eta - (-3.53443617916));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.1 && abs(eta) < 2.2)    {
        return ((0.451043452416)/((abs(beta_middle - beta_inner)) - (-0.000335903647878)) -
            (-14.1687802014)*phi_mod*phi_mod - (1.32696455428)*phi_mod - (0.509222028052) -
            (0.971150620108)*eta*eta - (-0.0358408506395)*eta - (-4.41814808223));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.2 && abs(eta) < 2.3)    {
        return ((0.481043936914)/((abs(beta_middle - beta_inner)) - (-0.000637788665476)) -
            (54.428537533)*phi_mod*phi_mod - (0.19610665951)*phi_mod - (-0.442854943683) -
            (2.95938090965)*eta*eta - (0.0553698179231)*eta - (-14.9455123452));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.2 && abs(eta) < 2.3)    {
        return ((0.434063401802)/((abs(beta_middle - beta_inner)) - (-0.000229717726636)) -
            (-33.4847950537)*phi_mod*phi_mod - (1.43655617415)*phi_mod - (0.740104466828) -
            (2.51530853563)*eta*eta - (0.0516698121642)*eta - (-12.7232343926));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 0 && abs(eta) > 2.3 && abs(eta) < 2.4)    {
        return ((0.460063449163)/((abs(beta_middle - beta_inner)) - (-0.000253431389236)) -
            (79.6819352758)*phi_mod*phi_mod - (-0.187442393317)*phi_mod - (-0.791082481772) -
            (0.776348004667)*eta*eta - (0.109810485202)*eta - (-4.2563440064));}

    else if (is_barrel == 0 && is_transition_region == 0 &&
    is_small_sector == 1 && abs(eta) > 2.3 && abs(eta) < 2.4)    {
        return ((0.40693050518)/((abs(beta_middle - beta_inner)) - (-0.000128778678877)) -
            (-70.9714031136)*phi_mod*phi_mod - (0.118372803049)*phi_mod - (0.934349683238) -
            (1.78585663086)*eta*eta - (0.12520276219)*eta - (-9.83730753709));}

    return PASS;}