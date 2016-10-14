//////////////////////////////////////////////////////////
// ATLAS L1 MDT trigger study: pt parametrisation for   //
// different station combinations of the Muon System    //
// in terms of sagitta, eta and phi.                    //
// Author: Paul.Philipp.Gadow@cern.ch                   //
//////////////////////////////////////////////////////////


double pt_on_sagitta_stations(double sagitta, double eta, double phi_mod,
             int seg_combination_id, int eta_inner, int eta_middle,
             int eta_outer, int phi_index){
    double PASS = 99999.0;

    int plus_sign = (sagitta > 0);
    if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002931266382050862))/(0.0021177831046803545) -
                (-88.02342220271365)*phi_mod*phi_mod - (5.561323008291652)*phi_mod - (1.3347080839270804) -
                (-34.23937417290473)*eta*eta - (-25.595497931753634)*eta - (2.581854902292947));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021453397002801997))/(0.0020829683414374527) -
                (-68.84269585411694)*phi_mod*phi_mod - (5.470509953531605)*phi_mod - (0.9938241731050046) -
                (210.19357161744043)*eta*eta - (369.9560304658244)*eta - (162.3115421626728));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009202295307126096))/(0.0016754554772125659) -
                (-84.8755186049858)*phi_mod*phi_mod - (3.9424517763475895)*phi_mod - (-0.5582026625529025) -
                (3147.4429334335828)*eta*eta - (5388.085446059982)*eta - (2303.508780117056));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001423365950538138))/(0.002042562322131342) -
                (-106.3056737452426)*phi_mod*phi_mod - (5.485126513400302)*phi_mod - (1.7787600509235575) -
                (-1164.7558912900452)*eta*eta - (-1908.202370993071)*eta - (-781.1154562748185));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038563658875656404))/(0.002204162474132262) -
                (-45.39352202312557)*phi_mod*phi_mod - (-0.0016094556335103096)*phi_mod - (0.9064684728615415) -
                (-554.9125390366146)*eta*eta - (-948.8741381100215)*eta - (-405.2863773624939));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006337328983195244))/(-0.0019778004747766577) -
                (-95.76846948098955)*phi_mod*phi_mod - (-4.820364709884672)*phi_mod - (1.185325487462656) -
                (-113.11234524241684)*eta*eta - (-182.11407732544265)*eta - (-72.60585748678488));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034003839783877583))/(0.001974467583080454) -
                (-92.21577950236407)*phi_mod*phi_mod - (4.936568388693502)*phi_mod - (1.286741477545327) -
                (-35.81529934997386)*eta*eta - (-44.37415251914938)*eta - (-11.195976201206838));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003568818911529529))/(-0.00108688039430678) -
                (105.89597308208113)*phi_mod*phi_mod - (7.468677318151666)*phi_mod - (-0.6761379722429742) -
                (967.3367316927915)*eta*eta - (852.2015492811469)*eta - (187.5773211519044));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005006787703807027))/(-0.0012154050728802276) -
                (118.13635187493007)*phi_mod*phi_mod - (7.87119013087615)*phi_mod - (-0.9243377574812682) -
                (326.49215281855834)*eta*eta - (283.99317972232967)*eta - (61.82131567816808));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004753691109623259))/(-0.001193073585895117) -
                (270.2005177076801)*phi_mod*phi_mod - (26.74243381485914)*phi_mod - (-0.6415161384824364) -
                (-3390.9051756996987)*eta*eta - (-2951.7900583137002)*eta - (-641.8097353072982));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004282303180001103))/(-0.0011673917454863368) -
                (73.87056886588843)*phi_mod*phi_mod - (7.732092876102958)*phi_mod - (-0.4987548373618049) -
                (590.2835768567141)*eta*eta - (526.1571931845901)*eta - (117.17368689103596));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0041988487344187895))/(-0.0011572493380347438) -
                (203.24209633029008)*phi_mod*phi_mod - (20.536856630812565)*phi_mod - (-0.8147278105776727) -
                (-1050.2727399563432)*eta*eta - (-916.5394828344029)*eta - (-199.84966669583898));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.016095521596885997))/(-0.005633440580885804) -
                (-218.02816400792437)*phi_mod*phi_mod - (8.515785928473743)*phi_mod - (0.8994359648458644) -
                (-247.42255941710985)*eta*eta - (237.08641272540055)*eta - (-56.70279155808546));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02180649251707904))/(0.005790010744118446) -
                (-26.272911097549443)*phi_mod*phi_mod - (-18.535987328440793)*phi_mod - (2.658673729272955) -
                (10.18261780179954)*eta*eta - (-38.42133571946442)*eta - (16.03829660770431));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017211197942377833))/(-0.005720584748575202) -
                (-66.72888702720405)*phi_mod*phi_mod - (8.714335500485378)*phi_mod - (2.0510002901933193) -
                (-148.11210698220984)*eta*eta - (156.49413099160108)*eta - (-40.98304155463705));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.020685906302931132))/(0.005691856896681001) -
                (-215.5093218216859)*phi_mod*phi_mod - (-5.528043662847224)*phi_mod - (0.8504667082878268) -
                (-638.0042667882556)*eta*eta - (605.4163010193982)*eta - (-143.4737794854719));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.026122640857279878))/(0.0007500521557288608) -
                (-25.08626365928266)*phi_mod*phi_mod - (14.794576262891644)*phi_mod - (-1.2042714464090136) -
                (48.17033573695066)*eta*eta - (-128.84691674522134)*eta - (74.05395974626853));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.026531634983161172))/(0.0006717611437608535) -
                (97.1249920139659)*phi_mod*phi_mod - (9.852459338199694)*phi_mod - (-0.7444741696215165) -
                (116.56357770217991)*eta*eta - (-139.06574265705626)*eta - (33.92259828051143));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012625088590939113))/(-0.0029988610995709407) -
                (-50.66751105375363)*phi_mod*phi_mod - (-5.950222431859999)*phi_mod - (0.27056512100085023) -
                (-708.3286423879794)*eta*eta - (1189.5721896997125)*eta - (-499.2615066049541));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0261351976149473))/(0.0006612790706945045) -
                (-44.44262415701156)*phi_mod*phi_mod - (-12.263559383745227)*phi_mod - (-0.819710339342891) -
                (2898.3030714501583)*eta*eta - (-4743.909691337825)*eta - (1939.8661465301393));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.026782594936708832))/(0.0007486221423794324) -
                (80.57236976546184)*phi_mod*phi_mod - (9.947626066055115)*phi_mod - (-0.2646047895814219) -
                (552.6621232062356)*eta*eta - (-876.8178907811867)*eta - (345.8134824065865));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011593809222584612))/(-0.0008457318495941298) -
                (-71.12487745145793)*phi_mod*phi_mod - (-2.135132460629744)*phi_mod - (0.27807957097771113) -
                (89.37551267593106)*eta*eta - (-359.0727539037024)*eta - (358.2304877036593));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00013267360721009976))/(0.0008536699586259314) -
                (-89.19418534586782)*phi_mod*phi_mod - (3.177148382076102)*phi_mod - (0.2899465980682804) -
                (17.408119988580516)*eta*eta - (-95.74674414318086)*eta - (116.22217295623787));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012529426725073152))/(-0.000857087970205857) -
                (-69.37342195854161)*phi_mod*phi_mod - (-2.345181217337919)*phi_mod - (0.2400708298397493) -
                (122.55804795851807)*eta*eta - (-483.26693207209456)*eta - (474.3482757919742));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00011171955514864149))/(0.000832124160257066) -
                (-82.37522587818096)*phi_mod*phi_mod - (1.1599165578904747)*phi_mod - (0.2689843066003859) -
                (23.27156530197095)*eta*eta - (-116.61539901163167)*eta - (134.82205292919483));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001142488789433508))/(-0.0008462971273590232) -
                (-88.75410188307532)*phi_mod*phi_mod - (-3.501606708096536)*phi_mod - (0.31432143876555096) -
                (77.62564914586477)*eta*eta - (-316.6946685373424)*eta - (320.0247528429917));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-7.386122546303757e-05))/(0.0008388266175660093) -
                (-77.73035491957401)*phi_mod*phi_mod - (2.9448455415379113)*phi_mod - (0.22287726496589244) -
                (17.660758809215903)*eta*eta - (-96.75191044119074)*eta - (117.26776855224068));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001408002157190015))/(-0.0008613388050911457) -
                (-63.54268725760401)*phi_mod*phi_mod - (-2.6055036759629604)*phi_mod - (0.21692946919367412) -
                (86.42250357263602)*eta*eta - (-347.94579995983037)*eta - (347.56178348517113));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0001572587707579407))/(0.0008565881978114941) -
                (-91.82305895805845)*phi_mod*phi_mod - (3.0365238211634593)*phi_mod - (0.2847325569957293) -
                (-12.168695326650642)*eta*eta - (8.46384182458406)*eta - (24.184121509973185));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013011333450626945))/(-0.0008478313096944743) -
                (-88.94990988805202)*phi_mod*phi_mod - (-1.6968405962793012)*phi_mod - (0.344854677477185) -
                (91.36538327748218)*eta*eta - (-367.24784659336456)*eta - (366.4850108803056));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-6.106905614872427e-05))/(0.0008320049303766718) -
                (-86.61015068112158)*phi_mod*phi_mod - (2.4628715337598455)*phi_mod - (0.25499136260934463) -
                (28.18492797715546)*eta*eta - (-135.41536088823779)*eta - (152.7503977085345));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013150927646239147))/(-0.0008468079985836086) -
                (-71.14071172007675)*phi_mod*phi_mod - (-3.9143517877179446)*phi_mod - (0.23617937337552222) -
                (72.79414989137362)*eta*eta - (-294.5954238048328)*eta - (295.62518203211135));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (4.683689861427743e-05))/(0.000829243462992363) -
                (-70.00570963916034)*phi_mod*phi_mod - (2.968867943289472)*phi_mod - (0.1291116350330806) -
                (16.93724599649166)*eta*eta - (-90.88203357415067)*eta - (108.93938509268594));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012330325365946851))/(-0.0008508434410684343) -
                (-70.76384017922959)*phi_mod*phi_mod - (-1.0001506829961542)*phi_mod - (0.2160635233388147) -
                (63.548897204481555)*eta*eta - (-260.9791663990261)*eta - (265.0995947657815));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-5.185025043977648e-06))/(0.000839095818748228) -
                (-70.19437147326424)*phi_mod*phi_mod - (1.5449195372261062)*phi_mod - (0.09559328709605286) -
                (28.480464777189017)*eta*eta - (-133.48893497291783)*eta - (148.18595032013332));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011063609447465688))/(-0.0008442641551902053) -
                (-79.204268858405)*phi_mod*phi_mod - (-2.4760107026546208)*phi_mod - (0.26628553040818115) -
                (94.13218498331418)*eta*eta - (-376.1621207776552)*eta - (373.5166009499069));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-9.971164399018068e-05))/(0.0008411870501777734) -
                (-69.22136583320558)*phi_mod*phi_mod - (1.657477701314972)*phi_mod - (0.18041924689523145) -
                (15.20109235595615)*eta*eta - (-86.26759290682973)*eta - (106.29109005104122));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.019619151667093524))/(-0.004887506501301261) -
                (-105.68773174557353)*phi_mod*phi_mod - (-5.25500721023085)*phi_mod - (1.6781497029517825) -
                (-1618.3871770810317)*eta*eta - (-2222.5607893250426)*eta - (-762.5256937000279));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013565950494141055))/(0.00476539517125481) -
                (47.54741950818429)*phi_mod*phi_mod - (-36.81965369988187)*phi_mod - (4.3219082666716) -
                (-128.7859149005989)*eta*eta - (-128.80205317953067)*eta - (-26.451720261213712));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017339876564924833))/(-0.004723918812741887) -
                (-69.1763154465042)*phi_mod*phi_mod - (5.100992602611771)*phi_mod - (2.3334710634959737) -
                (-311.20242393759935)*eta*eta - (-389.01749799397606)*eta - (-119.71981982223461));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012121184213715904))/(0.00466156242163239) -
                (-119.12766545750395)*phi_mod*phi_mod - (2.85645504895808)*phi_mod - (1.5853842975095265) -
                (-208.9832105851095)*eta*eta - (-238.7753683021061)*eta - (-64.14379239227965));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006005254991030759))/(0.001182732460881531) -
                (-43.26054681650866)*phi_mod*phi_mod - (7.894074525493244)*phi_mod - (1.642990094666931) -
                (-149.18816106343374)*eta*eta - (392.5273345279565)*eta - (-256.90434116065296));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006238992148970831))/(0.0011508339527414053) -
                (48.05895672802702)*phi_mod*phi_mod - (0.7175748939793678)*phi_mod - (-2.3358440113186045) -
                (-141.82761560723762)*eta*eta - (369.28101648768404)*eta - (-238.64664821090324));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0018008997975691656))/(0.0009696950587298376) -
                (72.73240030689698)*phi_mod*phi_mod - (0.7078213137167033)*phi_mod - (-3.0621840948705397) -
                (-1091.4020869200833)*eta*eta - (2960.662064728486)*eta - (-2005.0500070325884));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004481278861030063))/(0.001129002161255654) -
                (46.05778672161724)*phi_mod*phi_mod - (-9.008201676445408)*phi_mod - (-1.0491767469409514) -
                (633.605599710166)*eta*eta - (-1762.506145882502)*eta - (1225.0747770908636));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0037785363171604215))/(0.0010537436478171664) -
                (89.97153470265218)*phi_mod*phi_mod - (-5.228160202933053)*phi_mod - (-3.82156508132886) -
                (7288.872847782532)*eta*eta - (-20283.981426828926)*eta - (14111.234987154248));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004610349201341607))/(0.0004922021871630222) -
                (48.1295344776679)*phi_mod*phi_mod - (1.1478700592803364)*phi_mod - (-2.430811292827765) -
                (1613.803275832308)*eta*eta - (-4342.002273836343)*eta - (2916.7212899420983));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003787473489690483))/(0.0007253070271726841) -
                (-190.73860991833533)*phi_mod*phi_mod - (17.232560905559207)*phi_mod - (6.41241350872407) -
                (24.749331580352962)*eta*eta - (-98.85324821575088)*eta - (89.62198404873926));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0070365727646683005))/(-0.002597521870312372) -
                (-93.52985173272695)*phi_mod*phi_mod - (-4.923143713299451)*phi_mod - (1.3823136410243975) -
                (-9.416386868598384)*eta*eta - (1.6674544320782376)*eta - (0.7534449528146278));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008138313453293581))/(0.002577232614397946) -
                (-96.54119293647553)*phi_mod*phi_mod - (6.150199214497735)*phi_mod - (1.3298084124210718) -
                (-35.340405743170706)*eta*eta - (18.1143621975117)*eta - (-1.8343143533304234));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007047956272409954))/(-0.0025961805387837585) -
                (-95.8233802564003)*phi_mod*phi_mod - (-5.1457144709269995)*phi_mod - (1.4176944224455037) -
                (-16.758079396060353)*eta*eta - (6.4106264583751855)*eta - (0.048572348333633324));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008178468467909004))/(0.002574246502247818) -
                (-97.74922430712208)*phi_mod*phi_mod - (6.3372439457879555)*phi_mod - (1.3374631350468533) -
                (-15.931391141685486)*eta*eta - (5.200142116580542)*eta - (0.3092790456588009));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0070132135807765995))/(-0.002600839727080823) -
                (-96.6389394960864)*phi_mod*phi_mod - (-5.676180153768636)*phi_mod - (1.3612680469071778) -
                (-12.816844080785947)*eta*eta - (3.9158823200418604)*eta - (0.4224257507192738));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008350588129735631))/(0.0026025193438073933) -
                (-101.47720227375699)*phi_mod*phi_mod - (5.838530048158715)*phi_mod - (1.3749552882142506) -
                (-24.178044487360726)*eta*eta - (10.29190609384554)*eta - (-0.4354205998981737));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007046789692303657))/(-0.0025891594445067692) -
                (-100.89316823769815)*phi_mod*phi_mod - (-6.408478958336746)*phi_mod - (1.447373262298496) -
                (-14.920749803451464)*eta*eta - (5.315898801525584)*eta - (0.20055037674105963));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008526066574982009))/(0.0025998327466272733) -
                (-102.7068692875199)*phi_mod*phi_mod - (5.0565841428835085)*phi_mod - (1.4710366732037745) -
                (-24.144955240812276)*eta*eta - (10.53672518638438)*eta - (-0.5279510533285096));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007758485630612944))/(-0.002602265199241497) -
                (-103.15095585357382)*phi_mod*phi_mod - (-5.556642700470883)*phi_mod - (1.6007406804541513) -
                (-20.538164884656982)*eta*eta - (8.948781584470854)*eta - (-0.32921209206079594));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008733398720167023))/(0.0025889541729149585) -
                (-101.11502221661301)*phi_mod*phi_mod - (5.451078834262437)*phi_mod - (1.4855923430972966) -
                (-9.368665672232323)*eta*eta - (-1.1950859527911544)*eta - (1.7620314692945198));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007430558334377512))/(-0.002614377779595741) -
                (-97.68714759058913)*phi_mod*phi_mod - (-5.469518127611831)*phi_mod - (1.4603072315625256) -
                (-4.375062141743691)*eta*eta - (-1.5306443234731784)*eta - (1.1305406184895355));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007860421334961967))/(0.002566850566889148) -
                (-101.13979822967146)*phi_mod*phi_mod - (5.70583125717602)*phi_mod - (1.4566530492812555) -
                (-34.636629642174896)*eta*eta - (17.91435162027127)*eta - (-2.0431973455087067));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010877294641717036))/(-0.0030371214525230592) -
                (-38.36527648798309)*phi_mod*phi_mod - (7.2762704917309415)*phi_mod - (1.5511706237442981) -
                (65.29032567056646)*eta*eta - (79.29619666557629)*eta - (23.746666601877163));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008110009672716557))/(0.0030318664698388118) -
                (-96.93859033248513)*phi_mod*phi_mod - (4.00834094437853)*phi_mod - (0.9320219872704256) -
                (72.01866170021903)*eta*eta - (87.24391759081227)*eta - (26.17390772927052));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010697507451069533))/(-0.0030501509230997864) -
                (-104.86948918676092)*phi_mod*phi_mod - (-1.9473450497152465)*phi_mod - (0.9857903729883488) -
                (10.708107390168491)*eta*eta - (18.496406121968324)*eta - (6.911815922646174));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008341565767150718))/(0.003053015806476747) -
                (-7.873753980981667)*phi_mod*phi_mod - (-15.254495295400137)*phi_mod - (2.159896391073208) -
                (9.14634550686672)*eta*eta - (18.285754066805776)*eta - (7.343588136281468));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001204016420877236))/(0.0009314115134706143) -
                (-0.5378248016116038)*phi_mod*phi_mod - (-2.209511503397603)*phi_mod - (0.46397130674503784) -
                (-6.383329337836478)*eta*eta - (31.888818928586858)*eta - (-32.659407008492046));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00419474495517292))/(0.0011968202804790115) -
                (-2.268332070503898)*phi_mod*phi_mod - (2.6247467792974692)*phi_mod - (0.6895096757018908) -
                (-246.36365389998085)*eta*eta - (731.3697750732762)*eta - (-542.0510121960756));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006967290921371493))/(0.001463317852865103) -
                (-22.125755320133656)*phi_mod*phi_mod - (-3.1509541638876124)*phi_mod - (0.5221985793952874) -
                (-72.42575114694881)*eta*eta - (212.3384935672538)*eta - (-155.05195582902954));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.022729166174537452))/(0.002871572179677054) -
                (175.59442198867717)*phi_mod*phi_mod - (-9.916281348479547)*phi_mod - (-8.385535647900678) -
                (-430.3235800573404)*eta*eta - (1254.984614753815)*eta - (-913.1634377692699));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012449016981697947))/(0.0018448070331086432) -
                (50.117448821836895)*phi_mod*phi_mod - (-8.900934663344156)*phi_mod - (-0.8992764808649669) -
                (159.4798707395742)*eta*eta - (-456.04599235863424)*eta - (325.75340581569765));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001955413458542785))/(0.001139760119550742) -
                (-37.943237199799505)*phi_mod*phi_mod - (5.989843320262383)*phi_mod - (-0.3980738319335904) -
                (-285.4638947080119)*eta*eta - (840.8522673911729)*eta - (-618.6461899168373));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007347372475339063))/(0.0016483598398390887) -
                (-14.263657450002556)*phi_mod*phi_mod - (3.318346854087376)*phi_mod - (-0.8447289547079134) -
                (-178.52950266785749)*eta*eta - (528.960700581146)*eta - (-391.6574530229332));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011227653965261085))/(0.001960244682670665) -
                (-35.97149454971383)*phi_mod*phi_mod - (1.5939452000737102)*phi_mod - (0.844470421056582) -
                (110.34652369966527)*eta*eta - (-305.83581181200043)*eta - (211.7050189450102));}

    else if (seg_combination_id == 100902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021450629161046753))/(-0.0010038975528797588) -
                (410.1923301610458)*phi_mod*phi_mod - (21.55212455232574)*phi_mod - (-2.5026137229565193) -
                (-167.03018747353525)*eta*eta - (239.42445025188124)*eta - (-85.33201596847682));}

    else if (seg_combination_id == 100902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003497311513200277))/(0.0009901746519387353) -
                (412.1684919198171)*phi_mod*phi_mod - (-20.3546795225842)*phi_mod - (-2.566671150580885) -
                (-886.3425811020531)*eta*eta - (1162.480000217691)*eta - (-380.9708139164632));}

    else if (seg_combination_id == 100902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002129979673231681))/(-0.0010054180835239333) -
                (472.8002292186417)*phi_mod*phi_mod - (17.401996960459563)*phi_mod - (-3.192632606780063) -
                (-1163.3590402113546)*eta*eta - (1565.9701923278403)*eta - (-526.9823278980531));}

    else if (seg_combination_id == 100902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030591754933562616))/(0.0009647168375310206) -
                (415.23828463722725)*phi_mod*phi_mod - (-23.382680625829863)*phi_mod - (-2.271587181883575) -
                (-599.8564417340156)*eta*eta - (776.7102254758533)*eta - (-251.32154222754073));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0020629604059839326))/(0.0005891143321875538) -
                (169.14880470796197)*phi_mod*phi_mod - (-13.832698954076777)*phi_mod - (-0.2981467033276744) -
                (-899.694989136445)*eta*eta - (-1074.774405942564)*eta - (-319.969092446212));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005648320806594053))/(0.00029948518451289465) -
                (524.6262053680372)*phi_mod*phi_mod - (-54.62052743995197)*phi_mod - (-0.4531192571367726) -
                (-2847.2013154877404)*eta*eta - (-3483.7843198715727)*eta - (-1064.6500678259774));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.008520345117571408))/(9.14769621660838e-06) -
                (4586.466165412853)*phi_mod*phi_mod - (-555.0601503758492)*phi_mod - (9.7239520676678) -
                (3679.3743676556664)*eta*eta - (4613.6539322474055)*eta - (1445.5250307781857));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03053566717857692))/(-0.002132415284537363) -
                (-425.6454764309248)*phi_mod*phi_mod - (12.913866080042075)*phi_mod - (-0.2163602071732096) -
                (695.5625748490862)*eta*eta - (2233.6796620751675)*eta - (1792.6479639070556));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018984039824053316))/(0.0024109367220370033) -
                (-430.06050344031416)*phi_mod*phi_mod - (-10.451523834584805)*phi_mod - (-0.030353256351073058) -
                (-282.8240959466882)*eta*eta - (-927.5848476956616)*eta - (-760.7238029222505));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03325377402511153))/(-0.0020708086777705926) -
                (-507.6067079961301)*phi_mod*phi_mod - (5.730770838622885)*phi_mod - (0.13008991940409076) -
                (-16.6244406638099)*eta*eta - (-21.85482440456636)*eta - (7.417247077122189));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.020982459546145926))/(0.0023876586533787027) -
                (-453.03566089688604)*phi_mod*phi_mod - (-15.247622478950067)*phi_mod - (0.08292621775826277) -
                (116.6355105774236)*eta*eta - (345.78879198025385)*eta - (253.80836008881323));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03214047960916862))/(-0.0021241564080919694) -
                (-347.49791449053794)*phi_mod*phi_mod - (5.311107188196142)*phi_mod - (-0.5091395880575779) -
                (-910.8689462847775)*eta*eta - (-2936.6968016282963)*eta - (-2367.323030736293));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.021128002375068778))/(0.002350965971960794) -
                (-401.20901459548026)*phi_mod*phi_mod - (-10.12355032518241)*phi_mod - (-0.2218008354419796) -
                (198.35619615696754)*eta*eta - (600.6078054961322)*eta - (452.70198792760743));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03835664339034918))/(-0.001805135997045666) -
                (-88.0145851048286)*phi_mod*phi_mod - (-2.289486943786433)*phi_mod - (-0.8547130403148325) -
                (-680.8550528799025)*eta*eta - (-2169.838425975205)*eta - (-1729.1339508191145));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.025194003190771867))/(0.00213349108184084) -
                (-160.78350520014385)*phi_mod*phi_mod - (2.894776088136499)*phi_mod - (-1.1475327682594876) -
                (69.86383938268216)*eta*eta - (198.72414927868576)*eta - (138.6641981935662));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03481058247572191))/(-0.0020195511699436825) -
                (-300.9477698155832)*phi_mod*phi_mod - (4.81145886662226)*phi_mod - (-0.599874928030286) -
                (130.95546700887198)*eta*eta - (417.73766883801903)*eta - (332.6930274669686));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01439107443352501))/(0.0025225188253530386) -
                (-403.1518376362598)*phi_mod*phi_mod - (-10.425346229599318)*phi_mod - (-0.34361176302206575) -
                (-99.46795870263844)*eta*eta - (-349.71337934836487)*eta - (-305.6475898685792));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03414470021633267))/(-0.0019991332554719888) -
                (-131.95782910634264)*phi_mod*phi_mod - (2.549820552920705)*phi_mod - (-0.7498649442701723) -
                (-245.31517274958523)*eta*eta - (-788.0657834393544)*eta - (-633.0866341695183));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.016094967839949306))/(0.002523924652045234) -
                (-370.11734018504444)*phi_mod*phi_mod - (-13.54440777454074)*phi_mod - (-0.6798033880608564) -
                (84.22612414957212)*eta*eta - (240.14135160882262)*eta - (167.75791234995637));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0327642808530713))/(-0.002081276954626818) -
                (-346.73564580351615)*phi_mod*phi_mod - (7.076473180121365)*phi_mod - (-0.2036161366320884) -
                (-1099.3281089647617)*eta*eta - (-3529.456354637332)*eta - (-2832.9415822884757));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019244073191297752))/(0.002418061045688768) -
                (-406.2767713860316)*phi_mod*phi_mod - (-11.846035041047744)*phi_mod - (-0.25948397189134187) -
                (222.6806428081031)*eta*eta - (658.8174570248609)*eta - (483.4711637892981));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.032266243638081345))/(-0.0020078554719788425) -
                (-154.16514548110288)*phi_mod*phi_mod - (3.6425361834053236)*phi_mod - (-1.015504283050458) -
                (-115.07922837227731)*eta*eta - (-354.47524568742335)*eta - (-272.8542122064964));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.021265243595278035))/(0.002315141037275912) -
                (-444.96566920558314)*phi_mod*phi_mod - (-15.521166732821955)*phi_mod - (-0.19493341872792397) -
                (290.67712930385926)*eta*eta - (888.3794477478012)*eta - (676.5709231710971));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01310963862708163))/(-0.0009931985372410878) -
                (-74.03254571545038)*phi_mod*phi_mod - (-4.827091159608078)*phi_mod - (1.134156885961855) -
                (-478.048153407535)*eta*eta - (176.06409739003857)*eta - (-13.739340106180485));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00029416439763092534))/(-0.002061635164172014) -
                (-54.01676104170221)*phi_mod*phi_mod - (-3.6091727567373484)*phi_mod - (0.8427402752948088) -
                (-506.59905154288657)*eta*eta - (234.00635312789294)*eta - (-26.628200154807992));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004966788042678155))/(-0.0016835796503896115) -
                (-55.657757641571905)*phi_mod*phi_mod - (-5.553170746427984)*phi_mod - (1.066937596015632) -
                (-1351.1061742772338)*eta*eta - (681.1817012537628)*eta - (-85.59614297005231));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007199761167259348))/(-0.0020907830435303093) -
                (-59.79221097047775)*phi_mod*phi_mod - (-5.6368111160213985)*phi_mod - (1.0482851668438666) -
                (1206.2126376396081)*eta*eta - (-665.5400170211232)*eta - (91.48499197503072));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011434720111419543))/(-0.0033439012001528143) -
                (-69.73658687140679)*phi_mod*phi_mod - (-3.099329928631754)*phi_mod - (1.212569775669376) -
                (-393.58100657605985)*eta*eta - (170.04495422827756)*eta - (-17.856479138904263));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008504470597463062))/(0.0033991935994636914) -
                (-89.02696680790602)*phi_mod*phi_mod - (4.229753694428418)*phi_mod - (0.9759375652570531) -
                (830.2911398248754)*eta*eta - (-345.45081762991316)*eta - (35.4456982930928));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.015028041691007908))/(-0.0006975264882584069) -
                (-88.54637572732523)*phi_mod*phi_mod - (-7.341332529821889)*phi_mod - (1.5969322512527782) -
                (-8144.754838938703)*eta*eta - (4302.292700304147)*eta - (-567.4038838043307));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008467288486961308))/(-0.0008031931700378619) -
                (117.45716991603408)*phi_mod*phi_mod - (4.0229001560954805)*phi_mod - (-4.776962679350835) -
                (20.22040391772082)*eta*eta - (93.88955970508944)*eta - (108.70501518576607));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0223650688063811))/(0.0002490354571074407) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006023770155303609))/(-0.0009109017833394661) -
                (66.12755629385909)*phi_mod*phi_mod - (-8.760639454499636)*phi_mod - (-3.258302616146882) -
                (5.56914606890552)*eta*eta - (29.619442252927474)*eta - (37.123619855495555));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010240649658569006))/(-0.001539977519191115) -
                (-100.91949877067167)*phi_mod*phi_mod - (0.990803446883006)*phi_mod - (0.08035645385162057) -
                (-13.991227160661674)*eta*eta - (-67.52647527643866)*eta - (-81.45916823233942));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006232092629953669))/(-0.0008379460940595513) -
                (46.78349585858416)*phi_mod*phi_mod - (4.587851024811141)*phi_mod - (-0.8755209367032704) -
                (9.17128659310735)*eta*eta - (37.637297429373845)*eta - (38.20524888568674));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007984600862105368))/(-0.0009476638776123081) -
                (38.09727628994064)*phi_mod*phi_mod - (1.7487071864984591)*phi_mod - (-1.312706504941322) -
                (49.65486577094732)*eta*eta - (220.31313656861334)*eta - (243.06964358953184));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.011595573917625926))/(-0.00045818035529018245) -
                (14.838300725013307)*phi_mod*phi_mod - (-7.274604923264354)*phi_mod - (-2.151407117358991) -
                (-5440.169049559854)*eta*eta - (-25609.713165655998)*eta - (-30134.48887279309));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.019386972281470762))/(-0.001881542731350367) -
                (10.726389482238083)*phi_mod*phi_mod - (-0.36919086025075765)*phi_mod - (-2.377989076524344) -
                (-70.7585440764634)*eta*eta - (-321.78193313421036)*eta - (-365.5003485929926));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0077088728554503185))/(-0.0004414045240342818) -
                (-37.378681937256836)*phi_mod*phi_mod - (-4.5209390149738)*phi_mod - (1.016933136603292) -
                (-6200.279952963118)*eta*eta - (-11571.117476723863)*eta - (-5397.082137513625));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.011393302078763368))/(-0.00013981029145321232) -
                (-223.9571735891274)*phi_mod*phi_mod - (-18.833956083964047)*phi_mod - (5.196178358878128) -
                (-103.56471292099562)*eta*eta - (-188.11875389513418)*eta - (-84.95765404737155));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0063889614117295275))/(-0.0006118464434963888) -
                (-83.03320107698707)*phi_mod*phi_mod - (-8.898894150337114)*phi_mod - (1.1449641193304931) -
                (-1555.5351946798185)*eta*eta - (-2925.9287923127026)*eta - (-1374.478978007502));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01624213607809829))/(0.00032054449336985444) -
                (84.49970011773851)*phi_mod*phi_mod - (2.1274474086153545)*phi_mod - (-2.8754803694925912) -
                (1853.4153711303265)*eta*eta - (3502.4821585391123)*eta - (1653.4651971196138));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.015695128515328397))/(0.0002877380360524285) -
                (56.89591105833824)*phi_mod*phi_mod - (-0.7333954599781373)*phi_mod - (-1.8677864122911123) -
                (1078.0379293589542)*eta*eta - (2133.6189652677763)*eta - (1051.263711196439));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006357393460525242))/(-0.0013725549651545973) -
                (-46.587649344776146)*phi_mod*phi_mod - (-5.307708208976028)*phi_mod - (0.5533511271983864) -
                (520.8887000096446)*eta*eta - (962.8357070366959)*eta - (444.8297261119423));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008983564421039633))/(-0.0031326818288433637) -
                (-46.37953337700079)*phi_mod*phi_mod - (9.087491801415943)*phi_mod - (2.069783810852305) -
                (-573.7787176929124)*eta*eta - (555.3082847572115)*eta - (-134.2390600560944));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010856330070066377))/(0.003103903511335448) -
                (-125.60534563852902)*phi_mod*phi_mod - (1.8365754081590604)*phi_mod - (1.153671923522793) -
                (-300.7393915827002)*eta*eta - (289.4753911904772)*eta - (-69.51682846354316));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008904426624825523))/(-0.003135902645544625) -
                (-102.34594088896124)*phi_mod*phi_mod - (-3.165976649616751)*phi_mod - (1.348944571636264) -
                (-596.6710799679186)*eta*eta - (576.1894065399208)*eta - (-138.9942220966196));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010908426907145498))/(0.003097396777314489) -
                (18.69922660748944)*phi_mod*phi_mod - (-23.302921239779234)*phi_mod - (2.7705479422644954) -
                (189.1711164535402)*eta*eta - (-179.01002901341144)*eta - (42.390498794681335));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038157641285037967))/(-0.0010067801860799343) -
                (364.93613424915105)*phi_mod*phi_mod - (19.787825130270537)*phi_mod - (-2.015003019759693) -
                (14.278053094145244)*eta*eta - (27.922413108532012)*eta - (12.32323483135242));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022233393336424574))/(0.0010046316112859634) -
                (435.74528957148436)*phi_mod*phi_mod - (-25.384985993262134)*phi_mod - (-2.0395176204074312) -
                (33.77739856591653)*eta*eta - (51.36818291690211)*eta - (19.375254346103223));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003892091246648097))/(-0.0010075220429019776) -
                (361.5406235194824)*phi_mod*phi_mod - (21.529869747627103)*phi_mod - (-1.9058880998555074) -
                (28.791973600974114)*eta*eta - (47.612436588685355)*eta - (18.974082820197417));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021022458980016535))/(0.0010016368192436289) -
                (453.0414274009351)*phi_mod*phi_mod - (-20.58462295097787)*phi_mod - (-2.3654373335712657) -
                (9.385690175787241)*eta*eta - (19.950164880950716)*eta - (9.286400521417427));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003897840555101366))/(-0.0010067557102994048) -
                (396.16876940746147)*phi_mod*phi_mod - (23.305186736899028)*phi_mod - (-1.9883100611377302) -
                (42.1416560187873)*eta*eta - (65.68152069361611)*eta - (25.083406354400868));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002198309323061717))/(0.0010035951230375657) -
                (446.8557154493687)*phi_mod*phi_mod - (-21.591532991358655)*phi_mod - (-2.200053772115701) -
                (36.976514053487705)*eta*eta - (57.815826500097685)*eta - (22.27112346420261));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038125114301871526))/(-0.0009937126801104) -
                (427.6988560595877)*phi_mod*phi_mod - (21.602395847448115)*phi_mod - (-2.229949075825698) -
                (292.3696534638003)*eta*eta - (407.33984578889795)*eta - (141.6947444015534));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021373091430189426))/(0.0009944826795150006) -
                (463.57715635553825)*phi_mod*phi_mod - (-22.2881652884246)*phi_mod - (-2.164981337306948) -
                (78.41725486660218)*eta*eta - (116.86544376724152)*eta - (43.27947962713945));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003830243977235372))/(-0.0010111500382124932) -
                (385.4905816485221)*phi_mod*phi_mod - (19.865138086472946)*phi_mod - (-2.3315096980257213) -
                (180.55838392617403)*eta*eta - (255.70343422178607)*eta - (90.36437828475555));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00218697088533892))/(0.0010010920718466069) -
                (454.66428749394515)*phi_mod*phi_mod - (-23.953343418818918)*phi_mod - (-2.3350958601697043) -
                (119.35820870917226)*eta*eta - (173.6320355801905)*eta - (63.027318289777405));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003822690124771213))/(-0.0010112564013201831) -
                (305.86242073601653)*phi_mod*phi_mod - (18.16536616853105)*phi_mod - (-1.8553329233276115) -
                (201.27356575049618)*eta*eta - (280.2256783526944)*eta - (97.41878894274997));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021619851559594046))/(0.001004754196444675) -
                (430.5618448686716)*phi_mod*phi_mod - (-22.651811835143356)*phi_mod - (-2.211793891827099) -
                (106.03955014947344)*eta*eta - (153.4814079160034)*eta - (55.44148597717461));}

    else if (seg_combination_id == 50308 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.019799177898980617))/(-0.0061786733738886865) -
                (-100.07641125916112)*phi_mod*phi_mod - (-6.449030875722863)*phi_mod - (1.327463443253036) -
                (-4.036065328089965)*eta*eta - (-1.7587581853169685)*eta - (0.5440583248356295));}

    else if (seg_combination_id == 50308 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.020803507883561993))/(0.006175215718809108) -
                (-100.96356688409043)*phi_mod*phi_mod - (4.208984772517718)*phi_mod - (1.350170170662295) -
                (-52.462524016386965)*eta*eta - (14.922712826761389)*eta - (-0.8821159044495025));}

    else if (seg_combination_id == 50308 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.018751015049560425))/(-0.006106751795116811) -
                (-88.4292238455944)*phi_mod*phi_mod - (-2.6912828843495418)*phi_mod - (1.4164215134965672) -
                (28.580434869433525)*eta*eta - (-10.45244226865048)*eta - (1.0119124635497283));}

    else if (seg_combination_id == 50308 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02085807468746433))/(0.006129472550740538) -
                (-100.24634471875237)*phi_mod*phi_mod - (8.536703617838342)*phi_mod - (1.4807849733726592) -
                (-59.84297865625446)*eta*eta - (16.570150060397758)*eta - (-0.9828351822077179));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010455427382827282))/(-0.0027028954639425028) -
                (-87.26396442026677)*phi_mod*phi_mod - (-11.532596800711616)*phi_mod - (1.9757476238596121) -
                (1807.7703040208316)*eta*eta - (899.2663386314229)*eta - (111.14075041457447));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.016345254399701557))/(-0.00045816133828479916) -
                (-223.17460459713254)*phi_mod*phi_mod - (-14.608585647696408)*phi_mod - (-0.8699277628885642) -
                (-2125.8134481659354)*eta*eta - (-1083.3839475011982)*eta - (-136.89773313289686));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00656839035443535))/(-0.0024404845161831766) -
                (-102.87137025264843)*phi_mod*phi_mod - (-12.350791181800545)*phi_mod - (1.886861922056332) -
                (-398.87133677183687)*eta*eta - (-212.04943785848337)*eta - (-28.012860322547336));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.000836394649102999))/(0.0006899119664844152) -
                (-247.6642157376242)*phi_mod*phi_mod - (-16.56745922304545)*phi_mod - (8.392153762629507) -
                (-923.2502116765312)*eta*eta - (-2627.0152745553487)*eta - (-1867.6913266052136));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016798563686621245))/(0.0009903184849994473) -
                (-63.88264517522117)*phi_mod*phi_mod - (-12.322963258024966)*phi_mod - (1.7450578084968653) -
                (15726.678442772612)*eta*eta - (44028.37923582368)*eta - (30814.45607868686));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016684152440338072))/(0.0008534441089961348) -
                (-17.94649485954963)*phi_mod*phi_mod - (1.3796304180665284)*phi_mod - (0.4986462494683652) -
                (-785.2582467161719)*eta*eta - (-2154.9492372701598)*eta - (-1477.7518187372352));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002053767430097029))/(0.000880464526620558) -
                (-99.38339963216187)*phi_mod*phi_mod - (-0.13617629342366977)*phi_mod - (3.4535574171512398) -
                (1058.3365783459449)*eta*eta - (2931.3386904275944)*eta - (2029.495665939027));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00045840527112284065))/(-0.0007435478262414241) -
                (-18.767058355473125)*phi_mod*phi_mod - (0.06775293272946557)*phi_mod - (0.1552898263307688) -
                (8.188226246462301)*eta*eta - (27.75212994145341)*eta - (21.617572865156394));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006705642633217491))/(0.0007436053580343145) -
                (-16.0688564563895)*phi_mod*phi_mod - (-2.1419463030736425)*phi_mod - (0.07490728336534098) -
                (23.619821087302988)*eta*eta - (93.99393596014329)*eta - (93.10508158834146));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00033258430651410004))/(-0.0007390497114212309) -
                (-27.252590073826664)*phi_mod*phi_mod - (0.0006824636825228074)*phi_mod - (0.11955660469421964) -
                (16.60629583339789)*eta*eta - (64.2234216795534)*eta - (61.09759827910079));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007714758914220845))/(0.0007477780507914704) -
                (-26.717521830108634)*phi_mod*phi_mod - (-2.8034205365290386)*phi_mod - (0.12825504708916444) -
                (22.825034408442374)*eta*eta - (90.80347473394667)*eta - (89.9325406303718));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00036099953223057567))/(-0.0007419697949622318) -
                (-21.318637869647013)*phi_mod*phi_mod - (-1.2143101160565228)*phi_mod - (0.14298057132640732) -
                (13.136809018123632)*eta*eta - (49.346410119425705)*eta - (45.164538181693935));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005975651328519387))/(0.0007454262622333395) -
                (-29.075974575373365)*phi_mod*phi_mod - (-0.8706140745850686)*phi_mod - (0.13246119623214475) -
                (27.87943579785226)*eta*eta - (111.71409634908292)*eta - (111.51954796459582));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000462104465795367))/(-0.000743699012134542) -
                (-14.215909802366133)*phi_mod*phi_mod - (-3.735777611089795)*phi_mod - (0.04974783195221333) -
                (13.865875127785898)*eta*eta - (52.468583423718556)*eta - (48.537787660513644));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008939695252765809))/(0.0007513187221760353) -
                (-18.116382683902426)*phi_mod*phi_mod - (0.9683976784029955)*phi_mod - (0.12713834818432135) -
                (22.037120274494953)*eta*eta - (87.84096860455635)*eta - (87.18758335648502));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00033134766964781903))/(-0.0007356108289141256) -
                (-28.52551489963206)*phi_mod*phi_mod - (-1.4602888057819492)*phi_mod - (0.1522831163002012) -
                (12.824842456691322)*eta*eta - (47.28786828024581)*eta - (42.143047789841944));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0004536576092008961))/(0.0007313517025967453) -
                (-23.445664522664913)*phi_mod*phi_mod - (-0.7793194921157982)*phi_mod - (0.13358285347365448) -
                (28.509512497362785)*eta*eta - (114.84118567856012)*eta - (115.30508097223515));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003513746147631263))/(-0.0007342824860827027) -
                (-14.06727096113741)*phi_mod*phi_mod - (-2.3132026004414334)*phi_mod - (0.07597166441459641) -
                (13.002049018958996)*eta*eta - (48.37643009619653)*eta - (43.67983700520894));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009190980585090715))/(0.0007475764583693112) -
                (-29.3199002616727)*phi_mod*phi_mod - (-1.5387053349053383)*phi_mod - (0.17712719638238741) -
                (22.358869817476418)*eta*eta - (88.64043023673872)*eta - (87.4387957193283));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004329182762641755))/(-0.0007386574669068116) -
                (-19.92028543275607)*phi_mod*phi_mod - (-0.33033108138128325)*phi_mod - (0.12837835497185876) -
                (15.335513111747426)*eta*eta - (58.71754331578342)*eta - (55.12867704501705));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007818918927845287))/(0.0007442367663774174) -
                (-25.55708533265788)*phi_mod*phi_mod - (-2.3350880013480815)*phi_mod - (0.12287772108882063) -
                (19.863672397522112)*eta*eta - (77.71285517795964)*eta - (75.50151551831114));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004529780949029276))/(-0.0007416809909018809) -
                (-14.78852295791362)*phi_mod*phi_mod - (0.15559847194348772)*phi_mod - (0.12878089284705424) -
                (9.438262211028828)*eta*eta - (33.0972796475038)*eta - (27.333426202601913));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007937562748475839))/(0.0007468621017370667) -
                (-24.992925135672838)*phi_mod*phi_mod - (-2.418466812261807)*phi_mod - (0.11472014848598866) -
                (21.688198621321195)*eta*eta - (85.60873870648913)*eta - (84.04035084742101));}

    else if (seg_combination_id == 50302 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005158000843194844))/(0.0017459186045224594) -
                (-293.758426648206)*phi_mod*phi_mod - (165.83967522725956)*phi_mod - (-23.22349467186473) -
                (-2455.5890599627346)*eta*eta - (-2270.1170468161995)*eta - (-523.8304017836917));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002742979230578731))/(-0.0018510050457943028) -
                (-128.43185875153912)*phi_mod*phi_mod - (-5.344657412834519)*phi_mod - (1.8774533144348196) -
                (-624.5775148029218)*eta*eta - (1253.344732119807)*eta - (-628.5887071694809));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005790176883666955))/(0.0018679786429286638) -
                (-120.66846453027503)*phi_mod*phi_mod - (5.65219667118339)*phi_mod - (1.6693005908667058) -
                (102.66931553264789)*eta*eta - (-215.8783189729435)*eta - (112.94714504224622));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001122433999847811))/(-0.0006059149415906414) -
                (89.88419655385111)*phi_mod*phi_mod - (11.99089978327635)*phi_mod - (-4.984039045287593) -
                (-107.60988795653188)*eta*eta - (336.70089853852744)*eta - (-262.0783491350264));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002083790975353236))/(-0.0006872489496298438) -
                (95.05026679538575)*phi_mod*phi_mod - (7.622048743059767)*phi_mod - (-6.820442979055585) -
                (1336.7528147079545)*eta*eta - (-3871.409597186631)*eta - (2802.5677784182703));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00029209165205620197))/(-0.00047002522029632957) -
                (-25.786395125476876)*phi_mod*phi_mod - (-2.723313296463175)*phi_mod - (1.6953594037057802) -
                (345.1322844483783)*eta*eta - (-980.1924885392806)*eta - (695.7503932262015));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003967319446335261))/(-0.0005630940458298897) -
                (9.179846523236968)*phi_mod*phi_mod - (0.28636920074460115)*phi_mod - (-0.756361357573203) -
                (-304.76190101032864)*eta*eta - (889.9682431719527)*eta - (-649.5344366775522));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016601173881663444))/(-0.000600762303704436) -
                (49.27636044350849)*phi_mod*phi_mod - (3.5189076666490524)*phi_mod - (-3.3860703752277383) -
                (279.9345410988721)*eta*eta - (-788.8547107655795)*eta - (555.5481583039186));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006049134747737819))/(1.6659356556398696e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0008439484853323318))/(-0.00038408612420461904) -
                (-1559.439388991678)*phi_mod*phi_mod - (-913.3190724069999)*phi_mod - (-133.67983483796476) -
                (-1102.1155278307979)*eta*eta - (3164.9739901940115)*eta - (-2272.3311234592024));}

    else if (seg_combination_id == 221924 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00029441060637935005))/(-0.00045437963189871015) -
                (15.767455445396013)*phi_mod*phi_mod - (0.47405341093323894)*phi_mod - (-1.313871686752691) -
                (1767.933830583807)*eta*eta - (-5039.669171635963)*eta - (3591.0244093353604));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008272860472364986))/(-0.0027249070708642935) -
                (-96.9269960268893)*phi_mod*phi_mod - (-5.816875785990145)*phi_mod - (1.3264640207389244) -
                (-32.51339665373697)*eta*eta - (-9.0028379926472)*eta - (-0.47557680255288143));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007439580827279008))/(0.0026986910462224616) -
                (-93.94459660168744)*phi_mod*phi_mod - (5.855161242285949)*phi_mod - (1.3031177672067644) -
                (-34.617939150210645)*eta*eta - (-9.820708234455438)*eta - (-0.49633236779797213));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00829261161586534))/(-0.002733946266442377) -
                (-96.80155545627586)*phi_mod*phi_mod - (-5.513206045657662)*phi_mod - (1.369413667295724) -
                (-15.975426702138792)*eta*eta - (-1.9784144015988756)*eta - (0.18046714191429078));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007532227603386062))/(0.0027124186037993394) -
                (-98.07750979559557)*phi_mod*phi_mod - (5.831506200845781)*phi_mod - (1.3818892845408128) -
                (-9.54410357348062)*eta*eta - (-0.037097769277615336)*eta - (0.3774732859393468));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008255246854107093))/(-0.0027089735201577445) -
                (-99.10004672740622)*phi_mod*phi_mod - (-6.12806870037473)*phi_mod - (1.374348176351593) -
                (-23.64398691297266)*eta*eta - (-7.70268713285493)*eta - (-0.49814427553364976));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007504135742250626))/(0.0027074952947669564) -
                (-100.5420141188165)*phi_mod*phi_mod - (5.750588809013473)*phi_mod - (1.4526047169064384) -
                (55.77099020313049)*eta*eta - (27.168191136434096)*eta - (3.300729063157335));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00861563476529483))/(-0.002730214935025827) -
                (-101.09886665987788)*phi_mod*phi_mod - (-6.300855609629804)*phi_mod - (1.407330040115576) -
                (-20.8656553777371)*eta*eta - (-3.995517447413622)*eta - (0.052490487517814946));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0077507494584185925))/(0.002716079991244144) -
                (-103.32666101413076)*phi_mod*phi_mod - (5.19229456330476)*phi_mod - (1.5040237311301807) -
                (-55.576137170207005)*eta*eta - (-17.24790553452451)*eta - (-1.1141892965577593));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012220101607273092))/(-0.003645888275418787) -
                (-103.30927692376032)*phi_mod*phi_mod - (-5.271026904105555)*phi_mod - (1.5036218979275544) -
                (8.6168840238003)*eta*eta - (7.473929311408888)*eta - (1.097180274592063));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010610323080776392))/(0.003585716196697391) -
                (-93.15295534409805)*phi_mod*phi_mod - (5.118802437109195)*phi_mod - (1.3951600295724584) -
                (5.315738850265682)*eta*eta - (4.246923876076854)*eta - (0.7029811072172323));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008200888048925964))/(-0.002718500002079866) -
                (-103.92013669198651)*phi_mod*phi_mod - (-5.824365973645474)*phi_mod - (1.4254600692700858) -
                (-6.766478278255056)*eta*eta - (1.5436217172538322)*eta - (0.42331305778361183));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0076673117440700855))/(0.002718837032431091) -
                (-99.39392105995809)*phi_mod*phi_mod - (5.495261300685784)*phi_mod - (1.3793523431188992) -
                (-7.563299449893028)*eta*eta - (0.1513298177426741)*eta - (0.29262144563455067));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006211604658350348))/(-0.002005512095948343) -
                (-106.4258055145334)*phi_mod*phi_mod - (-5.297833964753081)*phi_mod - (1.2975822753812336) -
                (46.03504919082671)*eta*eta - (97.56534437480335)*eta - (50.20176213969522));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003324117607783794))/(0.0020004289894616626) -
                (-97.2846169152482)*phi_mod*phi_mod - (5.195368823110019)*phi_mod - (1.3653002040877782) -
                (53.85969272716843)*eta*eta - (109.7669655331944)*eta - (55.003037769232975));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006200574490460917))/(-0.002006558929094241) -
                (-110.13120524244893)*phi_mod*phi_mod - (-5.438305747579052)*phi_mod - (1.3773592311368341) -
                (49.93816356344396)*eta*eta - (103.37833388688188)*eta - (52.28751179434771));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003300312378515979))/(0.0019981624196171227) -
                (-97.17132645753766)*phi_mod*phi_mod - (5.537228231756219)*phi_mod - (1.3478436642797513) -
                (67.47917283882362)*eta*eta - (134.20027735357718)*eta - (65.95131511095106));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006229939050073442))/(-0.0020208246995002048) -
                (-106.044439433036)*phi_mod*phi_mod - (-5.2425533236905935)*phi_mod - (1.275210343838568) -
                (103.90324885401235)*eta*eta - (201.1483503319937)*eta - (96.487589218002));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003321072436480986))/(0.002005255836098603) -
                (-94.3716458586607)*phi_mod*phi_mod - (4.640141670041011)*phi_mod - (1.312516570862846) -
                (110.06044552352395)*eta*eta - (211.32621198761458)*eta - (100.80354620189833));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0062740757291704485))/(-0.0020118468724296943) -
                (-109.45914946374491)*phi_mod*phi_mod - (-6.004260455442102)*phi_mod - (1.327805123719904) -
                (34.76955470962259)*eta*eta - (77.98165734641925)*eta - (41.71768203864967));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033198698564696864))/(0.001997088510602839) -
                (-103.44620508655348)*phi_mod*phi_mod - (4.102329305540999)*phi_mod - (1.4791022278110841) -
                (65.70693453050703)*eta*eta - (132.2088323310227)*eta - (65.59432008416269));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006522361307184021))/(-0.002027353853819977) -
                (-109.94461055886289)*phi_mod*phi_mod - (-5.181117748747362)*phi_mod - (1.43312830560104) -
                (49.583126532965096)*eta*eta - (102.31128246027043)*eta - (51.63541842180107));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034348470394584356))/(0.002010637049062149) -
                (-95.61544466560086)*phi_mod*phi_mod - (5.100020552321896)*phi_mod - (1.37452433025203) -
                (59.25112609054459)*eta*eta - (117.44998327862879)*eta - (57.56748245474541));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0023388528971046737))/(-0.0016153004678207182) -
                (-34.998935282527945)*phi_mod*phi_mod - (-2.6865507022687627)*phi_mod - (0.6796405354897509) -
                (-598.0290517973503)*eta*eta - (-1153.5346003438133)*eta - (-555.6642168218148));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006179713996789956))/(0.00247289027892834) -
                (-48.89528489359549)*phi_mod*phi_mod - (4.467013302651114)*phi_mod - (0.5978444970164326) -
                (-147.97234733793684)*eta*eta - (-127.10335895111274)*eta - (-26.87534990740932));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005253319034381851))/(0.0023952268104471337) -
                (-56.80020177174931)*phi_mod*phi_mod - (4.8438079131499885)*phi_mod - (0.8864767911587806) -
                (-651.8170897075222)*eta*eta - (-604.542691955949)*eta - (-139.95416953628347));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005543180850798905))/(0.002401259896262913) -
                (-54.66932981325282)*phi_mod*phi_mod - (5.00755738198256)*phi_mod - (0.9599988360020427) -
                (186.6283065401126)*eta*eta - (199.871719729479)*eta - (52.83985803738796));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0062350688069686515))/(0.0024700532058884446) -
                (-53.78221879069023)*phi_mod*phi_mod - (3.1579184590369236)*phi_mod - (0.8387427465331431) -
                (-455.433460488686)*eta*eta - (-420.40381937529014)*eta - (-96.81193200546161));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005792785235637948))/(0.002388942254542351) -
                (-45.94267489532666)*phi_mod*phi_mod - (4.6437676147113)*phi_mod - (0.7311324317326985) -
                (-179.76019634042177)*eta*eta - (-157.60571446470672)*eta - (-34.1564713728802));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01761817256135457))/(-0.00527215726147413) -
                (-112.71529231177395)*phi_mod*phi_mod - (-2.179160973646977)*phi_mod - (1.439129537116347) -
                (-166.39128437182717)*eta*eta - (241.2221556853469)*eta - (-86.13560131181225));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.038023905061994205))/(0.006390803485426774) -
                (110.41382260424444)*phi_mod*phi_mod - (-50.05329314815599)*phi_mod - (4.428667102266483) -
                (500.4138842917154)*eta*eta - (-783.365728479005)*eta - (306.6382512714284));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017356006301077885))/(-0.0052791388002619575) -
                (60.97440850667699)*phi_mod*phi_mod - (38.86700555981842)*phi_mod - (4.4582128574589905) -
                (848.7437852157416)*eta*eta - (-1401.5282754236882)*eta - (578.3509079670396));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018071613050946216))/(0.005668287604897411) -
                (-69.15734601908551)*phi_mod*phi_mod - (7.205636731935612)*phi_mod - (1.1658825019696641) -
                (-593.1740289703462)*eta*eta - (946.678893052582)*eta - (-377.57702257652545));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0021815986886125935))/(-0.0005378102803924723) -
                (326.0735854100928)*phi_mod*phi_mod - (39.66830287958007)*phi_mod - (0.3542164678691258) -
                (-743.6968350474409)*eta*eta - (883.7516416587474)*eta - (-261.41390346165525));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001653348309425785))/(-0.0006189983335907612) -
                (295.83144943104026)*phi_mod*phi_mod - (32.90330936134063)*phi_mod - (-0.10293375747434068) -
                (-1656.3766696603188)*eta*eta - (2050.0532364404835)*eta - (-634.0656532091626));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002567221570739968))/(-0.00098659095942099) -
                (219.64404380938382)*phi_mod*phi_mod - (19.59408597231729)*phi_mod - (-0.45604321848217333) -
                (-902.0321855374776)*eta*eta - (1119.9395301552777)*eta - (-347.41118130915237));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00016900778727142518))/(-0.0008371149638943924) -
                (98.10392593203632)*phi_mod*phi_mod - (2.266470807087765)*phi_mod - (-1.4749906262723187) -
                (-24.451365868197247)*eta*eta - (122.09293347536266)*eta - (-151.89516161984346));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008720322067134462))/(0.000858992019398482) -
                (65.0682822471677)*phi_mod*phi_mod - (-0.4064115344840697)*phi_mod - (-0.965890334047135) -
                (-9.266156758721538)*eta*eta - (47.57237286557588)*eta - (-60.37488940066781));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00014206495563805826))/(-0.000837275397080573) -
                (98.60180357646463)*phi_mod*phi_mod - (1.6305241658882246)*phi_mod - (-1.483393915685163) -
                (-51.919043339200876)*eta*eta - (249.70975012298467)*eta - (-300.0723372032137));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009120098777708118))/(0.0008654270094537786) -
                (65.36560137369443)*phi_mod*phi_mod - (-0.9601264424013456)*phi_mod - (-0.9631334726450744) -
                (-8.606532555664481)*eta*eta - (44.45777314569587)*eta - (-56.73275037930681));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (6.302409276759424e-05))/(-0.0008361313183652321) -
                (96.8619572832202)*phi_mod*phi_mod - (0.6867045180163676)*phi_mod - (-1.4820834463626846) -
                (-20.967006131811893)*eta*eta - (104.04286779057455)*eta - (-128.7195481819519));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009403735236667352))/(0.0008590153297652249) -
                (71.24012530618847)*phi_mod*phi_mod - (-1.4840225391346444)*phi_mod - (-1.082540057503285) -
                (-6.567748948632079)*eta*eta - (35.88868260332475)*eta - (-47.81909450968613));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00026504941972557233))/(-0.0008405158949056985) -
                (99.47133677314093)*phi_mod*phi_mod - (1.047479701931163)*phi_mod - (-1.5046697834630764) -
                (1.5442875754351812)*eta*eta - (-1.53387975435977)*eta - (-4.928367446650334));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008682284483219015))/(0.0008558526542010132) -
                (74.39652691290082)*phi_mod*phi_mod - (-1.967303225232016)*phi_mod - (-1.1221097745507662) -
                (-9.90953051958865)*eta*eta - (50.86526272356155)*eta - (-64.57083330109283));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00044627050285486))/(-0.0008513061263907773) -
                (97.52563278655789)*phi_mod*phi_mod - (0.9073007478389422)*phi_mod - (-1.551881235296646) -
                (-42.0674008371687)*eta*eta - (204.7412910632794)*eta - (-248.8073500192181));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006922533686419976))/(0.0008460497684314921) -
                (81.51986479941138)*phi_mod*phi_mod - (-2.6953935229132906)*phi_mod - (-1.2787674363025725) -
                (-12.7052749078138)*eta*eta - (64.48487365486733)*eta - (-81.10516137624798));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007352236970997166))/(-0.0008572017823971776) -
                (101.29106729266216)*phi_mod*phi_mod - (0.17574948474987473)*phi_mod - (-1.6348562438518042) -
                (-85.56181933926595)*eta*eta - (410.15971746206395)*eta - (-491.32999509160624));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007919657496549929))/(0.0008414594311974624) -
                (81.80695243034829)*phi_mod*phi_mod - (-1.1891897721579643)*phi_mod - (-1.2422444044896268) -
                (-5.667220441583526)*eta*eta - (31.25422186562208)*eta - (-41.904700312410725));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00024390498066606726))/(-0.0008381656821956477) -
                (102.43577211733489)*phi_mod*phi_mod - (1.7541829617564866)*phi_mod - (-1.585055296729971) -
                (-68.17954767407419)*eta*eta - (327.66558046724373)*eta - (-393.4509663546466));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007932663340867903))/(0.0008463059136224261) -
                (81.77037363285044)*phi_mod*phi_mod - (-0.9657262133725206)*phi_mod - (-1.2413852954716427) -
                (0.1923313699743695)*eta*eta - (4.5693791584839065)*eta - (-11.560971728193124));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002272053574955583))/(-0.0008408120670459824) -
                (101.70371856488799)*phi_mod*phi_mod - (2.682750344093488)*phi_mod - (-1.5646468640726585) -
                (-12.640050701606066)*eta*eta - (65.54184032377704)*eta - (-84.21922267392921));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008980041537195418))/(0.0008591509861856059) -
                (72.29835529685184)*phi_mod*phi_mod - (-0.8186882379420423)*phi_mod - (-1.0771522381912382) -
                (-7.042898468404918)*eta*eta - (37.922344538208385)*eta - (-49.9618105359279));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002760556143089974))/(-0.0008447719653801302) -
                (475.50779734838835)*phi_mod*phi_mod - (18.00007302605968)*phi_mod - (-2.4933841217791644) -
                (-362.1080738915482)*eta*eta - (-624.8041162841413)*eta - (-269.17109156228435));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001115579037665452))/(0.0008430989018001986) -
                (488.7217658828634)*phi_mod*phi_mod - (-24.70169479671594)*phi_mod - (-1.9892544780080208) -
                (168.2091685527381)*eta*eta - (319.57507203169064)*eta - (151.48020192980076));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0025489953905547895))/(-0.0008428618819155442) -
                (487.6572929315343)*phi_mod*phi_mod - (23.060080007057046)*phi_mod - (-2.620799941306854) -
                (-173.4020185280425)*eta*eta - (-293.4196760231835)*eta - (-123.73597895786929));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012118347214137156))/(0.0008561939784107688) -
                (488.7503313888603)*phi_mod*phi_mod - (-21.778372920667593)*phi_mod - (-2.241072698071407) -
                (211.57641321611743)*eta*eta - (396.8635703268079)*eta - (185.88056393444862));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0026327673248144547))/(-0.0008470519659046466) -
                (486.2951279493488)*phi_mod*phi_mod - (23.587467511190123)*phi_mod - (-2.5941486235133935) -
                (-223.08598651854496)*eta*eta - (-378.6948224826133)*eta - (-160.27796640297026));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013256411548635148))/(0.0008641495841948649) -
                (481.13437953583923)*phi_mod*phi_mod - (-21.09907097625856)*phi_mod - (-2.300950264971882) -
                (206.3583228268412)*eta*eta - (388.32701616079316)*eta - (182.41954009299934));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00293282100150711))/(-0.0008590509203116049) -
                (479.8627888187847)*phi_mod*phi_mod - (21.14043473549717)*phi_mod - (-2.65707831276004) -
                (3.8254674061042317)*eta*eta - (19.769006301241966)*eta - (14.60859181329126));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013687328789476357))/(0.0008604291028461954) -
                (470.555082830858)*phi_mod*phi_mod - (-21.596208352264355)*phi_mod - (-2.1849415718433836) -
                (280.06580578345466)*eta*eta - (524.8403294095837)*eta - (245.6742179392113));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028020601449135316))/(-0.0008638227452026909) -
                (469.1119742936099)*phi_mod*phi_mod - (19.507828709637394)*phi_mod - (-2.921326372683596) -
                (-302.37074754073694)*eta*eta - (-520.1720629093818)*eta - (-223.4016197796306));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016103025135440086))/(0.0008681590180607122) -
                (473.5321218123707)*phi_mod*phi_mod - (-24.883972577714484)*phi_mod - (-2.172458441856961) -
                (268.8356998609263)*eta*eta - (500.1201866086951)*eta - (232.44800040581637));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002833268949255291))/(-0.000858756720643836) -
                (419.49246932032526)*phi_mod*phi_mod - (19.887230113509187)*phi_mod - (-2.4724502361264467) -
                (-361.8104898179969)*eta*eta - (-627.3413862247963)*eta - (-271.6674975974992));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014080864926040023))/(0.0008608042110867125) -
                (454.975310373439)*phi_mod*phi_mod - (-23.59698549350209)*phi_mod - (-2.0483189821163057) -
                (205.19321049049037)*eta*eta - (385.77897528076807)*eta - (181.14197015275397));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004048496063510729))/(-0.0010305835508274304) -
                (325.44618769643745)*phi_mod*phi_mod - (20.55264425103891)*phi_mod - (-1.4118176061947167) -
                (-381.72148195134463)*eta*eta - (-450.1660636439973)*eta - (-132.5886881961959));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006363378878155371))/(0.0009875851247017685) -
                (626.0011508693024)*phi_mod*phi_mod - (-28.1944806871667)*phi_mod - (-3.2160504680158244) -
                (3225.6887291284265)*eta*eta - (3947.0832454077968)*eta - (1207.312969630956));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004023274441416744))/(-0.001028563651940467) -
                (334.0769637022044)*phi_mod*phi_mod - (24.986683261288498)*phi_mod - (-1.3212804567376373) -
                (-71.28907801643257)*eta*eta - (-85.1750426133949)*eta - (-25.348036010355603));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0032528527945029184))/(0.0008770487554601377) -
                (552.691053868611)*phi_mod*phi_mod - (-25.99828769130952)*phi_mod - (-3.5473732140640784) -
                (-2393.450256650267)*eta*eta - (-2857.96069389697)*eta - (-852.9139499891374));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0039029475827498505))/(-0.0010318215863608351) -
                (294.7574933784997)*phi_mod*phi_mod - (18.458237051767792)*phi_mod - (-1.3064574860046811) -
                (-453.55924694287955)*eta*eta - (-534.3940007291944)*eta - (-157.28154012745568));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0023751433259095282))/(0.0010607546850116458) -
                (561.5390799177092)*phi_mod*phi_mod - (-19.056903316349523)*phi_mod - (-3.47401821516903) -
                (118.42755478873947)*eta*eta - (163.49858326231646)*eta - (55.62803000649013));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038653773494270755))/(-0.0010169940640661279) -
                (330.0422943868551)*phi_mod*phi_mod - (21.166498070146645)*phi_mod - (-1.359256938844239) -
                (-372.4333798341467)*eta*eta - (-440.56496731295715)*eta - (-130.12578303558846));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001341205863180489))/(0.0010150332847736543) -
                (568.422276349914)*phi_mod*phi_mod - (-23.274842135049326)*phi_mod - (-3.2284944927452788) -
                (-4777.857867770973)*eta*eta - (-5799.551148686133)*eta - (-1759.7398481988334));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038844102760299554))/(-0.0010394028208077315) -
                (274.7738962812161)*phi_mod*phi_mod - (18.605775194396966)*phi_mod - (-1.4918345466069418) -
                (-397.5461645992218)*eta*eta - (-470.1084520518291)*eta - (-138.78490474474012));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010339637927773346))/(0.0012987872083783422) -
                (463.809365391419)*phi_mod*phi_mod - (-19.486965113367557)*phi_mod - (-3.101683843476849) -
                (-6277.061869294054)*eta*eta - (-7656.597237228837)*eta - (-2334.5539482755257));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004075266531148089))/(-0.0010364947000393407) -
                (264.8862945881327)*phi_mod*phi_mod - (20.419552823629566)*phi_mod - (-1.1663315769724125) -
                (-186.41764249329694)*eta*eta - (-218.54575648563502)*eta - (-63.96753996089503));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0005532595813505729))/(0.0009687671049946811) -
                (586.2926836380664)*phi_mod*phi_mod - (-27.96906375490305)*phi_mod - (-4.3003365060268965) -
                (2302.8836058105944)*eta*eta - (2777.803944095293)*eta - (837.6230322294899));}

    else if (seg_combination_id == 50902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004753675825272324))/(-0.0015370359683860978) -
                (-9.672416279480997)*phi_mod*phi_mod - (10.381782092896156)*phi_mod - (-1.7654469570958522) -
                (-354.2083656398508)*eta*eta - (-628.3196148336755)*eta - (-277.7097042174223));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007495689596220929))/(-0.002722734182346476) -
                (-95.33066807085854)*phi_mod*phi_mod - (-5.571901260590034)*phi_mod - (1.3499689956545728) -
                (-4.11861390961528)*eta*eta - (-0.9617544539785697)*eta - (0.34080440276193696));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008107304754714911))/(0.0027208494737404844) -
                (-95.32618373334074)*phi_mod*phi_mod - (5.755170489447635)*phi_mod - (1.3404916659649486) -
                (-2.3931744909177173)*eta*eta - (-3.049083740450981)*eta - (0.5873494671720464));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007925278742359342))/(-0.002745683177994499) -
                (-96.95709348045784)*phi_mod*phi_mod - (-5.228439260389718)*phi_mod - (1.4143074856997415) -
                (-6.815675102009881)*eta*eta - (-0.5787430536505945)*eta - (0.3547392676391628));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00811111709251028))/(0.0027164244239678407) -
                (-97.4294735563545)*phi_mod*phi_mod - (5.707818085154086)*phi_mod - (1.3463518467913553) -
                (-6.28025784755666)*eta*eta - (-1.8547554349366904)*eta - (0.5083344382898016));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007761361320607998))/(-0.0027407905860882516) -
                (-98.40854084073007)*phi_mod*phi_mod - (-5.686052328852712)*phi_mod - (1.4060372922149587) -
                (-8.767176568084562)*eta*eta - (0.36435556620084314)*eta - (0.2641162577984157));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00813376702319238))/(0.0027282165912598045) -
                (-102.66721770881905)*phi_mod*phi_mod - (5.75444312313763)*phi_mod - (1.424228044194626) -
                (4.437049337997484)*eta*eta - (-5.303812858401613)*eta - (0.7730909224816301));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007729708958355825))/(-0.0026985970813103327) -
                (-102.43403938879409)*phi_mod*phi_mod - (-6.384109668750916)*phi_mod - (1.4855518193224853) -
                (-29.770387316556526)*eta*eta - (8.258886844154873)*eta - (-0.35691206637490724));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008104104862231192))/(0.0026926355239610166) -
                (-102.94539737020607)*phi_mod*phi_mod - (5.147351895927948)*phi_mod - (1.4630117063258228) -
                (-51.677248252917146)*eta*eta - (15.827099141840291)*eta - (-1.057665732157363));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011076148344106085))/(-0.003628840728989598) -
                (-100.01515028992772)*phi_mod*phi_mod - (-5.459362846584604)*phi_mod - (1.4756219433793476) -
                (-35.74438955131863)*eta*eta - (11.103614699765844)*eta - (-0.6668086557143641));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011353191256574696))/(0.0035760337677809653) -
                (-98.48755845765174)*phi_mod*phi_mod - (5.281385205067626)*phi_mod - (1.4290489006138078) -
                (-8.643251628789905)*eta*eta - (-0.5596013154307454)*eta - (0.49722749745416445));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0077787764902446915))/(-0.002734421505624302) -
                (-91.60741018925228)*phi_mod*phi_mod - (-5.97175395293842)*phi_mod - (1.2184963845428514) -
                (-4.15924441455775)*eta*eta - (-0.8522086017559293)*eta - (0.3428546442153823));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0073791802243159755))/(0.002673864680098893) -
                (-97.8500346996796)*phi_mod*phi_mod - (5.885867422847446)*phi_mod - (1.2713233173185001) -
                (-5.93741622767781)*eta*eta - (-3.7824958091633967)*eta - (0.8022886519159709));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005989544123186696))/(-0.0011432122884360856) -
                (-49.72290536295208)*phi_mod*phi_mod - (8.331917497709593)*phi_mod - (-1.2199135056066033) -
                (-43.498919698601334)*eta*eta - (-199.8693556130659)*eta - (-228.99564652714855));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.006928787344758307))/(0.001224192833622322) -
                (-1442.8070175438709)*phi_mod*phi_mod - (-31.570744098962532)*phi_mod - (20.95697937081435) -
                (65.01524936834835)*eta*eta - (266.9140862593031)*eta - (274.2141757327236));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001376020906605198))/(-0.000405693011042579) -
                (-205.04023241479618)*phi_mod*phi_mod - (15.615471993252655)*phi_mod - (4.580278224875209) -
                (-319.4730822054863)*eta*eta - (-1397.9866034190493)*eta - (-1527.5896563644708));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006199411802687763))/(-0.0006314759914748647) -
                (134.12419857439787)*phi_mod*phi_mod - (1.725537011901465)*phi_mod - (-5.914473185431805) -
                (176.9919507851548)*eta*eta - (763.8227859667687)*eta - (822.2115023062095));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006180243159340968))/(0.0007736094120913666) -
                (-340.45439452525545)*phi_mod*phi_mod - (-5.984109566210654)*phi_mod - (7.189724228748903) -
                (-304.694662281657)*eta*eta - (-1306.3875465753156)*eta - (-1398.6731626314759));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006547084673495528))/(-0.0010018932331959678) -
                (-237.61857829972692)*phi_mod*phi_mod - (4.335811074940713)*phi_mod - (6.391133693590971) -
                (63.438375541712894)*eta*eta - (265.6599421569918)*eta - (277.65061473596285));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02357187731968183))/(0.0018114000659300259) -
                (-37.80781190814263)*phi_mod*phi_mod - (-4.513921065661895)*phi_mod - (-0.6272751978188297) -
                (257.83674240746274)*eta*eta - (1063.2911676141018)*eta - (1095.25867253554));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0024101012604850845))/(-0.0008573724022260582) -
                (-92.72674568279787)*phi_mod*phi_mod - (-1.025395960754546)*phi_mod - (-0.8737578545698551) -
                (-83.89366263990675)*eta*eta - (-364.14841022991277)*eta - (-394.5609005736446));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0037202962329512188))/(0.0008154818638811326) -
                (202.8971922858096)*phi_mod*phi_mod - (5.049032381863555)*phi_mod - (-4.114251835972519) -
                (-17.200952059748616)*eta*eta - (-65.6159086788563)*eta - (-61.87079924100621));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013856019936993738))/(-0.0005619763939463192) -
                (-100.72728710494353)*phi_mod*phi_mod - (-10.595604905822205)*phi_mod - (-1.5972904456427977) -
                (-704.6071311929478)*eta*eta - (-3031.4487658403664)*eta - (-3258.4779447076066));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024844097803728552))/(0.0007705579911179616) -
                (10.045203376884583)*phi_mod*phi_mod - (-5.891581601672168)*phi_mod - (-0.711712703326377) -
                (122.35985154464815)*eta*eta - (552.1114796587497)*eta - (620.302866198039));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006641488374272416))/(-0.001209733024062748) -
                (-30.010361105759692)*phi_mod*phi_mod - (-3.8276068235248157)*phi_mod - (-2.834984659874456) -
                (-168.59613207847005)*eta*eta - (-736.2589403644987)*eta - (-803.5186749140474));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017056813264473794))/(2.1612706195245557e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008101173443639092))/(-0.0010269273804571317) -
                (-84.82986212086313)*phi_mod*phi_mod - (-3.831322181586304)*phi_mod - (1.9393610095378728) -
                (-22.66589676250955)*eta*eta - (-106.05433984126542)*eta - (-123.27359248876763));}

    else if (seg_combination_id == 232034 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.001472798702819974))/(0.000592209751110882) -
                (219.9624094237117)*phi_mod*phi_mod - (-42.035231756100394)*phi_mod - (-7.065470188752177) -
                (-1328.9328635356403)*eta*eta - (-5543.798204345152)*eta - (-5781.954979337188));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0003053571300659756))/(0.0016131649069524297) -
                (-76.93411076312239)*phi_mod*phi_mod - (15.031850928205477)*phi_mod - (1.2754354191799946) -
                (-718.8619512841236)*eta*eta - (336.3979052661971)*eta - (-38.46180705275556));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001318058477044213))/(0.0020003217944098996) -
                (-130.96628776979404)*phi_mod*phi_mod - (18.818217262269993)*phi_mod - (1.1733889068821879) -
                (113.44377831706102)*eta*eta - (-84.33870498717724)*eta - (14.41525741198095));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0045939063768240945))/(0.0014751831633643) -
                (-143.70530603739243)*phi_mod*phi_mod - (11.601933383545125)*phi_mod - (2.302707041493315) -
                (-351.9718592547409)*eta*eta - (229.71122336358852)*eta - (-35.8684084340812));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012604707294993009))/(0.0029079519216902157) -
                (-51.94653132158506)*phi_mod*phi_mod - (8.31605171403014)*phi_mod - (0.7767922167354485) -
                (418.4881994363409)*eta*eta - (-235.47334461904816)*eta - (32.91605031291409));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.006839984189847866))/(0.00020715816455164462) -
                (-456.4366007707174)*phi_mod*phi_mod - (-30.430227644033806)*phi_mod - (10.011004688772472) -
                (-579.6946181875503)*eta*eta - (-1546.2892931005915)*eta - (-1030.4133179645355));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004132283973766178))/(0.00020936763559036828) -
                (-159.8658947559141)*phi_mod*phi_mod - (-17.70492199811902)*phi_mod - (6.635948679461367) -
                (-540.3456165974721)*eta*eta - (-1497.7037628502997)*eta - (-1035.695533145232));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038106373182987784))/(0.0009871255895773886) -
                (-114.22673413006427)*phi_mod*phi_mod - (-9.655892513490214)*phi_mod - (3.3535896951687496) -
                (-302.0567443862562)*eta*eta - (-833.3492808613329)*eta - (-574.5526898413326));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009815221895720294))/(-0.0002160186859553931) -
                (-21.6167532629644)*phi_mod*phi_mod - (8.487845917660746)*phi_mod - (1.7106271911885598) -
                (277.1676217452563)*eta*eta - (794.7849537083551)*eta - (567.9392827806216));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005232770815974837))/(0.00011678751429182879) -
                (1061.2670316146146)*phi_mod*phi_mod - (93.56274686010215)*phi_mod - (-29.71482090528715) -
                (1405.049857409163)*eta*eta - (3765.225753634683)*eta - (2520.8731245893887));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005657029198717335))/(0.00013108027096100474) -
                (180.2190983662582)*phi_mod*phi_mod - (18.913825932336866)*phi_mod - (-4.995765663968141) -
                (-263.50619499163423)*eta*eta - (-664.765640179613)*eta - (-416.48918858088024));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0009215420839306118))/(0.0005217701627453991) -
                (-232.18044757992635)*phi_mod*phi_mod - (-21.88715540275216)*phi_mod - (6.74594636882108) -
                (-1185.9368840610857)*eta*eta - (-3222.2856345616665)*eta - (-2188.4373510567125));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004121676228529164))/(0.0002637929205873121) -
                (-166.56478585346426)*phi_mod*phi_mod - (-8.914166575832905)*phi_mod - (5.449813655407703) -
                (-130.5205431399399)*eta*eta - (-387.4572208946336)*eta - (-285.3247819921405));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0051114088269148))/(-0.00011390814596128668) -
                (456.62733742975206)*phi_mod*phi_mod - (-123.86421341856098)*phi_mod - (3.6468613677276953) -
                (424.61857859384685)*eta*eta - (-752.875132034239)*eta - (331.5439663672037));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.006808554502162885))/(-0.00028812273234718537) -
                (-21.82483811398754)*phi_mod*phi_mod - (-4.081386127672274)*phi_mod - (0.24680113608496138) -
                (2201.1126359545824)*eta*eta - (-3682.5977037997664)*eta - (1539.5652185754084));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004371841879424982))/(-3.591503969105013e-05) -
                (310.6098743512757)*phi_mod*phi_mod - (-5.8105987238917)*phi_mod - (-3.225138091256719) -
                (-4484.0828025404935)*eta*eta - (7685.631833202506)*eta - (-3293.251026948493));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009167853868650462))/(-0.0027351940179850013) -
                (-80.86658494240615)*phi_mod*phi_mod - (-6.437801274825407)*phi_mod - (1.0623714777060074) -
                (-190.36042831464655)*eta*eta - (-97.07910092631077)*eta - (-12.290662604765497));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008364494946534299))/(0.0027873744818156976) -
                (-125.35088430242143)*phi_mod*phi_mod - (7.964200094747883)*phi_mod - (1.3805812628604006) -
                (847.1624024908866)*eta*eta - (462.33266881556057)*eta - (62.91927313096976));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0090722929307263))/(-0.0026952573841792834) -
                (-83.54499928692832)*phi_mod*phi_mod - (-6.2432178978004655)*phi_mod - (1.1789963687114438) -
                (309.57372300487606)*eta*eta - (138.33422483642673)*eta - (15.33233046221507));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011776936681144792))/(0.0028969568261506106) -
                (-135.4876403094802)*phi_mod*phi_mod - (8.95330992044041)*phi_mod - (1.163780569349249) -
                (-3142.12975914792)*eta*eta - (-1631.955872675501)*eta - (-211.83991532512968));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009121021355018138))/(-0.0026858487385228087) -
                (-82.12334345082502)*phi_mod*phi_mod - (-6.545926967282152)*phi_mod - (1.1973648499922203) -
                (-270.95372155793444)*eta*eta - (-139.12625852865233)*eta - (-17.647682317401763));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00575668817160397))/(0.002675801503816388) -
                (-134.5097067083001)*phi_mod*phi_mod - (7.46246108482711)*phi_mod - (1.6821110219531938) -
                (86.07671718884937)*eta*eta - (66.4223418130706)*eta - (11.55479995869434));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00633310031102917))/(-0.0029790734712769234) -
                (-49.384605140656234)*phi_mod*phi_mod - (-3.050647567502384)*phi_mod - (1.295392059037716) -
                (590.7000401577249)*eta*eta - (230.5061677329777)*eta - (21.495774366618672));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009319020526317603))/(-0.0026863457238449737) -
                (-95.46179167411798)*phi_mod*phi_mod - (-4.05756797502693)*phi_mod - (1.511588934524014) -
                (-251.34368519153622)*eta*eta - (-129.69380624131156)*eta - (-16.546155247807274));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005304522887144202))/(0.002650701213415774) -
                (-136.07625726822852)*phi_mod*phi_mod - (3.176170402748539)*phi_mod - (1.8691604915221092) -
                (-126.2521023915934)*eta*eta - (-46.85436423351556)*eta - (-3.555247443628668));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.02025032038278966))/(-0.005610228217824912) -
                (-92.9842737023391)*phi_mod*phi_mod - (-7.792363689438547)*phi_mod - (2.3978901032727697) -
                (-38.77129119339301)*eta*eta - (-16.623289842725104)*eta - (-0.5468803456327888));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.015546131214795039))/(0.0055588346573646) -
                (47.094479193304736)*phi_mod*phi_mod - (-39.97911105904114)*phi_mod - (5.315525164796966) -
                (-17.045139846231905)*eta*eta - (-2.4497523814493634)*eta - (1.7562688510513258));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.02030131648812571))/(-0.005747285530021304) -
                (23.849909911968247)*phi_mod*phi_mod - (29.770688872228185)*phi_mod - (3.8351910584398112) -
                (-70.4864870399106)*eta*eta - (-42.963984111881445)*eta - (-6.06712982713994));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0171864675380421))/(0.005763689264330566) -
                (-114.25733216312989)*phi_mod*phi_mod - (2.818345960431186)*phi_mod - (1.554072175339714) -
                (-11.783729543485777)*eta*eta - (1.9295445775513849)*eta - (2.550415687961008));}

    else if (seg_combination_id == 110902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004080167871684116))/(-0.0011650832900087446) -
                (338.1702465300077)*phi_mod*phi_mod - (20.779199363661245)*phi_mod - (-1.9244665375007945) -
                (-180.86486176218386)*eta*eta - (-108.38824528527438)*eta - (-16.044237166998922));}

    else if (seg_combination_id == 110902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002613106409222008))/(0.0011232007320945156) -
                (422.8392577656442)*phi_mod*phi_mod - (-23.461361121161136)*phi_mod - (-2.1972867401643708) -
                (-43.03259562575536)*eta*eta - (-17.25271820683419)*eta - (-1.095605173598268));}

    else if (seg_combination_id == 110902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004037705572613934))/(-0.0011543586766903245) -
                (325.90923538511834)*phi_mod*phi_mod - (19.831557885314446)*phi_mod - (-1.8880088663437826) -
                (-73.2541124374444)*eta*eta - (-41.960851869536896)*eta - (-5.91517186022385));}

    else if (seg_combination_id == 110902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0027025946275942582))/(0.0011309838826304157) -
                (368.0228206963578)*phi_mod*phi_mod - (-24.82208894908286)*phi_mod - (-2.0346698694319403) -
                (316.22877690021335)*eta*eta - (210.43407061578583)*eta - (34.912113865029475));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034921060117273175))/(-0.002302121310613139) -
                (-66.57754109251312)*phi_mod*phi_mod - (10.196485659953051)*phi_mod - (2.5923607253118335) -
                (-585.2890331635872)*eta*eta - (1163.4433767079902)*eta - (-578.0354329097298));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007861164258393744))/(0.0023734370537025883) -
                (-140.15459838411087)*phi_mod*phi_mod - (2.5572682642867153)*phi_mod - (1.5488192973148458) -
                (-328.13159903153615)*eta*eta - (642.042721803226)*eta - (-313.96331718047895));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0035980420090061995))/(-0.002320408165385151) -
                (-142.06317801806986)*phi_mod*phi_mod - (-0.3936672373097889)*phi_mod - (1.7160991553329643) -
                (-692.9055868793616)*eta*eta - (1365.0542829331841)*eta - (-672.1209600052556));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007391225810613242))/(0.0023190750572367187) -
                (-11.389534374960911)*phi_mod*phi_mod - (-22.075796440663552)*phi_mod - (3.2256719817528623) -
                (-12.351837051441382)*eta*eta - (21.102582760316736)*eta - (-8.756466090052047));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00028596541333558847))/(-0.000810897529925225) -
                (-60.609252841415284)*phi_mod*phi_mod - (0.6986162711638724)*phi_mod - (0.42202975486894284) -
                (34.94044145082016)*eta*eta - (145.72608469236368)*eta - (149.1660859980808));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007269432490459581))/(0.0008112121792035464) -
                (-52.84205645121182)*phi_mod*phi_mod - (-0.3533692345308407)*phi_mod - (0.3696120995342509) -
                (79.06013674218097)*eta*eta - (353.02237214065826)*eta - (393.2872259671122));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00010403661187081747))/(-0.0008026519968299753) -
                (-53.208951027454596)*phi_mod*phi_mod - (0.5415183123139279)*phi_mod - (0.3424742380804454) -
                (22.172221348931405)*eta*eta - (85.98954143305698)*eta - (79.31495324299667));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000801040144859614))/(0.0008143553355242944) -
                (-42.014595933500516)*phi_mod*phi_mod - (-0.7586868784976714)*phi_mod - (0.29262196674907626) -
                (89.62954159449535)*eta*eta - (402.0569708636135)*eta - (450.12230287817704));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00030149566044421574))/(-0.0008109711399811695) -
                (-57.21490267136224)*phi_mod*phi_mod - (-0.14098144058345494)*phi_mod - (0.4675395642916891) -
                (-17.413261900095748)*eta*eta - (-103.14075472620227)*eta - (-146.56499149816048));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006908578236867845))/(0.0008174214396991814) -
                (-37.985798908967084)*phi_mod*phi_mod - (0.5696922052399223)*phi_mod - (0.18044931264296887) -
                (85.1451193059071)*eta*eta - (381.98240023249923)*eta - (427.68429116698803));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00013598129736275077))/(-0.0007945631206466429) -
                (-54.23575422480175)*phi_mod*phi_mod - (-0.959034008677441)*phi_mod - (0.42711602693982365) -
                (157.92209420082466)*eta*eta - (725.9142328305636)*eta - (833.4096949570148));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009137855137053624))/(0.0008206744767919932) -
                (-40.99831024835738)*phi_mod*phi_mod - (1.8474943739344565)*phi_mod - (0.28783993504497873) -
                (101.58472694719416)*eta*eta - (457.22941819018666)*eta - (513.7380453565404));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003132719060885226))/(-0.00080596674382815) -
                (-59.78012165995638)*phi_mod*phi_mod - (1.1698774038615607)*phi_mod - (0.46811494317611535) -
                (-86.87170521982044)*eta*eta - (-433.67155954033194)*eta - (-539.7209783207335));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009037017143632265))/(0.0008153106754154473) -
                (-52.89753494834761)*phi_mod*phi_mod - (0.12476686223440234)*phi_mod - (0.3478900134024341) -
                (86.51140250990738)*eta*eta - (385.6289980856206)*eta - (428.7821329526338));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-2.897882485629099e-06))/(-0.0007926648081475462) -
                (-61.801361402910295)*phi_mod*phi_mod - (-0.3462012546255601)*phi_mod - (0.4293952763837032) -
                (32.94246019302324)*eta*eta - (134.07330908343965)*eta - (132.83416055345853));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008637453919010255))/(0.0008143996634387638) -
                (-53.70835568408842)*phi_mod*phi_mod - (0.5475294904134014)*phi_mod - (0.36220795327023464) -
                (87.79789126141688)*eta*eta - (393.05372730303014)*eta - (439.1110325699226));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00033028966976936377))/(-0.0007838281470651649) -
                (-63.54796211746664)*phi_mod*phi_mod - (1.4783462230369504)*phi_mod - (0.42838025384220446) -
                (136.9921291800096)*eta*eta - (624.6442640116472)*eta - (711.0156521171698));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009247933311936242))/(0.0008199061122598838) -
                (-59.21076965426648)*phi_mod*phi_mod - (-0.9165211174379374)*phi_mod - (0.35100598656635584) -
                (85.7510273661275)*eta*eta - (383.9229367625722)*eta - (428.94678736717856));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002568434360407363))/(-0.0008080705205252007) -
                (-61.471007167984396)*phi_mod*phi_mod - (0.587020032956284)*phi_mod - (0.4244872613323749) -
                (95.9700997655888)*eta*eta - (432.4705906453941)*eta - (485.9667152349229));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007886615925562497))/(0.0008128181802464108) -
                (-48.85791980234839)*phi_mod*phi_mod - (-0.5679145290248774)*phi_mod - (0.3616030280726941) -
                (87.856050057655)*eta*eta - (393.3102516802054)*eta - (439.4096813522162));}

    else if (seg_combination_id == 231915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002320499871141696))/(0.0004383759887397653) -
                (-227.0732807954902)*phi_mod*phi_mod - (4.8977203009814305)*phi_mod - (7.898294468377664) -
                (-5491.155584885759)*eta*eta - (14714.502555768231)*eta - (-9856.948523968988));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003327063391460992))/(-0.0010638962637714254) -
                (319.9430728240927)*phi_mod*phi_mod - (18.22030851096461)*phi_mod - (-1.4807543736894566) -
                (114.94109949704604)*eta*eta - (-136.35262424217)*eta - (40.05849234167191));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004209484078528546))/(0.0011327847673447456) -
                (394.9362420360619)*phi_mod*phi_mod - (-16.059699357972708)*phi_mod - (-3.3303626897532763) -
                (355.19170475172956)*eta*eta - (-336.9619349380825)*eta - (79.41793921327128));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003050840004917794))/(-0.0010318142942992044) -
                (330.31145481019126)*phi_mod*phi_mod - (18.665742109763386)*phi_mod - (-1.3754365758728473) -
                (29.880587294720712)*eta*eta - (-47.10449214040257)*eta - (16.604237652821734));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012617698886369221))/(0.0009973562166546344) -
                (411.38877924463475)*phi_mod*phi_mod - (-23.87504196214381)*phi_mod - (-2.897492007255879) -
                (-245.99746045619483)*eta*eta - (265.9755058692085)*eta - (-71.6702170443443));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017371209588068023))/(-0.005068673398750339) -
                (-123.72792253950867)*phi_mod*phi_mod - (5.401209495393996)*phi_mod - (0.710432348282661) -
                (-450.67699670510103)*eta*eta - (-592.895199625065)*eta - (-193.6520049831048));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.02899179270303194))/(-0.0055061763792320665) -
                (-100.7338982524431)*phi_mod*phi_mod - (-21.740841591799985)*phi_mod - (-0.37167739563800795) -
                (-124.43598634552905)*eta*eta - (-172.06001716238453)*eta - (-58.139193811015524));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008472093482446501))/(-0.0027802609740366323) -
                (-129.8315894072411)*phi_mod*phi_mod - (-14.316167146507656)*phi_mod - (1.4093084729838141) -
                (-95.51728892537183)*eta*eta - (52.49852921533392)*eta - (-7.144457788133381));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008551375699738276))/(0.0026995381397083478) -
                (-119.58389572803004)*phi_mod*phi_mod - (12.310747244464153)*phi_mod - (1.5192922626217626) -
                (-520.2426609781788)*eta*eta - (261.281285780071)*eta - (-32.675366587515285));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007278314108841182))/(-0.00271345912209604) -
                (-114.42473702116662)*phi_mod*phi_mod - (-5.166527140365691)*phi_mod - (1.5965473102946635) -
                (-1016.6796573074306)*eta*eta - (519.7802875489234)*eta - (-66.36256264679447));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006276732033002497))/(0.002633083382211476) -
                (-96.29246371044339)*phi_mod*phi_mod - (3.6697456691061556)*phi_mod - (1.4082613160243747) -
                (-1331.2445653593065)*eta*eta - (671.4095873657519)*eta - (-84.482669760249));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0054757150044638))/(-0.002632666835495171) -
                (-111.33453163221799)*phi_mod*phi_mod - (-6.108922646332128)*phi_mod - (1.5218184424677708) -
                (-1205.189268048015)*eta*eta - (627.8872448652509)*eta - (-81.64333546730707));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010336225252251764))/(0.0028003116100424157) -
                (-105.34221359090161)*phi_mod*phi_mod - (8.410669067620105)*phi_mod - (1.4339229671196057) -
                (-21.359957362970942)*eta*eta - (16.785885990273446)*eta - (-2.811285557128581));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007148466827023074))/(-0.0027015349325743196) -
                (-126.52191499816834)*phi_mod*phi_mod - (-7.110531183595616)*phi_mod - (1.7833475109497063) -
                (-937.5260465505862)*eta*eta - (486.7040891718863)*eta - (-63.07563169078286));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010843227476438115))/(0.0027973753994478493) -
                (-112.60299577060677)*phi_mod*phi_mod - (4.041992515294047)*phi_mod - (1.8340124031461296) -
                (-1240.424317989754)*eta*eta - (615.949004306716)*eta - (-76.50613698112109));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.013232529264798286))/(-0.0032147089858584007) -
                (-119.7301920023665)*phi_mod*phi_mod - (-4.291300292479531)*phi_mod - (1.8547864272522383) -
                (-1514.2203181133164)*eta*eta - (827.8919018949235)*eta - (-112.8214263741284));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00917113160255182))/(0.0031579926127784353) -
                (-96.72072167144)*phi_mod*phi_mod - (1.9244487248491002)*phi_mod - (1.499452754187378) -
                (708.1522508299892)*eta*eta - (-343.05283574673155)*eta - (41.5382954250286));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008738778035852317))/(-0.0027710159301155917) -
                (-109.42061354783239)*phi_mod*phi_mod - (-6.985464720739986)*phi_mod - (1.371524390468034) -
                (-950.8259577375542)*eta*eta - (481.74398513942646)*eta - (-60.78595876501838));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006679843011751503))/(0.0026335732175725244) -
                (-119.76810585551021)*phi_mod*phi_mod - (6.895983410071611)*phi_mod - (1.6197308658889307) -
                (-1001.6630263169806)*eta*eta - (533.6074465258623)*eta - (-70.69844827054625));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014022335884433083))/(0.0002300409416581181) -
                (-186.2694646840654)*phi_mod*phi_mod - (1.0534458121408454)*phi_mod - (3.6129606909345124) -
                (3147.9071978429597)*eta*eta - (-5845.824267408637)*eta - (2714.7158892117845));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.011325932595727022))/(0.00044648415176359787) -
                (-356.9214780472679)*phi_mod*phi_mod - (115.00591076797531)*phi_mod - (-6.674514178701827) -
                (2544.400131689866)*eta*eta - (-4704.445054906046)*eta - (2174.3648228502266));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003914908035904911))/(-0.0020663990174811775) -
                (-96.69752334642577)*phi_mod*phi_mod - (-5.680578767007979)*phi_mod - (1.5751563268775122) -
                (-546.2886373864002)*eta*eta - (892.3674995181777)*eta - (-364.3148016346184));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006579758545187008))/(0.002078320489047516) -
                (-77.76627053128408)*phi_mod*phi_mod - (2.4648525091627294)*phi_mod - (1.0846360983944723) -
                (71.710543317503)*eta*eta - (-112.31693570026385)*eta - (44.014598379308474));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0026559074873577847))/(-0.001982899212944006) -
                (-103.74120431876054)*phi_mod*phi_mod - (-4.388676631584999)*phi_mod - (1.9859669957003756) -
                (-1093.3291578262667)*eta*eta - (1798.9986021112481)*eta - (-739.9101430710118));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006013579133735293))/(0.0020420556766268887) -
                (-91.09182517621254)*phi_mod*phi_mod - (5.002272011140313)*phi_mod - (1.156398758004738) -
                (-174.78772653958524)*eta*eta - (293.3457773607685)*eta - (-122.81230128058992));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003428917983675711))/(-0.0020332975726522853) -
                (-101.7955202615779)*phi_mod*phi_mod - (-5.685513366039603)*phi_mod - (1.8659308556135925) -
                (-1020.4316553041665)*eta*eta - (1683.3962517167104)*eta - (-694.146621247655));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005891832095357226))/(0.002045572882394986) -
                (-88.01156230524305)*phi_mod*phi_mod - (5.490812501044363)*phi_mod - (1.1173525387710603) -
                (-148.90705808621323)*eta*eta - (253.6187510772943)*eta - (-107.61789024965054));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003028935345922706))/(-0.002003212928244757) -
                (-107.22374077965407)*phi_mod*phi_mod - (-6.223890520607303)*phi_mod - (1.9538631006440748) -
                (-349.2845273773515)*eta*eta - (575.60843254127)*eta - (-237.0770672812768));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0065339306880453345))/(0.002072841090791005) -
                (-95.67294979455046)*phi_mod*phi_mod - (5.4112194838557235)*phi_mod - (1.205099595954574) -
                (-170.40989449142273)*eta*eta - (283.2221502268163)*eta - (-117.50691586598765));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003056750334152091))/(-0.0020009963374474564) -
                (-110.95834475366787)*phi_mod*phi_mod - (-4.304087506576438)*phi_mod - (2.150862978736454) -
                (-731.2578577163648)*eta*eta - (1207.8607399140978)*eta - (-498.6545185892147));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006480443780755505))/(0.0020484071234890913) -
                (-95.27602482134431)*phi_mod*phi_mod - (5.241991290910062)*phi_mod - (1.257081497400586) -
                (-150.48242141297823)*eta*eta - (250.8432381371729)*eta - (-104.35320098129745));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008450255272440673))/(-0.0026421423909450434) -
                (-13.707989254116857)*phi_mod*phi_mod - (15.933095455123059)*phi_mod - (2.1153615260210845) -
                (283.8993695833497)*eta*eta - (448.24640370734045)*eta - (176.89379074694784));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006054833661039304))/(0.002685082622942987) -
                (-84.21368405962392)*phi_mod*phi_mod - (4.222583657897938)*phi_mod - (1.0363257294899912) -
                (-87.85147924369413)*eta*eta - (-130.8581646154952)*eta - (-48.50049470723747));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008521918799705474))/(-0.00266163573991412) -
                (-78.19984553580831)*phi_mod*phi_mod - (-5.7798867628700075)*phi_mod - (1.11327620305979) -
                (114.70057214517954)*eta*eta - (181.83548470790183)*eta - (72.02713875096245));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006371201306421666))/(0.00270299239930876) -
                (-4.868453644145113)*phi_mod*phi_mod - (-12.830202976951314)*phi_mod - (1.8294453569008295) -
                (4.905353945939329)*eta*eta - (5.671669836387948)*eta - (1.5152373257229863));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005267108065375552))/(0.0008312354858670703) -
                (30.789062899420358)*phi_mod*phi_mod - (-0.5954766391324705)*phi_mod - (-0.4439925015184397) -
                (550.4280958225751)*eta*eta - (2125.6050699219527)*eta - (2051.7826473535647));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010653194370706396))/(0.0008386746218788806) -
                (295.67545217510616)*phi_mod*phi_mod - (2.2063608580854246)*phi_mod - (-4.343271639329846) -
                (257.1112775117102)*eta*eta - (976.2682145289386)*eta - (925.845627494503));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006120934974871332))/(0.0008378352492287874) -
                (-32.541701238291054)*phi_mod*phi_mod - (-6.250717179894917)*phi_mod - (0.3264855282347221) -
                (1350.0550228179736)*eta*eta - (5235.47496391048)*eta - (5075.22488735534));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007697103042957975))/(0.0008329598792488511) -
                (-44.12708393438105)*phi_mod*phi_mod - (-3.1876378003919177)*phi_mod - (0.7605693851384014) -
                (-379.5481800183401)*eta*eta - (-1517.1507127543698)*eta - (-1515.4002387350338));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008506285075282042))/(0.0008372612803623362) -
                (-62.82457716942603)*phi_mod*phi_mod - (-3.4226456424495213)*phi_mod - (0.8605947270127853) -
                (-823.8725164386934)*eta*eta - (-3238.2280487877756)*eta - (-3181.7491076856386));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010720993547331875))/(0.0008491113329730367) -
                (-84.592116700918)*phi_mod*phi_mod - (-5.653448148271898)*phi_mod - (1.177256303975166) -
                (-805.1805948206395)*eta*eta - (-3173.3104819699306)*eta - (-3126.367322799597));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0002564142966678856))/(0.000790752178680217) -
                (-226.0031529642988)*phi_mod*phi_mod - (-9.193397646162897)*phi_mod - (3.390258440771581) -
                (741.6037782903383)*eta*eta - (2887.670202148074)*eta - (2810.873237130245));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0003438267459986611))/(0.0007918509009767503) -
                (-45.8372737706362)*phi_mod*phi_mod - (-3.3775641230586944)*phi_mod - (0.5805659976108036) -
                (1313.94487007866)*eta*eta - (5115.687128850397)*eta - (4979.180863817063));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01089397556476206))/(-0.0005504193391875155) -
                (-358.6043272665511)*phi_mod*phi_mod - (-106.68439758486241)*phi_mod - (-6.49385722239011) -
                (1706.1686812474986)*eta*eta - (3108.322313836242)*eta - (1414.973761352881));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006785530269858701))/(-0.0008539287801750359) -
                (-195.8607647743731)*phi_mod*phi_mod - (25.06900902280194)*phi_mod - (-0.03778202317149022) -
                (-2711.4937301173663)*eta*eta - (-5052.649012557342)*eta - (-2352.7100710753075));}

    else if (seg_combination_id == 50302 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011053695346180013))/(-0.0013842812385524562) -
                (4097.569082471853)*phi_mod*phi_mod - (-1408.5207947228118)*phi_mod - (120.70643495178729) -
                (1364.3357425662357)*eta*eta - (-1273.0842554605454)*eta - (296.46440435769244));}

    else if (seg_combination_id == 50302 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001814272927006353))/(-0.0016753904095498603) -
                (1062.7495141433678)*phi_mod*phi_mod - (591.7154467453954)*phi_mod - (80.66384846555896) -
                (-690.9317325271137)*eta*eta - (632.9985636257132)*eta - (-144.7547156163481));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01648451879856862))/(-0.004716893318109444) -
                (-206.25231355059307)*phi_mod*phi_mod - (6.438890934519219)*phi_mod - (0.8098864932442035) -
                (331.58998036613394)*eta*eta - (638.5062445253535)*eta - (306.5155154085634));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008077357187186964))/(0.004569238874780645) -
                (16.888163178168984)*phi_mod*phi_mod - (-28.691242699998085)*phi_mod - (3.325813364860438) -
                (899.1627984790251)*eta*eta - (1690.7419086150935)*eta - (794.1664219145235));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.016011017497637996))/(-0.0046985663512417964) -
                (-33.323942372512235)*phi_mod*phi_mod - (14.4458780941215)*phi_mod - (2.1758940418506136) -
                (600.1399486677772)*eta*eta - (1134.0918521815086)*eta - (535.0589213371587));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008352925395374326))/(0.004600308006748605) -
                (-257.7569026396167)*phi_mod*phi_mod - (-11.010220888285902)*phi_mod - (0.8972737879463086) -
                (554.9858331223238)*eta*eta - (1054.822321397146)*eta - (500.5273624029916));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0019754582822857185))/(-0.0005110819136239995) -
                (-28.219771767009277)*phi_mod*phi_mod - (-0.648435653078761)*phi_mod - (0.5222498301031869) -
                (701.9195684993837)*eta*eta - (-2880.5012633556034)*eta - (2954.3302305842394));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.007108083111975816))/(-4.7764345814331935e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0008677590274177849))/(-0.0005930417292955433) -
                (-18.826331237937534)*phi_mod*phi_mod - (0.6718300782432142)*phi_mod - (0.5315592302052521) -
                (-99.1806148503134)*eta*eta - (374.81601811021847)*eta - (-352.3114295843574));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004457530742888821))/(6.520847646284914e-05) -
                (-2529.882352941176)*phi_mod*phi_mod - (44.98823529411726)*phi_mod - (4.953600000000022) -
                (120807.16900491313)*eta*eta - (-471771.99498129135)*eta - (460584.07499770174));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0019767876761016567))/(-0.0005072007857457887) -
                (-30.709169746242296)*phi_mod*phi_mod - (0.7698390618596316)*phi_mod - (0.6515783459887602) -
                (1156.4600044455915)*eta*eta - (-4724.543804574667)*eta - (4824.446538442731));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014307939255454745))/(-0.00039261667199495175) -
                (235.71525432939117)*phi_mod*phi_mod - (-3.7601542810782695)*phi_mod - (0.8996665450471059) -
                (-1397.2533652076193)*eta*eta - (5439.658823989395)*eta - (-5294.302043894012));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012126995110419364))/(-0.0007599503391098445) -
                (-49.59537922916848)*phi_mod*phi_mod - (-1.7413582425006555)*phi_mod - (0.30045454547021444) -
                (-25.061027749282907)*eta*eta - (101.10095069368955)*eta - (-101.8199030154335));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002641709395045863))/(-0.0005117826307629447) -
                (-26.466524704792047)*phi_mod*phi_mod - (2.543200837971308)*phi_mod - (-0.134579370207735) -
                (-286.36240079082796)*eta*eta - (1101.1981166960638)*eta - (-1056.3424708800599));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.04293560592216175))/(-0.0012888623268752495) -
                (-273.837438601056)*phi_mod*phi_mod - (-6.141175596567762)*phi_mod - (3.4642710476429457) -
                (36.52117248690776)*eta*eta - (-124.58724172122639)*eta - (104.2245440951919));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005254957310729759))/(-0.0006882445123856944) -
                (16.157240376128588)*phi_mod*phi_mod - (2.2498578061404526)*phi_mod - (0.1807820996233625) -
                (-59.342404518446706)*eta*eta - (228.21482314756025)*eta - (-218.66158806869566));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009807103795409776))/(-0.00015180493838471754) -
                (-925.4719180392127)*phi_mod*phi_mod - (-59.826528164045335)*phi_mod - (1.569502583471992) -
                (-213.81412507921775)*eta*eta - (878.8393792126442)*eta - (-902.3025277350931));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0016865007847770338))/(-0.0005418200163893007) -
                (-40.484818604914885)*phi_mod*phi_mod - (-2.1481479445533407)*phi_mod - (0.5638474124512369) -
                (712.5146267104922)*eta*eta - (-2917.6165385285512)*eta - (2985.8015549311604));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017245683957368686))/(-0.0004740022666189671) -
                (205.86983419912303)*phi_mod*phi_mod - (-8.617708101016758)*phi_mod - (1.6203125735143136) -
                (-3746.665598286478)*eta*eta - (14641.329172907821)*eta - (-14302.653199780541));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007133301185597988))/(-0.0012338489170381102) -
                (5.778957144556714)*phi_mod*phi_mod - (-1.6089072915014253)*phi_mod - (-0.7757307334954854) -
                (89.89992314682601)*eta*eta - (-317.5876111016431)*eta - (275.2141672355022));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.030275044299386156))/(-0.000953409081973972) -
                (-86.09977297759099)*phi_mod*phi_mod - (4.0771399202307315)*phi_mod - (3.0965188144013602) -
                (-888.8781607868126)*eta*eta - (3481.2618009890557)*eta - (-3407.7513352390574));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.015262961008321013))/(-0.001216578326481691) -
                (-1026.7872610644479)*phi_mod*phi_mod - (69.66638536175384)*phi_mod - (0.3561253349722225) -
                (-1523.6931400419237)*eta*eta - (-2888.903204905889)*eta - (-1367.7313309801762));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007754195207175115))/(-0.001875440769021008) -
                (-510.87490878865606)*phi_mod*phi_mod - (-138.21460229321445)*phi_mod - (-8.532119198950024) -
                (367.41037021555036)*eta*eta - (654.6227348330451)*eta - (291.7924700998334));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006073459165307726))/(-0.0009769770316349123) -
                (-242.78453479258064)*phi_mod*phi_mod - (-10.991984498257342)*phi_mod - (1.6865634454386464) -
                (-75.8790803013843)*eta*eta - (240.5189791167488)*eta - (-187.81613414687124));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007121427698746803))/(0.0009892592878954667) -
                (-294.8112574906098)*phi_mod*phi_mod - (10.971026412067804)*phi_mod - (1.7813320597930167) -
                (486.8908087559109)*eta*eta - (-1301.323097238774)*eta - (868.6311852118696));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0009709617909359814))/(-0.0009215399859678342) -
                (-260.5960746844673)*phi_mod*phi_mod - (-10.216686123245134)*phi_mod - (1.5596414718445295) -
                (-373.66192732692696)*eta*eta - (1054.6549707301704)*eta - (-744.1845134343241));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0008801884268300633))/(0.0009265386687320526) -
                (-305.423901722385)*phi_mod*phi_mod - (11.748179098464208)*phi_mod - (1.6235055538112955) -
                (488.02987523269746)*eta*eta - (-1301.0037373212444)*eta - (866.0683395421855));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (7.440671684745224e-05))/(-0.0009474128402581199) -
                (-232.14975311373084)*phi_mod*phi_mod - (-9.455445004690677)*phi_mod - (1.2447838992650126) -
                (82.28398369845326)*eta*eta - (-195.79727467751465)*eta - (113.06349233231748));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0001911149533338319))/(0.0009762708824754148) -
                (-283.803424439718)*phi_mod*phi_mod - (11.279336752945259)*phi_mod - (1.255903561506809) -
                (336.1076929016784)*eta*eta - (-893.2320966284037)*eta - (592.5482928391762));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002025613288284755))/(-0.0008805160454481575) -
                (-279.7768024745109)*phi_mod*phi_mod - (-12.651810717424741)*phi_mod - (1.3595400616690494) -
                (37.14168705072729)*eta*eta - (-85.71579344819453)*eta - (47.03674299913717));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0008268106477602348))/(0.000932947672074442) -
                (-313.59795311298706)*phi_mod*phi_mod - (10.229505467745698)*phi_mod - (1.617809745840906) -
                (347.6763741663311)*eta*eta - (-925.6768478555169)*eta - (615.2493727244498));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016795299444709699))/(-0.0009745630976660566) -
                (-241.45077186037176)*phi_mod*phi_mod - (-7.438152465969358)*phi_mod - (2.077618051819214) -
                (-21.052031750158577)*eta*eta - (93.82479059492589)*eta - (-89.65169471648609));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001914460746564354))/(0.0010054139230516515) -
                (-285.8247240890799)*phi_mod*phi_mod - (11.328982221066639)*phi_mod - (2.128465283452366) -
                (389.8634356076965)*eta*eta - (-1038.879727629548)*eta - (691.3059592383447));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0010791594514468839))/(-0.0009232527795240641) -
                (-269.5034504923804)*phi_mod*phi_mod - (-8.150533606012043)*phi_mod - (1.306367919386404) -
                (-279.54328478743923)*eta*eta - (792.2127665895247)*eta - (-561.4038010239768));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00018268860625006027))/(0.0009325050683489561) -
                (-292.2046059201968)*phi_mod*phi_mod - (12.454334519169066)*phi_mod - (1.418121295034142) -
                (388.4192337093037)*eta*eta - (-1027.5032524029698)*eta - (678.5471968275309));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000475595443423009))/(-0.0009655776143899515) -
                (-240.98021938502612)*phi_mod*phi_mod - (-9.782983230011341)*phi_mod - (1.4836889771124524) -
                (-130.38049855428682)*eta*eta - (387.5458469964316)*eta - (-286.9158232117168));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006355927950562145))/(0.0009608389541409177) -
                (-284.13187226430995)*phi_mod*phi_mod - (10.358099264123211)*phi_mod - (1.9477776922470855) -
                (276.7610069092914)*eta*eta - (-732.930842052244)*eta - (484.3660191328325));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00031956174739528547))/(-0.0009503950347317644) -
                (-251.30382145526062)*phi_mod*phi_mod - (-10.937824844607237)*phi_mod - (1.4719952679064443) -
                (-150.92848405296706)*eta*eta - (435.8834822909895)*eta - (-314.52803297795754));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-4.515196126472266e-05))/(0.0009399833377412207) -
                (-286.7085785620871)*phi_mod*phi_mod - (12.165025112867138)*phi_mod - (1.4710618587089317) -
                (109.31805891492506)*eta*eta - (-271.6002672910555)*eta - (166.70182137730262));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014606538236234156))/(-0.0002719132215228183) -
                (43.734376825850475)*phi_mod*phi_mod - (-9.619175414604134)*phi_mod - (-2.2313671960208707) -
                (2414.2005250238203)*eta*eta - (-4590.174030769225)*eta - (2179.5760783874357));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003280289960851379))/(-0.0011887610000902236) -
                (454.7139032309828)*phi_mod*phi_mod - (28.35474229013502)*phi_mod - (-2.344790469789449) -
                (-3232.2471903285086)*eta*eta - (1623.5278859231048)*eta - (-203.5185197984594));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004325300286745039))/(0.0011910338175223386) -
                (256.39364123336793)*phi_mod*phi_mod - (-15.81432717560561)*phi_mod - (-1.2534608540461867) -
                (-173.58595470154086)*eta*eta - (85.07642020234843)*eta - (-10.318344741212488));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037687205674681733))/(-0.0011936236812660158) -
                (485.75263785188434)*phi_mod*phi_mod - (25.257869079659233)*phi_mod - (-1.8798998676713934) -
                (-1738.8665821943582)*eta*eta - (859.1475413485009)*eta - (-105.88798835399217));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0045476256996099685))/(0.001184818273620251) -
                (292.87468165299606)*phi_mod*phi_mod - (-19.999478249162927)*phi_mod - (-1.2092306876690762) -
                (-431.6669580668683)*eta*eta - (195.64270617511485)*eta - (-21.911394128911525));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004251856766422657))/(-0.0012225087064884651) -
                (475.87724503708057)*phi_mod*phi_mod - (28.235721124303353)*phi_mod - (-2.141106197617057) -
                (-1467.37497157795)*eta*eta - (707.6766443956112)*eta - (-85.05954639891367));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004166900886488538))/(0.001188438433500394) -
                (327.82066474150173)*phi_mod*phi_mod - (-20.289823616536317)*phi_mod - (-1.6448339952174427) -
                (-575.179440522618)*eta*eta - (278.35030400770984)*eta - (-33.49667410657055));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00403617368180015))/(-0.0012002700362983149) -
                (525.7127509489655)*phi_mod*phi_mod - (25.87246266589879)*phi_mod - (-2.071782581902432) -
                (502.6919590012835)*eta*eta - (-260.69920151492255)*eta - (33.76175536335659));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0047339542534594195))/(0.001200907518568904) -
                (322.9182153352325)*phi_mod*phi_mod - (-18.845861756198925)*phi_mod - (-1.4279398606034974) -
                (-270.93051943610595)*eta*eta - (126.53649508029356)*eta - (-14.583865899938468));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00313046198017116))/(-0.0011666548037627476) -
                (504.2215299946388)*phi_mod*phi_mod - (24.94640032139717)*phi_mod - (-2.2825747449197245) -
                (1227.7026235744138)*eta*eta - (-617.720081215392)*eta - (77.74967608016368));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004856427429754913))/(0.0012424040960123924) -
                (315.11207679103256)*phi_mod*phi_mod - (-19.683322581548616)*phi_mod - (-1.8786611975463794) -
                (-799.4595582581801)*eta*eta - (388.14446593417773)*eta - (-46.88154881766711));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003440080371804569))/(-0.0011993869833623234) -
                (443.78458195861487)*phi_mod*phi_mod - (21.249541222638445)*phi_mod - (-2.448165510531689) -
                (-549.3998305863882)*eta*eta - (260.4423111841164)*eta - (-30.562292715300163));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004852966237380656))/(0.0012352892708373951) -
                (308.0549179617766)*phi_mod*phi_mod - (-21.561539829546476)*phi_mod - (-1.6717608869353366) -
                (-190.8607769330354)*eta*eta - (87.78989934230795)*eta - (-9.92571070208466));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.029147640366753057))/(0.0012777856544974816) -
                (-652.8602547041733)*phi_mod*phi_mod - (164.067250878618)*phi_mod - (-9.182368164081803) -
                (-387.2230905031277)*eta*eta - (403.65463865624406)*eta - (-103.95385156091587));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.024580585273508055))/(0.005772372228752549) -
                (-127.4920558351431)*phi_mod*phi_mod - (4.571046277856466)*phi_mod - (0.7996952671616603) -
                (-172.17668613352495)*eta*eta - (192.6463587978581)*eta - (-51.478394693534604));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001406846493206581))/(-0.0008647545271489433) -
                (-54.43946910965366)*phi_mod*phi_mod - (2.1125151862780656)*phi_mod - (0.703149427714789) -
                (-341.05010280863524)*eta*eta - (-1023.5518499387947)*eta - (-767.5868261246989));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005694369556275579))/(0.0008859817179511674) -
                (-138.5098048897069)*phi_mod*phi_mod - (-3.784526805259464)*phi_mod - (1.8174630981427056) -
                (-185.3013153664142)*eta*eta - (-541.9438261217324)*eta - (-396.13677006506396));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001397990253988243))/(-0.0008619460643595474) -
                (-50.93217760087255)*phi_mod*phi_mod - (2.200601225175613)*phi_mod - (0.6791374835392184) -
                (-321.14726353703037)*eta*eta - (-963.1773430995372)*eta - (-721.789520585813));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006424539682571718))/(0.0008928215511461041) -
                (-143.648999709019)*phi_mod*phi_mod - (-4.241376713871521)*phi_mod - (1.8655471682671292) -
                (-161.2585436527982)*eta*eta - (-472.23476355214257)*eta - (-345.6539701409288));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013343242561639488))/(-0.0008605151777272604) -
                (-49.72375352656637)*phi_mod*phi_mod - (1.596450850469384)*phi_mod - (0.6121158437206423) -
                (-318.92169738990225)*eta*eta - (-958.5555658536458)*eta - (-719.9335405926362));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000802508918666613))/(0.000898576567985587) -
                (-135.76935262520718)*phi_mod*phi_mod - (-3.605597373791983)*phi_mod - (1.7571120778323845) -
                (-80.4225824383929)*eta*eta - (-233.49574220387106)*eta - (-169.46106471436343));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015389648788944397))/(-0.0008701409784315557) -
                (-60.996594975811675)*phi_mod*phi_mod - (1.8203789944735438)*phi_mod - (0.8154552626238664) -
                (-363.859750824785)*eta*eta - (-1092.8458972669744)*eta - (-820.1687517253589));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000679446237859646))/(0.0008885019268879258) -
                (-145.02357003858205)*phi_mod*phi_mod - (-5.216137154024631)*phi_mod - (1.881971280126421) -
                (-190.52292214881615)*eta*eta - (-556.9976818947168)*eta - (-406.9730257170788));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014200176039663454))/(-0.0008567087900297227) -
                (-49.95660288045508)*phi_mod*phi_mod - (1.9389072036030142)*phi_mod - (0.6914738814273045) -
                (-403.5302568239724)*eta*eta - (-1212.6555427818773)*eta - (-910.5912232277043));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009150308094913059))/(0.0008876479741073629) -
                (-141.53681898653812)*phi_mod*phi_mod - (-4.055150145655187)*phi_mod - (1.9773139419883956) -
                (-158.54579808815564)*eta*eta - (-463.4829468298873)*eta - (-338.61393581491285));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015907668521227987))/(-0.0008633841216410858) -
                (-59.54214008033561)*phi_mod*phi_mod - (1.2454812391407626)*phi_mod - (0.7817103195982019) -
                (-315.1319717938195)*eta*eta - (-938.478035796048)*eta - (-698.1661567346308));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007468723588348104))/(0.0008813667961270865) -
                (-133.2223330232414)*phi_mod*phi_mod - (-4.570663584209041)*phi_mod - (1.5755268563608542) -
                (-189.3126527887814)*eta*eta - (-550.559681778727)*eta - (-400.17075238292165));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014684229812889824))/(-0.000865920972906919) -
                (-51.90340878590148)*phi_mod*phi_mod - (1.9938256151402909)*phi_mod - (0.648461331541469) -
                (-303.7993290004121)*eta*eta - (-909.6967026509222)*eta - (-680.6592175896991));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006264458018339553))/(0.0008760932254400084) -
                (-133.5259522902052)*phi_mod*phi_mod - (-4.202447502483971)*phi_mod - (1.6946171507454717) -
                (-176.09888447193907)*eta*eta - (-514.305333512174)*eta - (-375.4251579651223));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016305421343149897))/(-0.0008716218449004579) -
                (-61.182204056284405)*phi_mod*phi_mod - (3.006102187757797)*phi_mod - (0.7751519778179597) -
                (-305.34617649031094)*eta*eta - (-910.700745700095)*eta - (-678.5926631229214));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006439059048342161))/(0.0008815184599748886) -
                (-137.46351688773706)*phi_mod*phi_mod - (-3.085065240503781)*phi_mod - (1.7533279627357257) -
                (-157.35136283454335)*eta*eta - (-458.3095196752299)*eta - (-333.6567965737369));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004291955743264557))/(-0.00019795505201192643) -
                (117.57079468352849)*phi_mod*phi_mod - (6.151208406161587)*phi_mod - (-11.666126202767071) -
                (546.8681040530204)*eta*eta - (-1599.7392637706257)*eta - (1169.6640242934861));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001432260681985893))/(-0.0006172710511767168) -
                (-31.799980199540855)*phi_mod*phi_mod - (-3.0361336808923207)*phi_mod - (2.5850855246307987) -
                (1019.0428654552527)*eta*eta - (-2964.0958928801447)*eta - (2154.464914171538));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000191545385913928))/(-0.0005476789832096982) -
                (-97.37990924967612)*phi_mod*phi_mod - (-12.688587821260116)*phi_mod - (9.642352714370386) -
                (-10533.514907514069)*eta*eta - (30987.75880515624)*eta - (-22789.334056035383));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007054857121223645))/(-0.000891400614650255) -
                (7.307826274780961)*phi_mod*phi_mod - (2.0593734987802894)*phi_mod - (-1.0984243006352266) -
                (9.730134119081004)*eta*eta - (-44.35228798953324)*eta - (50.10972132026427));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0016537519796455797))/(-0.00039270436258101763) -
                (110.35878564457434)*phi_mod*phi_mod - (-3.2829602828838347)*phi_mod - (-6.168261287366387) -
                (-200.20046269334486)*eta*eta - (894.6565696375163)*eta - (-997.4831973643697));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.03048624227745868))/(-0.002363811201707052) -
                (-114.37280058652219)*phi_mod*phi_mod - (8.486568269669357)*phi_mod - (2.438019247900876) -
                (15.754632754331508)*eta*eta - (-75.52188787667254)*eta - (89.7927791007703));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00012080569597226171))/(-0.00047906439323521085) -
                (-166.03038035108298)*phi_mod*phi_mod - (9.920225540627316)*phi_mod - (0.1373612183543941) -
                (16.50349511159578)*eta*eta - (-75.06814675792839)*eta - (85.09779539253113));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0067573264413508))/(-5.9860799669053014e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007053788522110007))/(-0.0008316173795256476) -
                (112.41101032332716)*phi_mod*phi_mod - (7.026541711616691)*phi_mod - (-4.390036382761999) -
                (16.100802840477204)*eta*eta - (-81.60719864953785)*eta - (101.48962672057493));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004245065407792177))/(0.0010924645702764784) -
                (-1384.0436541026736)*phi_mod*phi_mod - (-9.307402025706082)*phi_mod - (21.851671825281464) -
                (-240.0597089456686)*eta*eta - (1081.4692855098358)*eta - (-1217.2213198665274));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034063848950050195))/(-0.0005556493991225088) -
                (57.25856808271487)*phi_mod*phi_mod - (2.625514528587131)*phi_mod - (-3.315196094334295) -
                (95.37774917327947)*eta*eta - (-423.02724710971097)*eta - (466.8692422032539));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.010294648132032048))/(0.0002725981969195842) -
                (8.45344897247893)*phi_mod*phi_mod - (2.2327004893719495)*phi_mod - (2.4697795071110358) -
                (-46.151396281345235)*eta*eta - (-179.3555992000163)*eta - (-173.1407172688963));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014471492521278228))/(-0.00048336536510248034) -
                (-16.398339575217996)*phi_mod*phi_mod - (-1.5015952127469316)*phi_mod - (4.041104458287664) -
                (55.37071926057379)*eta*eta - (237.81129522623866)*eta - (253.531679509778));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0001837120955668496))/(-0.00018023416556145792) -
                (-112.25275524278118)*phi_mod*phi_mod - (-7.261774063902819)*phi_mod - (1.1463294582105832) -
                (-6.698943067293267)*eta*eta - (-28.7199085029235)*eta - (-28.989445779688968));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009512858109668343))/(3.707566446577909e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007602538111714553))/(6.494200390286534e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01612624545963015))/(-0.0005442384910193713) -
                (68.13394684246624)*phi_mod*phi_mod - (-0.15480354030813598)*phi_mod - (2.1104241179077725) -
                (23.15077917821653)*eta*eta - (91.84844301900056)*eta - (91.1397569041541));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005685408014313563))/(-0.0002193696585008137) -
                (-20.776961530966833)*phi_mod*phi_mod - (-8.262381312424449)*phi_mod - (0.9940771904275055) -
                (-55.601145172882994)*eta*eta - (-207.1293517019102)*eta - (-192.60721814776733));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009164239014014))/(-0.0003306722239833753) -
                (29.329279680842433)*phi_mod*phi_mod - (4.397050910267656)*phi_mod - (2.6082644540750493) -
                (80.62222613777577)*eta*eta - (340.33112888233023)*eta - (358.4218679653317));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.026999978745675918))/(0.0011218282297209572) -
                (-49.03051165096413)*phi_mod*phi_mod - (-2.4264279921013596)*phi_mod - (4.104129697479424) -
                (62.24894225518909)*eta*eta - (246.86131758189342)*eta - (242.93226629971662));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017857266219055652))/(-0.0005397563001712979) -
                (111.40103077403319)*phi_mod*phi_mod - (-21.868594457550927)*phi_mod - (0.7662151370724736) -
                (-6.122276041723716)*eta*eta - (-24.436427928768666)*eta - (-25.091812137217723));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.04892614690990301))/(0.0021876311629961615) -
                (-23.496164407370546)*phi_mod*phi_mod - (8.365437171256486)*phi_mod - (4.776226287999359) -
                (74.72797854775705)*eta*eta - (285.0807659696031)*eta - (270.20530480942716));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01320748330127095))/(-0.00033504105157341904) -
                (-444.24791372021866)*phi_mod*phi_mod - (20.15308421280062)*phi_mod - (7.621351880659656) -
                (-194.46950355613387)*eta*eta - (-826.5698768670068)*eta - (-873.8686604203459));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.022799602550125295))/(0.0008388961328323067) -
                (-7.383004972603285)*phi_mod*phi_mod - (3.7649021039265995)*phi_mod - (5.508952946987672) -
                (-34.87304225648341)*eta*eta - (-136.29062312636776)*eta - (-131.85383183851968));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.029472257894548437))/(-0.0010914289607512999) -
                (-124.44236551843397)*phi_mod*phi_mod - (-11.598279897177306)*phi_mod - (8.392535044841892) -
                (-31.414536136980583)*eta*eta - (-130.85659793480517)*eta - (-134.44039371156035));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.04856987005703966))/(0.0019375672908674671) -
                (-17.886049156933037)*phi_mod*phi_mod - (-17.02314658072131)*phi_mod - (1.5767107788750787) -
                (348.20424335220326)*eta*eta - (1360.0303958586333)*eta - (1324.2685474743041));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.007264678632151092))/(5.819428008512715e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009390256892074456))/(-0.004322546434666903) -
                (-234.8887475733316)*phi_mod*phi_mod - (11.56105646419441)*phi_mod - (0.9714289541377383) -
                (-831.8957578606352)*eta*eta - (1608.3620225775105)*eta - (-777.1938972747618));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011632394097458549))/(0.004024730985689613) -
                (-224.29743978180798)*phi_mod*phi_mod - (25.037680605384043)*phi_mod - (1.1293182501313301) -
                (-1344.8438936720697)*eta*eta - (2588.122123455319)*eta - (-1244.7265350768596));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009060568498821456))/(-0.004334689388726179) -
                (8.332506166283704)*phi_mod*phi_mod - (24.350580655793213)*phi_mod - (3.0148923627139697) -
                (-782.7700173208266)*eta*eta - (1534.8665324316128)*eta - (-752.0908764579642));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013679106383789198))/(0.00411552479158065) -
                (-440.6074246527696)*phi_mod*phi_mod - (-36.065261065125505)*phi_mod - (0.9487471267602028) -
                (-1742.009018778061)*eta*eta - (3342.9560670776996)*eta - (-1603.4412301112425));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00038351619309066025))/(-0.0006997305640327344) -
                (143.87345360485006)*phi_mod*phi_mod - (3.97153025982491)*phi_mod - (-2.1098573080720784) -
                (16.883850156832473)*eta*eta - (-46.73697306668431)*eta - (28.374582233735012));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011308370648146263))/(0.0007146829592179903) -
                (192.70855491037221)*phi_mod*phi_mod - (-2.9527963050869643)*phi_mod - (-2.727796767852647) -
                (112.61469743641865)*eta*eta - (-390.42798037486267)*eta - (337.7450349075503));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00048654101703569306))/(-0.0007077926381015584) -
                (140.0962852362912)*phi_mod*phi_mod - (3.0533408326007785)*phi_mod - (-2.0384165413294233) -
                (24.59461850591822)*eta*eta - (-75.38643424414364)*eta - (54.923790942819544));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001080057052221751))/(0.0007122842029781301) -
                (193.96987933599075)*phi_mod*phi_mod - (-4.37149468483053)*phi_mod - (-2.7170637038913887) -
                (105.40109306217208)*eta*eta - (-364.91121862430754)*eta - (315.15729848532726));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005312692869355491))/(-0.0007097552758968875) -
                (142.492372110003)*phi_mod*phi_mod - (2.5534925956585464)*phi_mod - (-2.134583721010061) -
                (20.093691691765084)*eta*eta - (-58.59434347308086)*eta - (39.28303195090046));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010224287271448512))/(0.0007091230492801058) -
                (197.72867531188692)*phi_mod*phi_mod - (-5.25165492578553)*phi_mod - (-2.8901103565622095) -
                (113.10189082049654)*eta*eta - (-392.54617606880146)*eta - (339.9435326663766));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005634020755490187))/(-0.0007100430848535561) -
                (140.4160622058533)*phi_mod*phi_mod - (3.100274272233405)*phi_mod - (-2.0403102182034782) -
                (26.317379131582666)*eta*eta - (-80.9742502296233)*eta - (59.3533079449727));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011259683220829087))/(0.0007092198163141764) -
                (189.82033361124974)*phi_mod*phi_mod - (-3.78845362087565)*phi_mod - (-2.703850954107078) -
                (111.91828052715407)*eta*eta - (-388.0893742706936)*eta - (335.75565132863755));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00037741229905049355))/(-0.0007033354507323135) -
                (143.80569034326794)*phi_mod*phi_mod - (1.6101554466350148)*phi_mod - (-2.160050873402871) -
                (22.07961315617143)*eta*eta - (-64.82595753300009)*eta - (44.04762074530186));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007364228016551588))/(0.0006926594087332045) -
                (202.42439299626557)*phi_mod*phi_mod - (-5.635207907734574)*phi_mod - (-2.913493634715222) -
                (98.4552017961046)*eta*eta - (-337.10537722663355)*eta - (287.63055117372295));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005634892046631637))/(-0.0007026645106940032) -
                (142.41978783894447)*phi_mod*phi_mod - (1.6180942306637658)*phi_mod - (-1.8679082844647403) -
                (18.61281489759752)*eta*eta - (-51.411174288472466)*eta - (31.05753189019581));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011648734282712736))/(0.0007031853332807334) -
                (196.90897186604377)*phi_mod*phi_mod - (-5.191912563116755)*phi_mod - (-2.4784019132012727) -
                (119.33635161065239)*eta*eta - (-412.9259972501422)*eta - (356.4160988752038));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00045419419405753284))/(-0.0007037547162825228) -
                (135.41644083624652)*phi_mod*phi_mod - (3.6042317187606603)*phi_mod - (-1.9478890682379955) -
                (19.180893793703657)*eta*eta - (-54.532580084350286)*eta - (34.89748863514759));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010373893012723479))/(0.0007055035461575453) -
                (194.27883919372195)*phi_mod*phi_mod - (-4.576039822714604)*phi_mod - (-2.7123946113567263) -
                (104.70522062941949)*eta*eta - (-361.7110057466785)*eta - (311.6494550890964));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005188313040125334))/(-0.0007052297416373626) -
                (138.20031023614482)*phi_mod*phi_mod - (3.795210485302128)*phi_mod - (-1.9602617181712916) -
                (18.42584296750597)*eta*eta - (-52.56878954597796)*eta - (33.874646782059564));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010220776695586335))/(0.0007066343818893551) -
                (197.41435384723036)*phi_mod*phi_mod - (-4.887495779918469)*phi_mod - (-2.7247990510789437) -
                (111.82208091295685)*eta*eta - (-387.0506865004846)*eta - (334.2179217287026));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006988799477396718))/(0.0008633475626573978) -
                (115.94052750213667)*phi_mod*phi_mod - (-13.659985641084553)*phi_mod - (-0.027697555436185024) -
                (-1286.1179245715443)*eta*eta - (-1554.7751672292945)*eta - (-469.6620341402432));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0027106188539454956))/(0.0010258957060000917) -
                (253.85377605250653)*phi_mod*phi_mod - (-24.04474923790294)*phi_mod - (-0.5237478833849056) -
                (1169.5981643158368)*eta*eta - (1431.8118976225276)*eta - (438.06219129484634));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003692916939231756))/(0.0008695858691767658) -
                (285.78182057584525)*phi_mod*phi_mod - (-26.763437008371444)*phi_mod - (-0.33452861941686995) -
                (-210.42786378835484)*eta*eta - (-206.27948778439375)*eta - (-47.475797789954726));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017187614585550445))/(-0.005703526150257358) -
                (-129.75536090214223)*phi_mod*phi_mod - (1.825075749481824)*phi_mod - (1.5041043494618762) -
                (-25.91978537131061)*eta*eta - (9.754374882812664)*eta - (0.23066497356293558));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.020082146976204883))/(0.005697712974833392) -
                (1.6111424006805213)*phi_mod*phi_mod - (-25.95273421336454)*phi_mod - (3.9263030679786493) -
                (-42.49700056795425)*eta*eta - (21.590396790785697)*eta - (-1.915658008536555));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.016978808767071328))/(-0.0056916771132482225) -
                (13.828817663082962)*phi_mod*phi_mod - (27.96374000495351)*phi_mod - (3.896264798158548) -
                (-38.19817796529099)*eta*eta - (21.275849015255208)*eta - (-2.187485351304137));}

    else if (seg_combination_id == 50308 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.020068983047109776))/(0.005677800021879327) -
                (-126.09374198994186)*phi_mod*phi_mod - (1.6364381210808974)*phi_mod - (1.5663685589737266) -
                (-28.722723055031874)*eta*eta - (12.819496154073379)*eta - (-0.49143284419548916));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004240299770313201))/(-0.0010476815179665847) -
                (309.80035674500596)*phi_mod*phi_mod - (19.752501529830433)*phi_mod - (-1.5722127327753341) -
                (-468.03360401876273)*eta*eta - (-563.0844862083273)*eta - (-169.22201273820875));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0031399425341876812))/(0.0010741138401281014) -
                (489.08553928139605)*phi_mod*phi_mod - (-24.513723961112294)*phi_mod - (-2.665872759897148) -
                (691.4059428353421)*eta*eta - (871.4386810479818)*eta - (274.4574139495217));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004245513809727379))/(-0.0010468615175255778) -
                (338.46739599218307)*phi_mod*phi_mod - (22.844145213105634)*phi_mod - (-1.6037954596732276) -
                (-146.98004277280373)*eta*eta - (-170.38624849032962)*eta - (-49.17651051229874));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033405151995594))/(0.0010694503553996871) -
                (507.8743477345848)*phi_mod*phi_mod - (-17.5105350008722)*phi_mod - (-2.726390243003705) -
                (-1035.2245866679416)*eta*eta - (-1265.788092490624)*eta - (-386.7533077313364));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00407007969485887))/(-0.0010412262481427615) -
                (326.14633210748195)*phi_mod*phi_mod - (21.535693939076122)*phi_mod - (-1.6223462672211835) -
                (-515.3440885570756)*eta*eta - (-629.1540240351197)*eta - (-191.8880269406546));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0029768839897329033))/(0.0010625667324117441) -
                (541.7014938603835)*phi_mod*phi_mod - (-23.10384685487572)*phi_mod - (-2.833163499996942) -
                (-401.8280934051583)*eta*eta - (-496.39168865503416)*eta - (-153.2432226588721));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003833759031725035))/(-0.0010063031487268883) -
                (259.74725555682755)*phi_mod*phi_mod - (21.204403502913344)*phi_mod - (-1.0855557943822975) -
                (-1048.682805535022)*eta*eta - (-1262.879961073083)*eta - (-380.0171171644067));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037581716745225136))/(-0.0010239577542379278) -
                (176.8366992272075)*phi_mod*phi_mod - (12.859268176864509)*phi_mod - (-1.0171424316683095) -
                (-877.8468953228229)*eta*eta - (-1061.554179368333)*eta - (-320.70383071622905));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004371435016821484))/(-0.001043598828571994) -
                (131.62336482413508)*phi_mod*phi_mod - (9.501854191017877)*phi_mod - (-0.74149754833783) -
                (-677.6471244098709)*eta*eta - (-810.4588217355874)*eta - (-242.1246452331927));}

    else if (seg_combination_id == 110902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0020257423485765856))/(-0.0009736365298592208) -
                (205.54500186097638)*phi_mod*phi_mod - (18.298995847539906)*phi_mod - (-0.7984952538162381) -
                (-341.64447107840954)*eta*eta - (423.2744484118457)*eta - (-130.82689964795833));}

    else if (seg_combination_id == 110902 && eta_inner == 4 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001606278042482017))/(-0.0009100052111862738) -
                (126.82851385456838)*phi_mod*phi_mod - (13.923370722942847)*phi_mod - (-0.4195299057596477) -
                (-323.1120432495966)*eta*eta - (399.4712264053183)*eta - (-122.97740059793087));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.030861439159367118))/(-0.002239178023735013) -
                (-305.9277076120082)*phi_mod*phi_mod - (-7.551592874515175)*phi_mod - (-0.9369530526449805) -
                (-641.1657884132896)*eta*eta - (2052.6724561292513)*eta - (-1643.2899557160197));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019770941952575085))/(0.0022823068475952665) -
                (-479.68173082125065)*phi_mod*phi_mod - (15.548524463893207)*phi_mod - (0.5803650342724819) -
                (122.91784236597464)*eta*eta - (-356.9553771888026)*eta - (255.74570404861885));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03027029274515067))/(-0.0023080868582541093) -
                (-292.98210383419786)*phi_mod*phi_mod - (-4.9217460642952355)*phi_mod - (-0.9051286699351322) -
                (301.2834959492014)*eta*eta - (-971.5589673785053)*eta - (782.6034470381776));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019753042334497796))/(0.002255212335243776) -
                (-442.97996793754686)*phi_mod*phi_mod - (11.372464809848713)*phi_mod - (0.2758807266047242) -
                (218.3944840855147)*eta*eta - (-656.6763637645513)*eta - (490.928650231462));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.04006516199590596))/(-0.0019271457805194459) -
                (-88.68175474588773)*phi_mod*phi_mod - (4.1980887445195485)*phi_mod - (-1.0363388839497731) -
                (780.1905587774486)*eta*eta - (-2510.8958450055006)*eta - (2019.865706337623));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019228846062813856))/(0.0023103542095737452) -
                (-449.8953030158915)*phi_mod*phi_mod - (17.142336284780985)*phi_mod - (0.28655291324683607) -
                (-467.59221896771726)*eta*eta - (1518.8618176246073)*eta - (-1233.681126037995));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.02993744374461139))/(-0.002119417390946824) -
                (-377.76916652675106)*phi_mod*phi_mod - (-6.879533611551424)*phi_mod - (-0.5036643815165274) -
                (-72.87163732064151)*eta*eta - (241.69656264556363)*eta - (-200.73829702445354));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018570094424528765))/(0.0022792759138362) -
                (-454.0866199675323)*phi_mod*phi_mod - (16.9207923206058)*phi_mod - (0.06931208040169753) -
                (-143.97069540342463)*eta*eta - (490.85238656172794)*eta - (-417.4947563452804));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03213305927964134))/(-0.0021685598357795103) -
                (-467.05196546770543)*phi_mod*phi_mod - (-6.938521569850835)*phi_mod - (-0.28564943313024754) -
                (-290.40927156315723)*eta*eta - (919.6831454333857)*eta - (-728.5730068022991));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019182381052903985))/(0.002257515494918616) -
                (-510.427267331724)*phi_mod*phi_mod - (21.317733928916105)*phi_mod - (0.5726881597206658) -
                (202.7736800030052)*eta*eta - (-605.9995983272406)*eta - (449.70179434606246));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.030945484576039673))/(-0.002201927275949536) -
                (-326.7933277706674)*phi_mod*phi_mod - (-2.433259297945396)*phi_mod - (-0.25411256257563075) -
                (84.49593334473762)*eta*eta - (-250.9413984673621)*eta - (184.83541739150402));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018951329843920926))/(0.002259238403654453) -
                (-499.26758896732906)*phi_mod*phi_mod - (21.521226570416466)*phi_mod - (0.6549244968106862) -
                (312.2556688350091)*eta*eta - (-957.2451765171505)*eta - (731.5866207234545));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03768199546705387))/(-0.0023142812881199342) -
                (13.805851903015771)*phi_mod*phi_mod - (-4.21451319481794)*phi_mod - (-1.498172223915631) -
                (79.2695836025058)*eta*eta - (-227.60603831909276)*eta - (160.76594084976304));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017111760406669736))/(0.0022378911258038796) -
                (-496.20466137159116)*phi_mod*phi_mod - (15.643032276648661)*phi_mod - (0.7060504575909221) -
                (344.9342378205044)*eta*eta - (-1055.3687514437092)*eta - (805.0335236510681));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.030216297987463493))/(-0.002210118368656213) -
                (-364.1709663079627)*phi_mod*phi_mod - (-5.646192271199043)*phi_mod - (-0.37312442298363935) -
                (88.12780981178963)*eta*eta - (-280.7171978901969)*eta - (223.1874616920836));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.02047721767779997))/(0.0022230884769918685) -
                (-485.83177949017113)*phi_mod*phi_mod - (15.166455824394637)*phi_mod - (0.4041969364785896) -
                (240.08081832987435)*eta*eta - (-741.7627884547902)*eta - (571.445917601594));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021859866177221686))/(-0.000807643726719416) -
                (-214.0661156542514)*phi_mod*phi_mod - (4.52323256154067)*phi_mod - (11.41137399836293) -
                (-104.92379965896524)*eta*eta - (-320.72475423928836)*eta - (-243.9387779118667));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (9.502426827670866e-05))/(-0.0007490153664620643) -
                (328.354019823546)*phi_mod*phi_mod - (-10.132347949747091)*phi_mod - (-15.78847654538421) -
                (3308.813748705564)*eta*eta - (10617.555474838045)*eta - (8516.623080324458));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002727685312378845))/(-0.0007036492509521927) -
                (508.5600536625232)*phi_mod*phi_mod - (-19.59851806929643)*phi_mod - (-26.55023142322796) -
                (776.2826228678567)*eta*eta - (2483.5154495606243)*eta - (1985.8684892684857));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0006233114612086332))/(-0.0007453588078819813) -
                (-307.7885487960032)*phi_mod*phi_mod - (11.391248610614333)*phi_mod - (14.88897419633167) -
                (55.397028831699025)*eta*eta - (179.14091131846226)*eta - (144.4288835858415));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005990409956407723))/(-0.0009701880482469417) -
                (-83.34477708257592)*phi_mod*phi_mod - (4.008235052078271)*phi_mod - (3.9469527982634047) -
                (-481.4962384821491)*eta*eta - (-1616.235070659002)*eta - (-1353.8213397671525));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0048142048957587075))/(-0.0009368748731011438) -
                (71.7280332208652)*phi_mod*phi_mod - (-5.784022452133136)*phi_mod - (-4.088330926294008) -
                (133.79259809738772)*eta*eta - (428.5331434314622)*eta - (342.5667866781056));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0029228945171620815))/(-0.0008576488908070476) -
                (-125.54487220040127)*phi_mod*phi_mod - (0.3178669339139241)*phi_mod - (6.499546589779067) -
                (-255.50572860183428)*eta*eta - (-846.9011748504665)*eta - (-701.0681015285686));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0015260912549090368))/(-0.000754440630863397) -
                (-191.55571665159323)*phi_mod*phi_mod - (4.591331099682684)*phi_mod - (8.749902904413654) -
                (-442.56400873972683)*eta*eta - (-1437.3388931446332)*eta - (-1168.5726213288726));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0022293297041440173))/(-0.001814815399402987) -
                (-87.75925364362112)*phi_mod*phi_mod - (-4.692715115129999)*phi_mod - (1.7408396124039371) -
                (180.12109662559834)*eta*eta - (-347.5795256589468)*eta - (167.68736100114933));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036764284513279236))/(0.0017369568037314505) -
                (-131.4363378723607)*phi_mod*phi_mod - (6.519364225028088)*phi_mod - (2.8696287910092533) -
                (-673.0720328169695)*eta*eta - (1294.9430790912843)*eta - (-622.5939232862198));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002604876751182385))/(-0.0018652456818436926) -
                (-95.40203003195306)*phi_mod*phi_mod - (-4.195240141585481)*phi_mod - (1.6286152103118245) -
                (-329.6660704221781)*eta*eta - (630.5184663016689)*eta - (-301.42900823680117));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004612322090153366))/(0.0018004660450214602) -
                (-143.12618145226972)*phi_mod*phi_mod - (6.523667580229738)*phi_mod - (2.9325039524418854) -
                (315.0344802388797)*eta*eta - (-583.0015144111195)*eta - (269.5950683452784));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0022269982730616766))/(-0.0018441295599917582) -
                (-99.65279023077757)*phi_mod*phi_mod - (-5.509629290615149)*phi_mod - (1.688324163300152) -
                (-379.71063742183657)*eta*eta - (727.6471166125403)*eta - (-348.54365577103323));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0052266872924914))/(0.0018237704904198217) -
                (-145.7086002858404)*phi_mod*phi_mod - (5.65480158683235)*phi_mod - (3.0188561543202397) -
                (158.9238747935203)*eta*eta - (-290.24435138533937)*eta - (132.35361523843224));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0022263556987158024))/(-0.0018258931043694559) -
                (-99.91003162061268)*phi_mod*phi_mod - (-4.969190427262517)*phi_mod - (1.9288769863962643) -
                (75.49192196640561)*eta*eta - (-147.40484160224975)*eta - (71.96448636195201));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004083623756300276))/(0.0017612096238778046) -
                (-139.1215883866115)*phi_mod*phi_mod - (3.029950958226252)*phi_mod - (3.1521051910453224) -
                (-895.9597758207528)*eta*eta - (1701.5539652094603)*eta - (-807.7863646308657));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0022530848810952283))/(-0.001830529313001601) -
                (-104.86754366625614)*phi_mod*phi_mod - (-4.591231304649458)*phi_mod - (2.0385966857303695) -
                (-33.08236531336395)*eta*eta - (71.7644112133309)*eta - (-38.359820175175));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0051690207803625375))/(0.001803183542606099) -
                (-144.69273048133994)*phi_mod*phi_mod - (6.479529760500729)*phi_mod - (3.099477074271949) -
                (225.2085634828173)*eta*eta - (-416.27978758459614)*eta - (192.25139970406147));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0030284971591978127))/(-0.0006210515344529579) -
                (-20.10617672384115)*phi_mod*phi_mod - (1.2074680163312905)*phi_mod - (-0.9523302994205849) -
                (-1346.7105437166765)*eta*eta - (4235.1617797067165)*eta - (-3329.541614900839));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011337942757666678))/(-0.0007823574317804433) -
                (-44.48002237146221)*phi_mod*phi_mod - (-1.7503097401626293)*phi_mod - (2.4312347602337097) -
                (-151.16154924110523)*eta*eta - (483.6817691648469)*eta - (-386.6938774121426));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001904623656203677))/(-0.0009149081631975832) -
                (-61.30597352331782)*phi_mod*phi_mod - (-2.7930509326416173)*phi_mod - (2.2327808937228233) -
                (1351.630608880788)*eta*eta - (-4238.07523517119)*eta - (3321.902837092881));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0007418222954370378))/(-0.000860556134972684) -
                (-54.78429568276814)*phi_mod*phi_mod - (-1.8857273584492238)*phi_mod - (-1.1858011372916082) -
                (318.4363975364409)*eta*eta - (-976.8884419748388)*eta - (748.4186135147246));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0032434414388765385))/(-0.0008749620720089481) -
                (-34.2928338873956)*phi_mod*phi_mod - (-0.09854220400337292)*phi_mod - (1.753294452997288) -
                (967.8110422216)*eta*eta - (-3035.101153159927)*eta - (2379.4615720483425));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009076322954256852))/(-0.0007413507233086185) -
                (-6.5902786463257055)*phi_mod*phi_mod - (-4.417368297602316)*phi_mod - (-0.06269590762520616) -
                (673.8678686172498)*eta*eta - (-2138.0270832729607)*eta - (1695.5690186694453));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009576516858890333))/(-0.000743280785375869) -
                (-25.823142736641483)*phi_mod*phi_mod - (1.8419754066748848)*phi_mod - (1.3801244804762343) -
                (-329.2960067228136)*eta*eta - (1038.4745725074317)*eta - (-818.5042009942631));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0026272873149807093))/(-0.0006760739003225856) -
                (-5.317560529547275)*phi_mod*phi_mod - (2.710495074453135)*phi_mod - (-2.2149196497597123) -
                (646.9909298537898)*eta*eta - (-2060.3059942212185)*eta - (1639.6277372637846));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0047769533844004))/(0.00010955812584977012) -
                (263.0907120337204)*phi_mod*phi_mod - (10.263192582095591)*phi_mod - (-8.500931307030614) -
                (-329.934725197698)*eta*eta - (-883.8698190370984)*eta - (-590.8021694244546));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0015550838791544184))/(0.00047987605984255356) -
                (-110.51524079408084)*phi_mod*phi_mod - (-3.5695686421089494)*phi_mod - (5.797336888018175) -
                (-1347.3272803367336)*eta*eta - (-3669.7199140134135)*eta - (-2497.0262002669333));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0030094334533202387))/(-0.0005649792037614593) -
                (130.59227818611035)*phi_mod*phi_mod - (-3.8913074274882447)*phi_mod - (-5.104104022616147) -
                (243.34849989384932)*eta*eta - (904.3648281200944)*eta - (839.8232097151272));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036439634854545347))/(-0.0008369626463788899) -
                (-63.62778408918565)*phi_mod*phi_mod - (0.24052215020130363)*phi_mod - (3.2027627029908823) -
                (107.46133623239221)*eta*eta - (403.68366461393015)*eta - (379.22996691842826));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002633086105691665))/(-0.0006285005485867801) -
                (-61.220287172551544)*phi_mod*phi_mod - (2.0659679037948853)*phi_mod - (1.7726530170980395) -
                (297.6428215165187)*eta*eta - (1094.5380868109864)*eta - (1005.4247493489024));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002484218005101419))/(0.0007796059311570785) -
                (172.29994624967398)*phi_mod*phi_mod - (5.859294020882006)*phi_mod - (-8.770402781627118) -
                (-941.8202213083905)*eta*eta - (-3483.8139550072615)*eta - (-3221.0651737734033));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003542287146763885))/(-0.0007499361896080209) -
                (217.9745262945512)*phi_mod*phi_mod - (-6.039627821096478)*phi_mod - (-6.020213061183119) -
                (-282.91447201404105)*eta*eta - (-1091.1196111093318)*eta - (-1051.2666477226237));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002089643288116955))/(-0.0007351502483488297) -
                (45.64260686628661)*phi_mod*phi_mod - (-2.5327649945562842)*phi_mod - (-0.35274608890570813) -
                (-296.40781247178086)*eta*eta - (-1117.1515125982578)*eta - (-1051.7915389401237));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00572291110916306))/(-0.0009411660352024482) -
                (-37.284478752085924)*phi_mod*phi_mod - (4.876438939263613)*phi_mod - (1.4773068451610871) -
                (48.82685505282668)*eta*eta - (184.0638804778255)*eta - (173.4999287781378));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0026144442116927597))/(0.0007477568039584869) -
                (-18.136413270992207)*phi_mod*phi_mod - (-0.04941504058897873)*phi_mod - (0.8235768702278603) -
                (-218.47738791791383)*eta*eta - (-785.321723796047)*eta - (-705.1082776899391));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0022367891539394127))/(-0.0007877526869760359) -
                (-155.35334078677826)*phi_mod*phi_mod - (4.825125410764831)*phi_mod - (7.055105105346347) -
                (-418.1256748299654)*eta*eta - (-1546.4064473882324)*eta - (-1428.9949099542566));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006215748562042006))/(0.0007131456865297475) -
                (195.26247945596697)*phi_mod*phi_mod - (4.903579496056928)*phi_mod - (-3.2659740348269266) -
                (-152.55412558505463)*eta*eta - (-543.604980275156)*eta - (-483.1210107695884));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0023796300262870175))/(-0.000596804937561135) -
                (-191.3368997907377)*phi_mod*phi_mod - (9.471606203195366)*phi_mod - (9.643558278764463) -
                (16.576679528758145)*eta*eta - (62.10934177963328)*eta - (58.11223290621608));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004107764674199232))/(-0.0011578943412724819) -
                (293.07211505702844)*phi_mod*phi_mod - (19.646499402579114)*phi_mod - (-1.215027855877378) -
                (-528.584421602917)*eta*eta - (-252.9916714475823)*eta - (-30.17740579666386));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004861127835223363))/(0.0012210758818080043) -
                (516.5554018410303)*phi_mod*phi_mod - (-27.496858192714463)*phi_mod - (-1.8675514409105578) -
                (-234.20561740783154)*eta*eta - (-101.90151040504561)*eta - (-10.822910295713992));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004356596234309485))/(-0.0011989850871025438) -
                (310.3979600083073)*phi_mod*phi_mod - (21.941887109045716)*phi_mod - (-1.3657068598484947) -
                (-19.483928006975937)*eta*eta - (-10.077436637119586)*eta - (-1.215567009039519));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013912267876344808))/(0.0011086529373022808) -
                (477.54175974210597)*phi_mod*phi_mod - (-24.670959686354816)*phi_mod - (-2.0467187311310355) -
                (-937.5210853378303)*eta*eta - (-454.952589111918)*eta - (-55.114813937294386));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003592847332926438))/(-0.0011583630617781509) -
                (307.5899272956997)*phi_mod*phi_mod - (25.76012866802955)*phi_mod - (-1.380577886146312) -
                (-485.7330311557099)*eta*eta - (-234.45483286277613)*eta - (-28.08392169766792));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024785635844650593))/(0.0011477391653266357) -
                (462.4291081420443)*phi_mod*phi_mod - (-21.851395235860906)*phi_mod - (-2.0500785135460102) -
                (555.0104205121442)*eta*eta - (288.2089102423156)*eta - (37.35836514751692));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003955349496995993))/(-0.0011795591012984483) -
                (303.0327393751394)*phi_mod*phi_mod - (18.715897907440706)*phi_mod - (-1.6061050825514316) -
                (-291.76358701338665)*eta*eta - (-148.372637247878)*eta - (-18.75353152684397));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005140041363917457))/(0.0012524750538341297) -
                (384.0952583909088)*phi_mod*phi_mod - (-10.515753203470874)*phi_mod - (-1.7276681022648015) -
                (1387.9760492540838)*eta*eta - (696.5755964800638)*eta - (87.41957741265544));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004132876690642816))/(-0.0011982563445161788) -
                (301.9934869086832)*phi_mod*phi_mod - (19.21715685531993)*phi_mod - (-1.7812126038969927) -
                (-725.3779139705816)*eta*eta - (-350.0176816644292)*eta - (-41.97796517743456));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033119596422630133))/(0.001197913156255285) -
                (499.8631485541099)*phi_mod*phi_mod - (-25.64141577208728)*phi_mod - (-2.5842719169817006) -
                (-2164.682414235655)*eta*eta - (-1041.4175801701515)*eta - (-124.95614493621443));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004018099227996509))/(-0.0011852719781284002) -
                (347.5105208073497)*phi_mod*phi_mod - (20.942890201566602)*phi_mod - (-1.7467125948023074) -
                (-604.9265625934178)*eta*eta - (-298.9379539329166)*eta - (-36.76796581332345));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038197484338469458))/(0.0012097101455037515) -
                (485.0898264282529)*phi_mod*phi_mod - (-22.36701779883694)*phi_mod - (-2.52085911760873) -
                (686.9095375293888)*eta*eta - (344.1081315087053)*eta - (43.09829627811026));}

    else if (seg_combination_id == 50301 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00885106816395906))/(-0.0026452917294217822) -
                (-58.13090694429408)*phi_mod*phi_mod - (-7.189214805368501)*phi_mod - (0.6421540232213606) -
                (-2497.0795444133546)*eta*eta - (-1328.3006008742097)*eta - (-176.2147380665368));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.010165507038467875))/(-0.0002414080022222682) -
                (192.30964777590458)*phi_mod*phi_mod - (-4.227307556743579)*phi_mod - (-2.1220637847573824) -
                (398.3504039013825)*eta*eta - (621.1300647966145)*eta - (241.04445933834995));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.010540017108651654))/(-0.00030327596957055035) -
                (-334.32194763625137)*phi_mod*phi_mod - (19.600788816185965)*phi_mod - (1.1807139659734158) -
                (1151.9276981498456)*eta*eta - (1928.064282097837)*eta - (805.301025113474));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0132971214013343))/(-0.000480850523897612) -
                (-223.62480877808545)*phi_mod*phi_mod - (11.432266769485038)*phi_mod - (1.8295713255073978) -
                (864.0176873486048)*eta*eta - (1395.3768074629943)*eta - (562.5796784905418));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0076295051805430805))/(-0.0022788646494679185) -
                (-96.55195997449793)*phi_mod*phi_mod - (-5.141811838287256)*phi_mod - (1.2459631554272526) -
                (561.5251002684099)*eta*eta - (774.0931481480324)*eta - (266.56866046842043));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005459402867947044))/(0.0022929417899060175) -
                (-91.3264674589018)*phi_mod*phi_mod - (5.056318323964866)*phi_mod - (1.2419529880039728) -
                (505.91430211185315)*eta*eta - (706.009761037932)*eta - (246.03063733817478));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007540095213718203))/(-0.0022720069576463845) -
                (-97.27213945848565)*phi_mod*phi_mod - (-4.491705824161464)*phi_mod - (1.3127267262699467) -
                (597.5283715297761)*eta*eta - (820.8236379848128)*eta - (281.67527692724804));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005436807556005679))/(0.0022962304247970996) -
                (-84.91875226854896)*phi_mod*phi_mod - (5.274686245713661)*phi_mod - (1.1339452390385905) -
                (556.0703475532941)*eta*eta - (771.522215005446)*eta - (267.3568730604585));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007504733514516369))/(-0.0022703590176212734) -
                (-99.36498003286142)*phi_mod*phi_mod - (-5.009738223514684)*phi_mod - (1.2402965711088951) -
                (421.83572942945386)*eta*eta - (581.034861054139)*eta - (199.99562463897252));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005345757531580685))/(0.0022844550165271997) -
                (-90.51224017082629)*phi_mod*phi_mod - (5.529300112374879)*phi_mod - (1.1709669517219548) -
                (337.93395529135853)*eta*eta - (473.02624133866357)*eta - (165.40710028901222));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008025684317518786))/(-0.002298047707200341) -
                (-100.4005131329019)*phi_mod*phi_mod - (-6.582730554754808)*phi_mod - (1.2859943807229914) -
                (699.031061466649)*eta*eta - (956.6639568557489)*eta - (327.1064527016939));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005446307442003134))/(0.0022926830058592348) -
                (-96.52539665482443)*phi_mod*phi_mod - (4.623399929007676)*phi_mod - (1.3487117246307583) -
                (524.0434731709305)*eta*eta - (731.7889954220681)*eta - (255.14308038308022));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007753592529272713))/(-0.0022952075524275374) -
                (-105.71142045247667)*phi_mod*phi_mod - (-5.666801892747901)*phi_mod - (1.4106777903129646) -
                (611.7919745795431)*eta*eta - (840.2659556106125)*eta - (288.3447565151384));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006102303562400223))/(0.002321212533820721) -
                (-89.18140208393378)*phi_mod*phi_mod - (4.864645865807645)*phi_mod - (1.2770902619748719) -
                (374.60991418418234)*eta*eta - (525.7997492507559)*eta - (184.2674229516428));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007316745534916031))/(-0.002408213798987184) -
                (-97.87238765545375)*phi_mod*phi_mod - (-4.588751539537009)*phi_mod - (1.1781860471884107) -
                (-325.0584801508323)*eta*eta - (-399.0093639551927)*eta - (-122.14813311911192));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007170092988697822))/(0.0024759601031444887) -
                (-77.00990859538881)*phi_mod*phi_mod - (4.6817684453901895)*phi_mod - (1.0517612085900898) -
                (-665.0270968798127)*eta*eta - (-857.0676980794394)*eta - (-275.9983266248223));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-7.196193304662011e-05))/(0.0006622533080519289) -
                (-141.94765295368103)*phi_mod*phi_mod - (-7.770060943330224)*phi_mod - (2.86445443782004) -
                (178.19117647023214)*eta*eta - (419.0298071551375)*eta - (243.28143141751272));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-7.386532915847894e-05))/(0.0006657908001872935) -
                (-133.5697061615055)*phi_mod*phi_mod - (-6.682216126672845)*phi_mod - (2.5658508338969486) -
                (330.4013681508046)*eta*eta - (811.2786621794825)*eta - (495.8820238411497));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00013599047089590902))/(0.0006437583069177466) -
                (-134.12986266574697)*phi_mod*phi_mod - (-6.0724585980070165)*phi_mod - (2.842039216940185) -
                (-150.7288756014844)*eta*eta - (-435.62940331612253)*eta - (-311.9133243413448));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0002710400034889706))/(0.0006712508119844418) -
                (-137.8842946246479)*phi_mod*phi_mod - (-7.52550297426318)*phi_mod - (2.8796722199409572) -
                (487.4825622833606)*eta*eta - (1223.9969746300621)*eta - (766.9570663329607));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003666127043276481))/(0.000665817527454181) -
                (-137.9957398340185)*phi_mod*phi_mod - (-5.051951361586317)*phi_mod - (3.064643188025458) -
                (-81.90649630945482)*eta*eta - (-256.88503282834785)*eta - (-195.76374536944448));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00038639928027479713))/(0.000694497634557792) -
                (-170.62752886968698)*phi_mod*phi_mod - (-11.37603207980804)*phi_mod - (2.3667726593820366) -
                (-166.07032783733314)*eta*eta - (-468.2546930820098)*eta - (-328.24503710394885));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00020740694445842034))/(0.0006619885783751769) -
                (-138.94070967508674)*phi_mod*phi_mod - (-7.2660225939692165)*phi_mod - (2.8000914591878105) -
                (399.21691299000526)*eta*eta - (992.0200218159315)*eta - (614.5155264744907));}

    else if (seg_combination_id == 221915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0004753078966040289))/(0.0007100171311403284) -
                (-159.9558606090281)*phi_mod*phi_mod - (-4.904323167314063)*phi_mod - (2.3605798025221434) -
                (181.27596118773852)*eta*eta - (429.73888671097325)*eta - (251.9277230971084));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036639895900739882))/(-0.002346503410178427) -
                (-8.704355749088425)*phi_mod*phi_mod - (17.699126878967714)*phi_mod - (2.7124600760195205) -
                (-247.85992899299802)*eta*eta - (492.1375282371638)*eta - (-244.06042731548106));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006175244935005164))/(0.002264752323253934) -
                (-93.24812335847277)*phi_mod*phi_mod - (14.007635084156862)*phi_mod - (3.166219175551595) -
                (624.268927948122)*eta*eta - (-1168.8653368603204)*eta - (547.0824161945227));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038746508061277885))/(-0.002346059487963046) -
                (-110.28195729271292)*phi_mod*phi_mod - (-0.6636587355598629)*phi_mod - (1.450633153598687) -
                (-426.18249606934324)*eta*eta - (819.4270343805014)*eta - (-393.7567426724428));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00553229766438743))/(0.0022277494851962515) -
                (-60.643572800823335)*phi_mod*phi_mod - (-13.395465695487665)*phi_mod - (3.920392666671429) -
                (542.5424598292735)*eta*eta - (-1010.4512085372262)*eta - (470.3871122785298));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006142435398835352))/(0.002064467132641742) -
                (-65.43291776593489)*phi_mod*phi_mod - (5.616813838559297)*phi_mod - (0.9301316195626573) -
                (379.10178578591734)*eta*eta - (-447.2635054444412)*eta - (131.7732864184701));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006540511432599835))/(0.0021140107159750166) -
                (-60.315329138145266)*phi_mod*phi_mod - (5.470433148623897)*phi_mod - (0.6982539600100127) -
                (313.07622282843045)*eta*eta - (-368.0224700624957)*eta - (108.00718440595585));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005360770236489947))/(-0.002285396848684744) -
                (-93.73832210599568)*phi_mod*phi_mod - (-4.736661925068895)*phi_mod - (1.3350634758710846) -
                (-594.2587344229014)*eta*eta - (773.4595739441078)*eta - (-251.54622828346956));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007803806310242405))/(0.0022904018168306618) -
                (-89.67016677701089)*phi_mod*phi_mod - (5.072268506311142)*phi_mod - (1.2056245938859926) -
                (-154.47692900664742)*eta*eta - (193.87888261650102)*eta - (-60.72546780905227));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007390481853219462))/(0.0021117015701613232) -
                (-77.19513464944441)*phi_mod*phi_mod - (4.721635377327844)*phi_mod - (1.4235105068121339) -
                (35.71572205796242)*eta*eta - (-27.286861268994354)*eta - (3.429783313023389));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00707875017913595))/(0.0020977078306220103) -
                (-76.56142471143679)*phi_mod*phi_mod - (4.117784540313875)*phi_mod - (1.2749830437727891) -
                (87.00275612293115)*eta*eta - (-94.14725873188493)*eta - (25.114567670212246));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006736829714815872))/(0.0020736700799415648) -
                (-62.20365349255031)*phi_mod*phi_mod - (5.162990251763799)*phi_mod - (0.8424523017719793) -
                (396.79574876524634)*eta*eta - (-469.6914706078176)*eta - (138.7947560679793));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00014673505855286023))/(-0.0009525138138148186) -
                (-249.30398055780472)*phi_mod*phi_mod - (9.96601573270391)*phi_mod - (1.595172179665302) -
                (-116.91866695091775)*eta*eta - (-348.1289386951178)*eta - (-258.14675092874575));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008170768545190888))/(0.000976882287327061) -
                (-286.5382249343349)*phi_mod*phi_mod - (-11.212724783242594)*phi_mod - (2.0738594996860518) -
                (320.5313495921648)*eta*eta - (849.7399635448994)*eta - (562.343866239264));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0009965390026688951))/(-0.0009025686990929173) -
                (-261.10674527000896)*phi_mod*phi_mod - (11.008500199459387)*phi_mod - (1.589105243080493) -
                (-155.02125686954824)*eta*eta - (-450.5299753374329)*eta - (-326.95559579770674));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00016646234195245103))/(0.0009439917829272943) -
                (-292.0123606629806)*phi_mod*phi_mod - (-10.938995375932135)*phi_mod - (1.7932150474426005) -
                (346.136286022494)*eta*eta - (919.9312576394884)*eta - (610.3844959392475));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0005938846086768865))/(-0.0009319080253203386) -
                (-242.57739524975597)*phi_mod*phi_mod - (10.194775997382498)*phi_mod - (0.9877373134102573) -
                (-163.21566603890446)*eta*eta - (-477.0295554878876)*eta - (-347.952062276242));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015196819063944644))/(0.0010091040064713157) -
                (-264.33711223334944)*phi_mod*phi_mod - (-10.323998318233757)*phi_mod - (1.6874127198871611) -
                (279.38852227605275)*eta*eta - (744.6300621134635)*eta - (495.4063913229591));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0010962861291053088))/(-0.0008993640528600214) -
                (-272.45117235228986)*phi_mod*phi_mod - (9.863563389832853)*phi_mod - (1.6934485864857403) -
                (-84.53970106893806)*eta*eta - (-255.95083231387318)*eta - (-192.684304774842));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-5.1932843994458445e-05))/(0.0009559967333181047) -
                (-299.4074992297739)*phi_mod*phi_mod - (-12.938896212027165)*phi_mod - (1.9360755361604491) -
                (92.39270269756749)*eta*eta - (237.8556332445588)*eta - (152.1339364257326));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001057235055080398))/(-0.0009526589790676335) -
                (-249.27847042506573)*phi_mod*phi_mod - (10.860023950176558)*phi_mod - (2.049635433546097) -
                (-39.36152461080862)*eta*eta - (-141.50201968334454)*eta - (-120.53644293647413));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014160701585943889))/(0.0009594194353553761) -
                (-278.18005448761795)*phi_mod*phi_mod - (-9.143415177238028)*phi_mod - (2.3904210376196824) -
                (66.26008819899617)*eta*eta - (164.7421337365392)*eta - (101.14934270394176));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.000496435145105756))/(-0.0009387425862791611) -
                (-263.24704141446426)*phi_mod*phi_mod - (13.270265238345516)*phi_mod - (1.4511406122036248) -
                (-142.38073836320422)*eta*eta - (-414.0144457494868)*eta - (-300.63688344324055));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00038431917284775514))/(0.0009279086668185899) -
                (-279.75938443082424)*phi_mod*phi_mod - (-9.454760629240663)*phi_mod - (1.6896554217560502) -
                (101.17803084791653)*eta*eta - (248.72002371085688)*eta - (150.80171725634784));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00032376826573146054))/(-0.0009619105609481263) -
                (-240.11691645006732)*phi_mod*phi_mod - (10.63460511411849)*phi_mod - (1.3903499343977475) -
                (-27.391996401414644)*eta*eta - (-102.33878710495328)*eta - (-89.49805273064099));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0004971003940079624))/(0.0009427868037528545) -
                (-278.98625151422124)*phi_mod*phi_mod - (-10.293414892689485)*phi_mod - (2.028887174371103) -
                (101.13046124047527)*eta*eta - (259.04528027401534)*eta - (164.8591248087705));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-6.379552706210922e-05))/(-0.0009631079239649157) -
                (-247.29565602813813)*phi_mod*phi_mod - (10.529056106989431)*phi_mod - (1.3744651885576369) -
                (80.40408347998364)*eta*eta - (199.0759499871795)*eta - (121.07916119364832));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-3.890011007590199e-05))/(0.0009304314431578381) -
                (-283.8346286913562)*phi_mod*phi_mod - (-9.228261398677262)*phi_mod - (1.6102027340419867) -
                (272.2102736912089)*eta*eta - (710.7835106108042)*eta - (462.85282243703983));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037602087962212713))/(-0.0024263357745905644) -
                (-22.024712734463456)*phi_mod*phi_mod - (12.0442029196096)*phi_mod - (2.103271577331589) -
                (327.1994477297747)*eta*eta - (-616.9155705806497)*eta - (290.76683918504284));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007942971130251856))/(0.0024783111614984834) -
                (-132.25299895264573)*phi_mod*phi_mod - (3.0085502819336467)*phi_mod - (1.1590870717548374) -
                (-466.8207057218581)*eta*eta - (864.4120175752238)*eta - (-400.07202627986163));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004230102938455086))/(-0.002455668026820945) -
                (-110.12611287283185)*phi_mod*phi_mod - (-0.22779796817072434)*phi_mod - (1.1590900413079057) -
                (23.147603602621718)*eta*eta - (-53.682517653941204)*eta - (30.00055520404212));}

    else if (seg_combination_id == 50313 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007337906672144732))/(0.0024210758054702265) -
                (-14.539962056541874)*phi_mod*phi_mod - (-16.988075569144133)*phi_mod - (2.466249329713117) -
                (266.6116082447924)*eta*eta - (-507.32731576847846)*eta - (241.2307655612813));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006876101178728831))/(-0.002835866457947079) -
                (-13.021095284420818)*phi_mod*phi_mod - (14.602303603718148)*phi_mod - (2.211975635469857) -
                (-49.97041554473453)*eta*eta - (61.34574410873545)*eta - (-18.6010160279258));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010048929772673366))/(0.002851502899000247) -
                (-118.30982662785135)*phi_mod*phi_mod - (2.227248588588806)*phi_mod - (1.204759408600748) -
                (-177.8977283787033)*eta*eta - (226.38282609464596)*eta - (-71.84127369422356));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0070409432100205175))/(-0.002860592649346144) -
                (-109.29995766915803)*phi_mod*phi_mod - (0.10905563481080491)*phi_mod - (1.0586849111965186) -
                (-70.63142194178877)*eta*eta - (89.21471929475874)*eta - (-27.99647678492731));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010314926918122101))/(0.0028636940814551017) -
                (5.873543490182342)*phi_mod*phi_mod - (-19.452276965978285)*phi_mod - (2.5025918464723347) -
                (-66.86692805857349)*eta*eta - (83.61286443856754)*eta - (-26.009246374570047));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00033308983772633503))/(-0.0008113007594893609) -
                (46.638259385716445)*phi_mod*phi_mod - (1.6158805684749338)*phi_mod - (-0.686700943154649) -
                (-39.98570393166651)*eta*eta - (184.29108993988103)*eta - (-211.9610973168826));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007195126633738686))/(0.0008246789796396177) -
                (34.723764113147396)*phi_mod*phi_mod - (-0.38976990708217474)*phi_mod - (-0.6037982690499643) -
                (61.102860597037214)*eta*eta - (-253.29682204856724)*eta - (262.1194052059817));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003074027434625592))/(-0.0008119123153784013) -
                (48.35037800445503)*phi_mod*phi_mod - (0.948335103147549)*phi_mod - (-0.7207560228970982) -
                (-34.03878741869365)*eta*eta - (157.75485861928968)*eta - (-182.4027010728498));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010812898526229213))/(0.0008409060552148521) -
                (34.47124240678486)*phi_mod*phi_mod - (-0.4364971642135952)*phi_mod - (-0.5246458434253823) -
                (52.70150970208408)*eta*eta - (-218.77115086066584)*eta - (226.69098725327734));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005183733074602492))/(-0.00082300493049724) -
                (41.11297323986294)*phi_mod*phi_mod - (0.08726132849357437)*phi_mod - (-0.6458352506354361) -
                (-24.917506109712228)*eta*eta - (117.11809214431297)*eta - (-137.1161072316053));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007669188727348163))/(0.0008200714534056663) -
                (41.637761105606906)*phi_mod*phi_mod - (-0.6978955557336338)*phi_mod - (-0.72395110203934) -
                (40.170741149239106)*eta*eta - (-163.37731498194776)*eta - (165.57109958976181));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00042847981154173133))/(-0.000815741221221893) -
                (44.526977024361344)*phi_mod*phi_mod - (0.4113509558856994)*phi_mod - (-0.6884296487262812) -
                (-23.172667474742852)*eta*eta - (109.90999130625835)*eta - (-129.71573593220282));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000911161559552745))/(0.0008273636944505782) -
                (41.627246018148064)*phi_mod*phi_mod - (-1.3517094004487007)*phi_mod - (-0.6848464870549573) -
                (64.43581160437134)*eta*eta - (-267.961119752238)*eta - (278.2505531838014));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005166076218852113))/(-0.000820239314606519) -
                (44.19858102085191)*phi_mod*phi_mod - (1.042900045041441)*phi_mod - (-0.6831585856788044) -
                (-38.74986084803882)*eta*eta - (179.423405941815)*eta - (-207.18924195620338));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005956725351146486))/(0.000812055014587562) -
                (45.0377025967793)*phi_mod*phi_mod - (-2.310424358148835)*phi_mod - (-0.7613134950123247) -
                (35.5396392809276)*eta*eta - (-142.50884213403504)*eta - (142.1229260171449));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00043404245262028483))/(-0.0008107513821692009) -
                (48.04272041591567)*phi_mod*phi_mod - (0.08864465303541574)*phi_mod - (-0.7700658875752479) -
                (-13.47010297179484)*eta*eta - (66.91817000423667)*eta - (-82.09138100028532));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007435538294544434))/(0.0008120435914317987) -
                (42.598475627479786)*phi_mod*phi_mod - (-0.3275198759947674)*phi_mod - (-0.7426037429823714) -
                (55.47264291444036)*eta*eta - (-228.98483911267118)*eta - (235.89754646216542));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004455930904115163))/(-0.0008180132808370318) -
                (46.490075764932264)*phi_mod*phi_mod - (1.3510358142515357)*phi_mod - (-0.7634136243092307) -
                (-24.025002949087586)*eta*eta - (112.7198439962614)*eta - (-131.73187567593195));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000781213252759142))/(0.0008155852170023326) -
                (50.20401059994478)*phi_mod*phi_mod - (-1.4651812858506035)*phi_mod - (-0.8781066811646373) -
                (91.89072896372211)*eta*eta - (-385.1993831799044)*eta - (403.3904407536983));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004556827232204401))/(-0.0008163378434943504) -
                (45.33372412658006)*phi_mod*phi_mod - (1.5947593496279446)*phi_mod - (-0.685435961257807) -
                (-24.690710171339752)*eta*eta - (116.47480872052155)*eta - (-136.8043729086633));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009829825048546003))/(0.0008263998287718201) -
                (43.495059854039916)*phi_mod*phi_mod - (-1.0930160178599546)*phi_mod - (-0.663053991946488) -
                (54.45298254729435)*eta*eta - (-225.20041377178458)*eta - (232.4715115884467));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.02125376956087695))/(-0.00012063428267678161) -
                (-2.0990878318008783)*phi_mod*phi_mod - (-5.709229419633483)*phi_mod - (1.4725725840004282) -
                (-139600.13267778358)*eta*eta - (-271152.2580563341)*eta - (-131664.15297673052));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.008331581520793952))/(0.0010628641015467879) -
                (-17.611133625683337)*phi_mod*phi_mod - (-7.5415052523450425)*phi_mod - (1.429895996011863) -
                (735.9462036786858)*eta*eta - (1449.0195339130646)*eta - (712.5319454424721));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.016738374908381932))/(0.00028953049445624773) -
                (-133.1576938005997)*phi_mod*phi_mod - (0.1799926920270048)*phi_mod - (2.3752005906690346) -
                (-6954.546027757686)*eta*eta - (-13323.001111899968)*eta - (-6378.665936905757));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.02039831352894205))/(4.999046415330154e-05) -
                (-447.99723582939856)*phi_mod*phi_mod - (44.92127373666515)*phi_mod - (3.310327375849884) -
                (2133.333306476292)*eta*eta - (4519.999947340305)*eta - (2380.8666408547483));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004397738063246131))/(0.0010512373284095624) -
                (-168.42976395048606)*phi_mod*phi_mod - (20.839538778390285)*phi_mod - (3.866408470154493) -
                (-2750.6588210849836)*eta*eta - (-5324.038593357063)*eta - (-2575.76180228515));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005186034072516169))/(-0.0019326647665621893) -
                (-138.01564066523758)*phi_mod*phi_mod - (-5.001903523001739)*phi_mod - (2.581704705679987) -
                (927.6002912699414)*eta*eta - (1740.7085993532728)*eta - (816.5925142663327));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0039929663643558586))/(0.0019476955515404975) -
                (-108.71612331955217)*phi_mod*phi_mod - (6.119601344227927)*phi_mod - (1.973362594011572) -
                (511.2911456216653)*eta*eta - (1021.0129736216371)*eta - (509.23108175648895));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01835827691407559))/(-0.00012420483673241815) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (8.73067453998905e-05))/(-0.0007212654469174049) -
                (-74.61326163776276)*phi_mod*phi_mod - (-0.47745540616458854)*phi_mod - (2.949060885825367) -
                (40.60931191991746)*eta*eta - (-145.24663942965242)*eta - (129.66820963692058));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0024929498856718986))/(0.0005828194649687725) -
                (145.8183058837103)*phi_mod*phi_mod - (-11.471844881468773)*phi_mod - (-6.245095679649961) -
                (-91.0829840586177)*eta*eta - (333.7485160517378)*eta - (-305.90352516713796));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010673770175357589))/(-0.00074561605457308) -
                (67.02844651984636)*phi_mod*phi_mod - (-5.652278315519868)*phi_mod - (-1.9585075113094512) -
                (150.583692848002)*eta*eta - (-562.3388872103186)*eta - (524.2254426292277));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015486849650562524))/(-0.000750709402565125) -
                (14.527658695006926)*phi_mod*phi_mod - (-0.34192422675081513)*phi_mod - (-0.7167344365254762) -
                (-408.27555572120804)*eta*eta - (1521.5130185846538)*eta - (-1416.646231184709));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003359130707760587))/(-0.0007892898692910988) -
                (155.26678031635893)*phi_mod*phi_mod - (4.082794393947054)*phi_mod - (-6.307486455376855) -
                (168.06781794363994)*eta*eta - (-623.802409615286)*eta - (578.4730582319601));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0009352257368586887))/(-0.0007167292302004605) -
                (222.61591153111064)*phi_mod*phi_mod - (4.417398108882542)*phi_mod - (-11.696319223694783) -
                (436.5286699484447)*eta*eta - (-1628.1940646379344)*eta - (1516.4154338257217));}

    else if (seg_combination_id == 100902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008552156142102958))/(-0.001320539915111399) -
                (508.656134449653)*phi_mod*phi_mod - (16.886160789541066)*phi_mod - (-2.2884513118853658) -
                (5714.60542442733)*eta*eta - (2624.588729417078)*eta - (301.1312340916758));}

    else if (seg_combination_id == 100902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034360245208628075))/(0.0011479839163947832) -
                (313.6081702475314)*phi_mod*phi_mod - (-20.789038548351122)*phi_mod - (-1.4559541844833226) -
                (29.222086094198033)*eta*eta - (25.857349046674166)*eta - (4.826895507613599));}

    else if (seg_combination_id == 100902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001049438397978052))/(-0.0010322083308948306) -
                (524.970885460851)*phi_mod*phi_mod - (16.654637787459706)*phi_mod - (-3.6671401168902324) -
                (3576.96137053897)*eta*eta - (1547.8319366943078)*eta - (166.56150417218439));}

    else if (seg_combination_id == 100902 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033572253812894507))/(0.0011391024249977236) -
                (309.65183096471185)*phi_mod*phi_mod - (-21.937797507561843)*phi_mod - (-1.4616815516692514) -
                (-193.22913338990034)*eta*eta - (-90.782750829069)*eta - (-10.39034934295767));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008472092989502513))/(-0.0006801896372158456) -
                (275.71197168754003)*phi_mod*phi_mod - (10.230012138754844)*phi_mod - (-4.423314454834619) -
                (398.9573836581026)*eta*eta - (-1335.4827513946163)*eta - (1117.4735583833888));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00013149744173830173))/(0.000696046692822766) -
                (298.806424264062)*phi_mod*phi_mod - (-6.47462393554354)*phi_mod - (-5.817947166298886) -
                (94.62025534122247)*eta*eta - (-302.71466160129626)*eta - (241.99784231280086));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008568025501461402))/(-0.0006870282857136134) -
                (271.81634764328606)*phi_mod*phi_mod - (8.24688046517957)*phi_mod - (-4.424766412994088) -
                (96.97399855028436)*eta*eta - (-329.5641007290365)*eta - (279.9132265865667));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0007012721052984428))/(0.0006778729504734512) -
                (299.52319642940165)*phi_mod*phi_mod - (-8.110133879559097)*phi_mod - (-5.885598060193193) -
                (64.76241091366973)*eta*eta - (-202.70610777311447)*eta - (158.30849206449534));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007728132129768639))/(-0.0006848587107899547) -
                (278.2240846530453)*phi_mod*phi_mod - (7.886019993943205)*phi_mod - (-4.568841873819782) -
                (241.69137421411327)*eta*eta - (-813.7103513909179)*eta - (684.724713335362));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0004900110234109625))/(0.0006854839331736682) -
                (302.0026375918534)*phi_mod*phi_mod - (-8.420907021482707)*phi_mod - (-6.134561806413351) -
                (341.40671944799453)*eta*eta - (-1113.3349417120617)*eta - (907.6300560410384));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009061492483159612))/(-0.0006843137082350462) -
                (279.4887214810184)*phi_mod*phi_mod - (8.575049631737054)*phi_mod - (-4.501923035224209) -
                (216.04264727300801)*eta*eta - (-725.7571096268802)*eta - (609.4120775635912));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0006232827491194216))/(0.0006720010866475426) -
                (308.34134214493656)*phi_mod*phi_mod - (-6.5740545540422906)*phi_mod - (-5.973380416948822) -
                (-69.40291826136382)*eta*eta - (235.79555937919685)*eta - (-199.9813680194917));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007010720504161647))/(-0.0006799286856555209) -
                (283.3386137672056)*phi_mod*phi_mod - (6.277175774620373)*phi_mod - (-4.762838472200668) -
                (212.9656428106724)*eta*eta - (-718.0800119988896)*eta - (605.1296621742731));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0006250884081758965))/(0.0006687373585559843) -
                (310.2389541294356)*phi_mod*phi_mod - (-9.799366440278094)*phi_mod - (-6.021323945282471) -
                (-132.12648574325038)*eta*eta - (432.10541070243727)*eta - (-353.2527538995396));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008083784491129875))/(-0.000671842246961272) -
                (275.80963097404486)*phi_mod*phi_mod - (4.355618442018864)*phi_mod - (-4.515430032690642) -
                (170.92982484800433)*eta*eta - (-574.9280355267198)*eta - (483.35010480553325));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00019115213867508223))/(0.0006804533964019105) -
                (289.1536156094444)*phi_mod*phi_mod - (-10.817697513168897)*phi_mod - (-5.645808673918171) -
                (455.1255814075205)*eta*eta - (-1488.5326040629482)*eta - (1217.060352389959));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007160983772868119))/(-0.0006708682561214015) -
                (281.7739817326165)*phi_mod*phi_mod - (9.202985432469374)*phi_mod - (-4.542865971263541) -
                (326.0010319618769)*eta*eta - (-1089.0924855841824)*eta - (909.512727704875));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00031633247835020613))/(0.0006799945772655781) -
                (303.33712788560837)*phi_mod*phi_mod - (-7.976522270533349)*phi_mod - (-5.932972913802678) -
                (60.537543607719115)*eta*eta - (-193.24884159045433)*eta - (154.14448551084897));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007797630265197069))/(-0.0006769978102980589) -
                (259.48068687837485)*phi_mod*phi_mod - (10.52969173683836)*phi_mod - (-4.390470617895425) -
                (122.32523875138821)*eta*eta - (-408.6096793762341)*eta - (341.2332409152731));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00034648229289948397))/(0.0006860599200000512) -
                (285.7724600231877)*phi_mod*phi_mod - (-6.2724482948223255)*phi_mod - (-5.817731325755184) -
                (35.3169538271196)*eta*eta - (-110.56274240439983)*eta - (86.3230238138725));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008698405528215948))/(-0.00258690638898611) -
                (-40.56239581560071)*phi_mod*phi_mod - (8.26686221809326)*phi_mod - (1.952001652781821) -
                (-42.4803283420213)*eta*eta - (-72.06038046874879)*eta - (-30.381162459843047));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005276166158743424))/(0.0025373886988727347) -
                (-128.40168505138882)*phi_mod*phi_mod - (0.6466756411278736)*phi_mod - (1.7880689251800654) -
                (-1173.720078111547)*eta*eta - (-1921.8869501695613)*eta - (-786.6041413875861));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008045349820568412))/(-0.002535257324461888) -
                (-128.4402638002072)*phi_mod*phi_mod - (2.2217936896796453)*phi_mod - (1.097151697664829) -
                (-420.6442937298327)*eta*eta - (-689.1451370141745)*eta - (-282.0494787775904));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004776932300272221))/(0.0025397365044446687) -
                (-27.730953009273684)*phi_mod*phi_mod - (-14.86102734192748)*phi_mod - (3.0323540900065655) -
                (-554.0010434250231)*eta*eta - (-926.9423959204968)*eta - (-387.5053073501339));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028594316411260524))/(0.0013189901670036487) -
                (572.9834795809977)*phi_mod*phi_mod - (-316.0139554583251)*phi_mod - (43.47229949927772) -
                (562.6508310372574)*eta*eta - (1126.8448178116175)*eta - (563.341543243742));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0032119777690887297))/(0.0013274417579653569) -
                (-252.36759759095088)*phi_mod*phi_mod - (-97.6860329847245)*phi_mod - (-9.395902855918134) -
                (219.18024511355281)*eta*eta - (436.6832939622511)*eta - (217.38697138313927));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0025297648272206686))/(-0.0012717788457895607) -
                (-47.88610799174889)*phi_mod*phi_mod - (20.50592262969973)*phi_mod - (-2.3819407619649198) -
                (-96.94462741741545)*eta*eta - (172.24859654205036)*eta - (-75.33908821079984));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008737982688699414))/(0.0013176105081206602) -
                (-1993.1830653366806)*phi_mod*phi_mod - (962.1983039303228)*phi_mod - (-115.61727657504953) -
                (13.19319056215211)*eta*eta - (-23.20221879620697)*eta - (10.043469852221977));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012677941158568528))/(-0.0012659801047375705) -
                (-55.759926977336804)*phi_mod*phi_mod - (-3.827683889910278)*phi_mod - (1.8368403706827996) -
                (-78.56888086256404)*eta*eta - (149.5980840248446)*eta - (-71.08996852865728));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022413412390478488))/(0.00106156169656717) -
                (2308.0304478506414)*phi_mod*phi_mod - (864.7237331072714)*phi_mod - (81.09452283290466) -
                (-629.4948136983459)*eta*eta - (1200.8477173297158)*eta - (-571.9383416725285));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0018649867891241297))/(-0.0005910002783748908) -
                (429.73697543762324)*phi_mod*phi_mod - (-12.751709726712773)*phi_mod - (-2.6185760067649175) -
                (-1010.3815878936894)*eta*eta - (-2828.914569903251)*eta - (-1977.8204866330452));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014089312042391397))/(0.0005338923951655017) -
                (163.51295516251696)*phi_mod*phi_mod - (8.70443336426304)*phi_mod - (-0.9444654840114333) -
                (-204.01355346921733)*eta*eta - (-558.2951257862641)*eta - (-381.35188771112604));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009057701095280006))/(-0.0005455143825760475) -
                (384.87496610624106)*phi_mod*phi_mod - (-14.075488382966382)*phi_mod - (-2.483134241288105) -
                (-1892.5155164593984)*eta*eta - (-5097.6862638848725)*eta - (-3432.54329811074));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014219813969640128))/(0.0005345505699021511) -
                (181.53134706644417)*phi_mod*phi_mod - (11.39497631034245)*phi_mod - (-1.0219219960610273) -
                (-123.78444832988647)*eta*eta - (-350.4072142387177)*eta - (-246.78228734033758));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003897780188795526))/(-0.0005235537726802614) -
                (575.4875103095525)*phi_mod*phi_mod - (-26.2144006688876)*phi_mod - (-3.020715805458535) -
                (1751.1024041570688)*eta*eta - (4697.46631011108)*eta - (3150.0294298873814));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013294783377465146))/(0.0005313417742340821) -
                (156.24539450203503)*phi_mod*phi_mod - (9.738790297246313)*phi_mod - (-0.891470867763294) -
                (-144.9965453358811)*eta*eta - (-405.8921193290252)*eta - (-283.05990520303044));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.010273770533184049))/(-0.00027719310435860906) -
                (643.7033815759867)*phi_mod*phi_mod - (-24.398683667206768)*phi_mod - (-7.0732452991058175) -
                (20484.688576734043)*eta*eta - (55271.05677414133)*eta - (37282.044424792366));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014662529661443307))/(0.0005351142747109902) -
                (197.34426235104888)*phi_mod*phi_mod - (9.216551123232493)*phi_mod - (-1.0904386557280377) -
                (68.20106453972379)*eta*eta - (152.1287637107913)*eta - (81.95648939358368));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021624340065338793))/(-0.000604591765273701) -
                (254.64276237031413)*phi_mod*phi_mod - (-7.042183337195871)*phi_mod - (-1.9637353578951298) -
                (-5231.11061154629)*eta*eta - (-14075.929540436284)*eta - (-9468.717730772287));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012357398062345993))/(0.000522469637088108) -
                (203.58458265950853)*phi_mod*phi_mod - (9.507819908453003)*phi_mod - (-1.2526481107682692) -
                (13.590018503858882)*eta*eta - (11.609639872737226)*eta - (-8.346283248191165));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0003997287223922592))/(-0.0005124346818111855) -
                (416.57643682029465)*phi_mod*phi_mod - (-18.117681750042113)*phi_mod - (-3.2921473268024184) -
                (1479.9694161731131)*eta*eta - (3901.806595902075)*eta - (2570.1789603038824));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013636398596578157))/(0.0005252555451716091) -
                (168.73279254449844)*phi_mod*phi_mod - (9.33672783234028)*phi_mod - (-0.9682887908312792) -
                (-78.76566480282852)*eta*eta - (-225.50026908550183)*eta - (-160.47503769012067));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002472189851274547))/(-0.0006212218040176167) -
                (252.16329490209935)*phi_mod*phi_mod - (-5.795083079469278)*phi_mod - (-1.5922893533450653) -
                (847.4600029034453)*eta*eta - (2290.3912356856417)*eta - (1547.3102932117367));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001263777692048479))/(0.0005199099475161195) -
                (154.6207827256059)*phi_mod*phi_mod - (7.8651014743085295)*phi_mod - (-0.9295217274929262) -
                (-41.49824630722312)*eta*eta - (-130.5881503225523)*eta - (-100.12604181308382));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000549559668493726))/(-0.0005319672967343555) -
                (544.6549820300145)*phi_mod*phi_mod - (-17.85165183293933)*phi_mod - (-2.9668229808676396) -
                (-4824.610408025725)*eta*eta - (-13080.2975347615)*eta - (-8865.307733872862));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013187103175791926))/(0.0005310230647668119) -
                (189.07262802822186)*phi_mod*phi_mod - (10.092739920784497)*phi_mod - (-1.1193646494896512) -
                (-78.24531664684118)*eta*eta - (-229.21697105025694)*eta - (-166.1625898528315));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-8.832123298208336e-05))/(-0.0008323624773465561) -
                (602.3109233117494)*phi_mod*phi_mod - (19.961456254899332)*phi_mod - (-4.485221418610227) -
                (574.5650117450465)*eta*eta - (-1073.0788156615606)*eta - (501.03277264196134));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0032408453076614645))/(0.0008439768795051475) -
                (364.39225362744844)*phi_mod*phi_mod - (-22.223981946051225)*phi_mod - (-1.8540887555296452) -
                (-296.2256004538523)*eta*eta - (537.4038080507895)*eta - (-243.62772286060687));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015951439534067572))/(-0.000899913352953018) -
                (516.0124329555605)*phi_mod*phi_mod - (21.957809348831677)*phi_mod - (-4.0217092342703324) -
                (-2973.9565650350487)*eta*eta - (5563.531184521952)*eta - (-2601.8429667104333));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030610329200113813))/(0.0008298676330514167) -
                (346.01503583493314)*phi_mod*phi_mod - (-18.98750540499318)*phi_mod - (-1.5942349015996087) -
                (-363.8846080510749)*eta*eta - (659.2062020690055)*eta - (-298.41295677330555));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010646726880053413))/(-0.000869503589058028) -
                (557.1756930632615)*phi_mod*phi_mod - (24.786529694095666)*phi_mod - (-4.024945057087805) -
                (1094.6340556236325)*eta*eta - (-2043.6653021356365)*eta - (953.8222718899143));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003256143682783376))/(0.0008418559216027315) -
                (368.17840182838404)*phi_mod*phi_mod - (-18.947441480785347)*phi_mod - (-1.9117100272156424) -
                (-308.4574789735993)*eta*eta - (555.9492942641924)*eta - (-250.3418588814018));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000808729940422323))/(-0.0008202142378074031) -
                (577.0048838093793)*phi_mod*phi_mod - (23.799602152534046)*phi_mod - (-3.0543933547551076) -
                (189.13494158865075)*eta*eta - (-368.7425691877703)*eta - (179.5945100076795));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0029175339501651683))/(0.0008161445103264425) -
                (458.3539413673982)*phi_mod*phi_mod - (-21.49718879566433)*phi_mod - (-2.3791173079305814) -
                (-357.9273349795559)*eta*eta - (646.0899647067687)*eta - (-291.20275572178866));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000992920719154798))/(-0.0008341134549249406) -
                (570.3880430976814)*phi_mod*phi_mod - (21.050833006619204)*phi_mod - (-3.24536675393806) -
                (498.2054821446977)*eta*eta - (-948.783977364976)*eta - (451.67900549702347));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002865191225998487))/(0.0008284289014583513) -
                (407.69278827904424)*phi_mod*phi_mod - (-22.337763411191734)*phi_mod - (-2.400354501115243) -
                (-393.63358856681253)*eta*eta - (712.5140254376581)*eta - (-322.0632247870026));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008729588734857356))/(-0.0008240068275318033) -
                (550.6034505126923)*phi_mod*phi_mod - (21.831597164106604)*phi_mod - (-3.0370330853478316) -
                (-6.967863515188142)*eta*eta - (-0.25772530189541315)*eta - (6.500767961997773));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028825096528952003))/(0.0008265392689499319) -
                (395.68443609269593)*phi_mod*phi_mod - (-20.446840151761624)*phi_mod - (-2.337307742137222) -
                (-346.14719852613223)*eta*eta - (627.8488116391175)*eta - (-284.4207656100862));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021453001539306162))/(-0.0009998973538601521) -
                (440.23885378041405)*phi_mod*phi_mod - (22.38108430019207)*phi_mod - (-2.1361213693250156) -
                (39.47241816836541)*eta*eta - (-61.56396092734207)*eta - (23.63783762218427));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003913501338163163))/(0.0010110164762975101) -
                (380.39584205350513)*phi_mod*phi_mod - (-21.988495987870788)*phi_mod - (-2.021927521829634) -
                (11.603250840188872)*eta*eta - (-25.874729554780217)*eta - (12.145566719731));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002319854364495844))/(-0.0010063516624927511) -
                (448.12446412592584)*phi_mod*phi_mod - (25.040659182384008)*phi_mod - (-2.1204553654476905) -
                (47.52757337469877)*eta*eta - (-73.96919226115739)*eta - (28.357067228644436));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038603351030290166))/(0.0010047798611599334) -
                (401.2513597434377)*phi_mod*phi_mod - (-19.940520644520042)*phi_mod - (-2.1736256368558746) -
                (24.449795533437317)*eta*eta - (-43.0644908834419)*eta - (17.917179261683298));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002202645201784389))/(-0.0010016930850124627) -
                (459.45846491797204)*phi_mod*phi_mod - (24.449862988438255)*phi_mod - (-2.199027219875288) -
                (35.63252627087604)*eta*eta - (-56.28858990809853)*eta - (21.87679926304432));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038696860212943307))/(0.001008711594339105) -
                (410.70197099551825)*phi_mod*phi_mod - (-19.768844734520084)*phi_mod - (-2.2614280111097655) -
                (37.31319623877281)*eta*eta - (-60.42562677040489)*eta - (23.772319307487294));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0023055227223401247))/(-0.0010052457336157442) -
                (447.3031862150835)*phi_mod*phi_mod - (22.406562157922412)*phi_mod - (-2.230253419835497) -
                (73.07443695355782)*eta*eta - (-108.72502517544707)*eta - (40.2886198704672));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0039720514636112855))/(0.001010111471348962) -
                (412.20272567748407)*phi_mod*phi_mod - (-20.064693613357356)*phi_mod - (-2.3017154422113584) -
                (128.1467080749943)*eta*eta - (-185.30658862647073)*eta - (66.78213106799966));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002095640037408369))/(-0.0009960931625783464) -
                (436.01148330993897)*phi_mod*phi_mod - (21.260865995448977)*phi_mod - (-2.2474011348812257) -
                (118.63154800026936)*eta*eta - (-171.3574772902565)*eta - (61.76868552105855));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003870734011214469))/(0.0010067477448258224) -
                (394.7521780633024)*phi_mod*phi_mod - (-22.13901369486822)*phi_mod - (-2.202401507810667) -
                (203.01573525700917)*eta*eta - (-288.46687343758754)*eta - (102.26132130849952));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001973736326385692))/(-0.0009896875158518976) -
                (426.1667052602704)*phi_mod*phi_mod - (22.253761965702395)*phi_mod - (-2.150831282850819) -
                (65.90796691017226)*eta*eta - (-97.92084847633356)*eta - (36.258606051055466));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003914623986290536))/(0.0010147390504870065) -
                (367.68822097132283)*phi_mod*phi_mod - (-19.09013386570281)*phi_mod - (-2.186981091151181) -
                (174.06126006276384)*eta*eta - (-247.46402610869302)*eta - (87.74749421996994));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007827681858178028))/(0.00015836229913230963) -
                (21.57143388646687)*phi_mod*phi_mod - (-13.290983810270243)*phi_mod - (0.09054824314285825) -
                (1588.9336956803202)*eta*eta - (1328.3018128397673)*eta - (273.1300101077737));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00365211146309584))/(0.0009757018692703479) -
                (-45.56671218830395)*phi_mod*phi_mod - (-3.6125973434498033)*phi_mod - (0.10020047338419229) -
                (-78.4259992253562)*eta*eta - (-293.5934239651716)*eta - (-274.47285634939624));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0022549743547399088))/(0.0005125510694086298) -
                (-30.790976498753057)*phi_mod*phi_mod - (-1.304183523373775)*phi_mod - (0.582698547576866) -
                (174.09678483868078)*eta*eta - (621.9381353166332)*eta - (552.1758765206636));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003524533415130404))/(0.0004186271851888) -
                (14.468510211561135)*phi_mod*phi_mod - (1.5445268558299703)*phi_mod - (0.5959150797574216) -
                (106.03549798519866)*eta*eta - (363.98922371604107)*eta - (307.02444719759905));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0009438441281099869))/(0.0006161681711400394) -
                (-31.652769372561433)*phi_mod*phi_mod - (0.5017807128941257)*phi_mod - (0.5648273499863489) -
                (-209.8444611622405)*eta*eta - (-837.8893900863732)*eta - (-835.2671058816973));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004286612159301487))/(0.0003410911963369056) -
                (-20.963539363790996)*phi_mod*phi_mod - (2.211127964296025)*phi_mod - (0.5734431115751039) -
                (-162.9817467510357)*eta*eta - (-669.8397667562397)*eta - (-685.9411846815015));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004524495050832257))/(0.00032030032623575405) -
                (-55.9339424732275)*phi_mod*phi_mod - (-4.5663705066029925)*phi_mod - (0.2112505789753781) -
                (117.43335968013608)*eta*eta - (410.06005153759946)*eta - (353.72998877909725));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0017017748272949399))/(0.0005544592565116592) -
                (-59.99348864925743)*phi_mod*phi_mod - (-2.2834313751000894)*phi_mod - (0.5470587916248464) -
                (84.07200698818727)*eta*eta - (289.30132276417805)*eta - (245.36747627200583));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00290687498223413))/(0.000461073448457001) -
                (-43.64506960010135)*phi_mod*phi_mod - (1.893270019482055)*phi_mod - (0.7553678717856006) -
                (152.6272372975291)*eta*eta - (542.7346087538928)*eta - (478.91576808080146));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.016614184586932628))/(-0.004715855409215626) -
                (-154.6362083006475)*phi_mod*phi_mod - (-0.676715029386766)*phi_mod - (1.94417810864524) -
                (206.3956049473457)*eta*eta - (356.746892600067)*eta - (153.45505363612025));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01167885764551407))/(0.004657888273934689) -
                (-0.8566972225378862)*phi_mod*phi_mod - (-24.913787754346664)*phi_mod - (4.125684617699901) -
                (-407.90026472444555)*eta*eta - (-680.1786770969511)*eta - (-283.3671966749578));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017239182187955702))/(-0.004792523568611933) -
                (-23.067348817241385)*phi_mod*phi_mod - (22.20884311006316)*phi_mod - (3.824024431219327) -
                (421.0295980344065)*eta*eta - (717.5189272316258)*eta - (304.81960794810345));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008604372261472907))/(0.004450671426726427) -
                (-109.07279475550833)*phi_mod*phi_mod - (5.997080337679908)*phi_mod - (2.3860705629648544) -
                (-1239.1611701205363)*eta*eta - (-2022.5028171885604)*eta - (-825.1264397598381));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0054937233874226025))/(-0.001844702564862919) -
                (-118.34421676100222)*phi_mod*phi_mod - (-5.664160209052331)*phi_mod - (1.7388170761414112) -
                (70.513326105086)*eta*eta - (149.8886400666733)*eta - (79.16410935293037));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002033253849898602))/(0.0018163585930771645) -
                (-129.90334551013584)*phi_mod*phi_mod - (5.897568038299504)*phi_mod - (1.9693004238611205) -
                (-14.435506131390751)*eta*eta - (-31.79464748220793)*eta - (-17.296465621915765));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009506412635897969))/(-0.0033450933165972583) -
                (-74.07839469534838)*phi_mod*phi_mod - (5.106299550553932)*phi_mod - (1.8915378849176725) -
                (116.26187798491016)*eta*eta - (-53.77425267913466)*eta - (6.1899614156736344));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011583146021924706))/(0.0034231909439357442) -
                (-106.41296331833775)*phi_mod*phi_mod - (4.564539308982298)*phi_mod - (1.159493803826078) -
                (-21.12420402850004)*eta*eta - (18.4816881895046)*eta - (-3.2497622014483585));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00892089597402662))/(-0.003420893642626427) -
                (-135.34853423721657)*phi_mod*phi_mod - (-2.8228923670214385)*phi_mod - (0.9140730897919181) -
                (-3547.3112673836886)*eta*eta - (1854.8646445303452)*eta - (-242.23722703367685));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013149617834722084))/(0.003542420973723685) -
                (-35.57649813894851)*phi_mod*phi_mod - (-3.7115907532554693)*phi_mod - (0.7644636148164845) -
                (654.1412873925775)*eta*eta - (-329.20578802467594)*eta - (41.522612979850315));}

    else if (seg_combination_id == 100902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037767722122110667))/(-0.0011869073547231966) -
                (254.68528754421035)*phi_mod*phi_mod - (15.978561438840806)*phi_mod - (-1.3626654494545767) -
                (-157.30087293581875)*eta*eta - (77.79199420975308)*eta - (-9.446882817409437));}

    else if (seg_combination_id == 100902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.013077341467444612))/(0.0007043179138219865) -
                (849.9586556770665)*phi_mod*phi_mod - (-32.66623632848432)*phi_mod - (-5.650307086564307) -
                (8172.406913264613)*eta*eta - (-3951.8550149526045)*eta - (475.58765703039967));}

    else if (seg_combination_id == 100902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003237936958717786))/(-0.0011256942450966617) -
                (268.1135256411638)*phi_mod*phi_mod - (18.89220279585935)*phi_mod - (-1.2773305573283509) -
                (-68.11128939433331)*eta*eta - (23.711186781779112)*eta - (-1.4205227146745956));}

    else if (seg_combination_id == 100902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.06413324748597604))/(-0.0008457849701419325) -
                (-757.5565000059773)*phi_mod*phi_mod - (87.64053608529349)*phi_mod - (0.9525310384070178) -
                (45066.666497058526)*eta*eta - (-21842.666585901152)*eta - (2641.544990398205));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.03005940933822643))/(0.0010620009776763889) -
                (54.69619650364661)*phi_mod*phi_mod - (-4.769230641972911)*phi_mod - (-0.7793182426791373) -
                (-85.79577632614787)*eta*eta - (-99.42441556610034)*eta - (-28.688809174839275));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005590555538453654))/(-0.0007803040749363322) -
                (41.982968984158596)*phi_mod*phi_mod - (1.5586230928613947)*phi_mod - (-0.7494265614278939) -
                (-90.5520959558818)*eta*eta - (386.67237855277176)*eta - (-412.3985768694866));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016909213545602216))/(0.0008096207172510325) -
                (39.094744523368945)*phi_mod*phi_mod - (-0.8762219861638868)*phi_mod - (-0.07690087199211806) -
                (-239.53021686808222)*eta*eta - (1004.8929033182022)*eta - (-1053.3355203451656));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00045632325822801516))/(-0.0007779864702857) -
                (40.258890759367674)*phi_mod*phi_mod - (0.8790626247078762)*phi_mod - (-0.7326530605908552) -
                (-81.08519176480927)*eta*eta - (345.82492805207767)*eta - (-368.4214478874888));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001273440813400643))/(0.0007986283056393503) -
                (37.699109993489806)*phi_mod*phi_mod - (-0.8096876151611039)*phi_mod - (-0.04568954960016907) -
                (-83.89025123820859)*eta*eta - (361.08449135647584)*eta - (-387.59768197539995));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000687354620345963))/(-0.0007899457467585761) -
                (37.415737929232)*phi_mod*phi_mod - (0.2933705094224911)*phi_mod - (-0.6667587961519476) -
                (-53.658218819282325)*eta*eta - (233.0642944190549)*eta - (-252.55237471271488));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0019068210818466039))/(0.0008136562637893445) -
                (46.78627356753694)*phi_mod*phi_mod - (-0.825450297641026)*phi_mod - (-0.28038809887344995) -
                (-198.69082832006168)*eta*eta - (833.38844945357)*eta - (-873.4227212370663));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004750224872880727))/(-0.000778623721527404) -
                (39.769505738675576)*phi_mod*phi_mod - (1.1937284959939662)*phi_mod - (-0.7187524005302497) -
                (-58.6679032091083)*eta*eta - (253.5448413298168)*eta - (-273.4508433422278));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012965255114084254))/(0.0007899062561475247) -
                (49.763258499081196)*phi_mod*phi_mod - (-1.8657232696373665)*phi_mod - (-0.24411430879543788) -
                (-70.84284096283513)*eta*eta - (310.69448829586577)*eta - (-339.1680509412805));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006716628142588579))/(-0.000787178826924455) -
                (39.254078488754466)*phi_mod*phi_mod - (1.0068586124431294)*phi_mod - (-0.7135287962435466) -
                (-5.652445038723502)*eta*eta - (33.099651538466105)*eta - (-44.290392074821895));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002147513385330551))/(0.0008180992361399985) -
                (48.946437393394255)*phi_mod*phi_mod - (-2.840652948953985)*phi_mod - (-0.2928155590367562) -
                (-95.55303414298211)*eta*eta - (407.766231325874)*eta - (-434.26091262626187));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005644759310346482))/(-0.0007756014897574304) -
                (44.098093042570575)*phi_mod*phi_mod - (0.34962413774299334)*phi_mod - (-0.7908180863898958) -
                (-19.40249743973284)*eta*eta - (90.06704823764433)*eta - (-103.2928346024476));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010767727175378281))/(0.0007776890424702864) -
                (46.37451388554594)*phi_mod*phi_mod - (-0.28040223194357733)*phi_mod - (-0.24323417984505158) -
                (-75.06897930678004)*eta*eta - (323.9372779418912)*eta - (-348.5296128798025));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007142812046557581))/(-0.0007922954982257693) -
                (40.94350054244814)*phi_mod*phi_mod - (1.7595823695598318)*phi_mod - (-0.7301969838737011) -
                (-24.494522086115076)*eta*eta - (111.7880387815414)*eta - (-126.46455416710198));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015757675131428314))/(0.0007983853656537731) -
                (46.00107941294443)*phi_mod*phi_mod - (-2.101495635437758)*phi_mod - (-0.3276113824614741) -
                (-37.902534999316345)*eta*eta - (166.35497076171728)*eta - (-181.67253956725844));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005981525238012058))/(-0.0007822381374197664) -
                (42.62381598988238)*phi_mod*phi_mod - (1.5997966909779278)*phi_mod - (-0.7231730043789918) -
                (-92.18574360398391)*eta*eta - (392.1849117685327)*eta - (-416.7957694306731));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013172237571040068))/(0.0007961204008064989) -
                (48.44333583739854)*phi_mod*phi_mod - (-1.2344021807963073)*phi_mod - (-0.4277703374807556) -
                (-157.79898737371286)*eta*eta - (661.0197386572913)*eta - (-691.8432086235254));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004419652253036826))/(-0.00261271005422404) -
                (-135.5674609982934)*phi_mod*phi_mod - (-14.735719900108709)*phi_mod - (1.8318219602131287) -
                (2483.9746392757997)*eta*eta - (-1353.2565385322098)*eta - (184.00719930165565));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009383574627739297))/(0.0027453827600252105) -
                (-86.74220128554413)*phi_mod*phi_mod - (10.487151269260487)*phi_mod - (0.9355958906243274) -
                (219.130873498001)*eta*eta - (-106.3786907062667)*eta - (12.949446295362025));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009339208599479034))/(-0.002810719960139246) -
                (-126.8449450886134)*phi_mod*phi_mod - (-4.768045296326644)*phi_mod - (1.871110622300224) -
                (202.8841793859651)*eta*eta - (-117.24782556713912)*eta - (16.782613425513492));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00820192377643115))/(0.0026389726211975026) -
                (-87.53994837395668)*phi_mod*phi_mod - (6.62800980468422)*phi_mod - (1.3109411679307956) -
                (-329.401918996711)*eta*eta - (169.84187363187382)*eta - (-21.7322981882791));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007333045361882305))/(-0.0027313651893282847) -
                (-117.04334866954139)*phi_mod*phi_mod - (-9.53679660307441)*phi_mod - (1.3573365592043867) -
                (-2070.8696184156047)*eta*eta - (1063.7414746382774)*eta - (-136.29962473618204));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009523496618751202))/(0.002739585359229131) -
                (-87.94268098402836)*phi_mod*phi_mod - (6.5878287001028575)*phi_mod - (1.1538179016888954) -
                (-196.24661113584844)*eta*eta - (96.66318105726833)*eta - (-11.772476984641427));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003892431583813087))/(-0.0026101898640138173) -
                (-121.38435577469743)*phi_mod*phi_mod - (-6.351427829401369)*phi_mod - (1.6865034814091797) -
                (1163.73788193594)*eta*eta - (-631.5494699978656)*eta - (85.50043085304448));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009319516961419218))/(0.0026973503553481266) -
                (-83.46693175550462)*phi_mod*phi_mod - (4.458075047405095)*phi_mod - (1.260674198655115) -
                (-81.68697190966678)*eta*eta - (42.73998438615966)*eta - (-5.47661799692448));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009267372452349739))/(0.003165431811567562) -
                (-45.70996851734197)*phi_mod*phi_mod - (3.2730694788215886)*phi_mod - (1.2880402715075723) -
                (-623.4789041860279)*eta*eta - (328.83121641779536)*eta - (-42.677327145065654));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009050293440279498))/(-0.0027952213260641918) -
                (-118.52086203557654)*phi_mod*phi_mod - (-8.591075757835487)*phi_mod - (1.6343214374593806) -
                (-2284.0623592881702)*eta*eta - (1184.7912486693126)*eta - (-153.48160309427269));}

    else if (seg_combination_id == 50301 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007877105189131152))/(0.002617761816613088) -
                (-77.84670488933342)*phi_mod*phi_mod - (7.261133946740555)*phi_mod - (0.9791679248387818) -
                (-270.1056783977766)*eta*eta - (138.14303088877344)*eta - (-17.50664333335838));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01446520714545405))/(-0.00011740607070966706) -
                (21.79017131151943)*phi_mod*phi_mod - (1.5924577945829081)*phi_mod - (-2.692182632376825) -
                (-22.080728691039102)*eta*eta - (38.70068077172425)*eta - (-17.332676150319806));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014364087441388562))/(-0.00018379280222800557) -
                (77.40904949300102)*phi_mod*phi_mod - (-9.067365386935988)*phi_mod - (-2.650701759565954) -
                (-961.996023780404)*eta*eta - (1777.4772540403)*eta - (-820.6658366233544));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.016984675740338757))/(-0.00037701466548232306) -
                (54.800152649573086)*phi_mod*phi_mod - (-6.231225440796178)*phi_mod - (-1.6516747260736162) -
                (1622.0576534853878)*eta*eta - (-3091.327738024592)*eta - (1471.656863412616));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.015611690589238177))/(-0.00021645403040563595) -
                (74.41833390554274)*phi_mod*phi_mod - (-6.92937334445601)*phi_mod - (-2.075716858234498) -
                (864.5856752431919)*eta*eta - (-1691.7353902848556)*eta - (825.2777799086882));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01158722911860954))/(5.140886755823285e-05) -
                (-133.826512732186)*phi_mod*phi_mod - (5.352549969714111)*phi_mod - (3.7653059383915117) -
                (-28133.317913252256)*eta*eta - (52515.97112038555)*eta - (-24504.64064591316));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.007918414657279667))/(0.0006336539746902673) -
                (-70.36904366673416)*phi_mod*phi_mod - (2.2294333117509733)*phi_mod - (1.6093068486527864) -
                (-714.6312686268773)*eta*eta - (1390.7465109431575)*eta - (-675.6712364888157));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008404109479374276))/(-0.002438506055890196) -
                (-89.52665139351676)*phi_mod*phi_mod - (-4.746158589004839)*phi_mod - (1.0097739292810473) -
                (-64.20294824940393)*eta*eta - (-60.42126128491948)*eta - (-13.727845080273859));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0060974230794954695))/(0.0023983649819913984) -
                (-89.87682697040506)*phi_mod*phi_mod - (5.186063560255331)*phi_mod - (1.1213687341557155) -
                (-70.23200134415333)*eta*eta - (-66.50583866104701)*eta - (-15.129809040959621));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008201768605810025))/(-0.0024352051542090507) -
                (-95.29149549190747)*phi_mod*phi_mod - (-4.6823191504734165)*phi_mod - (1.1335589362285512) -
                (-51.70565543501757)*eta*eta - (-46.73114957267344)*eta - (-10.007935615293599));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00602292475716091))/(0.002407389235220462) -
                (-93.62518518296427)*phi_mod*phi_mod - (5.8866632460605235)*phi_mod - (1.1261040183694662) -
                (-75.6572753906354)*eta*eta - (-72.36841027361191)*eta - (-16.719201585753243));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00791309898901913))/(-0.0024167531801571277) -
                (-96.01004174896164)*phi_mod*phi_mod - (-5.279963438856017)*phi_mod - (1.1428085325025428) -
                (-29.171271338325223)*eta*eta - (-22.536625288309295)*eta - (-3.4820074612183003));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006190072191225703))/(0.0024083397762580463) -
                (-90.40312276784839)*phi_mod*phi_mod - (5.031744786244785)*phi_mod - (1.136419510555747) -
                (11.539813303310904)*eta*eta - (22.037749032123063)*eta - (8.847380492986346));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00836961779662892))/(-0.0024304285295951166) -
                (-96.12615882635838)*phi_mod*phi_mod - (-6.337580777165893)*phi_mod - (1.1126874027035025) -
                (-68.98027629910644)*eta*eta - (-65.3983865925074)*eta - (-15.007044731742818));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005994322017481789))/(0.002408061296056569) -
                (-97.76243103628542)*phi_mod*phi_mod - (3.941527182737702)*phi_mod - (1.2282286151485067) -
                (-80.9469818581041)*eta*eta - (-77.76338260899117)*eta - (-18.044339836044124));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008644528820929953))/(-0.0024289172166975593) -
                (-100.24066302328055)*phi_mod*phi_mod - (-4.828147307441043)*phi_mod - (1.285440644535549) -
                (-79.64643651608507)*eta*eta - (-75.79419336231886)*eta - (-17.45441016872247));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006244650819638908))/(0.0023948521285343436) -
                (-89.74056457150924)*phi_mod*phi_mod - (4.111570112489275)*phi_mod - (1.1895981038230279) -
                (-80.08927783693846)*eta*eta - (-76.53071867419784)*eta - (-17.610927006616784));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006719552864121052))/(-0.0024247932901192188) -
                (-102.30062853873322)*phi_mod*phi_mod - (-4.932261795393018)*phi_mod - (1.1643873146103727) -
                (967.2653056847045)*eta*eta - (927.9674044275438)*eta - (222.41981585383238));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006357467709111834))/(0.0024276755332949367) -
                (-84.89787948221958)*phi_mod*phi_mod - (5.382135358797467)*phi_mod - (1.2429362239394321) -
                (-212.50870426077992)*eta*eta - (-212.52788729065972)*eta - (-52.98155008421312));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006672375555955634))/(-0.002678577019608661) -
                (-111.25974948783183)*phi_mod*phi_mod - (-3.4689780858243053)*phi_mod - (1.4621779967628956) -
                (-2245.7535384140847)*eta*eta - (-1111.6275343045675)*eta - (-137.3338444536776));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0043077721713199535))/(0.0025993224187902376) -
                (-123.90839159458943)*phi_mod*phi_mod - (5.548973250611397)*phi_mod - (1.6559854137412526) -
                (91.84556819219755)*eta*eta - (54.12672365094072)*eta - (7.858072930261307));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005412559853204069))/(-0.002627915024832109) -
                (-129.75984325893316)*phi_mod*phi_mod - (-2.6915722417421555)*phi_mod - (1.6767419994942454) -
                (483.6358401175222)*eta*eta - (218.8353294664788)*eta - (24.59946285472191));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004654800333068381))/(0.002561536709764279) -
                (-117.66902170613888)*phi_mod*phi_mod - (5.133887943734661)*phi_mod - (1.7137843576284533) -
                (-449.33340098462634)*eta*eta - (-217.74973086055655)*eta - (-26.266114541605297));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.013722822527089352))/(-0.0029083635580353286) -
                (-93.63360485075842)*phi_mod*phi_mod - (-5.769977748927747)*phi_mod - (1.231648734393326) -
                (-68.19125344061125)*eta*eta - (-90.07580314136456)*eta - (-17.752688109383335));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007831975313744953))/(0.0027242103824470397) -
                (-113.352326757081)*phi_mod*phi_mod - (6.953656685639904)*phi_mod - (1.6114221222821299) -
                (2104.2317633621237)*eta*eta - (1104.0192274154763)*eta - (144.6813561465436));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011284387229955483))/(-0.003290713214484886) -
                (-101.43175940783298)*phi_mod*phi_mod - (-2.4259607884703107)*phi_mod - (1.4404342493750513) -
                (440.4159454905094)*eta*eta - (210.60981150255438)*eta - (25.209208123321165));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01113874582864152))/(0.0031772814141182697) -
                (-99.43689902817829)*phi_mod*phi_mod - (3.251123610946764)*phi_mod - (1.4273416807978543) -
                (-1412.8624760945627)*eta*eta - (-767.6209279548434)*eta - (-103.88353144273972));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01096119755041324))/(-0.0028023576110566845) -
                (-111.13809881373052)*phi_mod*phi_mod - (-3.6557991182297727)*phi_mod - (1.6458838355635605) -
                (-1313.016433696788)*eta*eta - (-648.795389626376)*eta - (-80.04299284737777));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009055710369833714))/(0.0027593357038545067) -
                (-115.6356654702511)*phi_mod*phi_mod - (5.736866623593484)*phi_mod - (1.599785716190732) -
                (-336.8626134390951)*eta*eta - (-174.4536271905905)*eta - (-22.547896721965774));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011476319529677785))/(-0.004651113560788168) -
                (-109.61245839423964)*phi_mod*phi_mod - (-4.249846439005296)*phi_mod - (1.8675983812961265) -
                (-876.4509003234391)*eta*eta - (1200.286381803231)*eta - (-410.37948297673466));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.019339932753462095))/(0.004835630855353212) -
                (16.125725069648926)*phi_mod*phi_mod - (-29.4855950447306)*phi_mod - (3.979273745107272) -
                (-1117.379394069778)*eta*eta - (1524.5783606847924)*eta - (-519.5216169523823));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012636048524575647))/(-0.004737909832531274) -
                (51.484631634483755)*phi_mod*phi_mod - (38.32169788844075)*phi_mod - (4.311068591850336) -
                (-732.181218098457)*eta*eta - (1000.7368330525284)*eta - (-341.2848600476497));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01841185714685454))/(0.004765022248434668) -
                (-122.95751777235469)*phi_mod*phi_mod - (3.05140805646259)*phi_mod - (1.6597078319258616) -
                (-1465.785890829073)*eta*eta - (2018.9319553398516)*eta - (-694.8218888685725));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006746998865007582))/(-0.0021154576835875506) -
                (-59.30504209488529)*phi_mod*phi_mod - (-4.605771369340302)*phi_mod - (0.8469344695441742) -
                (151.42821813907625)*eta*eta - (170.81410540944486)*eta - (47.91523368511022));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006448625535788669))/(-0.002106113519569758) -
                (-61.10881027562824)*phi_mod*phi_mod - (-3.5395662783059496)*phi_mod - (0.8993310100209497) -
                (55.46541861093593)*eta*eta - (54.141424057664445)*eta - (12.470305191168084));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007758884060886501))/(-0.0022972978896473326) -
                (-91.4905020046691)*phi_mod*phi_mod - (-5.337036995311161)*phi_mod - (1.1695795994129718) -
                (-113.08501260719846)*eta*eta - (-143.11881660258493)*eta - (-45.181870932188374));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0051210984216405525))/(0.0022735571823883044) -
                (-93.80302423952539)*phi_mod*phi_mod - (5.010224021652809)*phi_mod - (1.3161548789893345) -
                (-599.9880158915928)*eta*eta - (-779.7046924195232)*eta - (-253.1895534838359));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006961043623733663))/(-0.0021273422427003086) -
                (-64.32209579272015)*phi_mod*phi_mod - (-5.155815917710174)*phi_mod - (0.9404336877424261) -
                (463.4648138967112)*eta*eta - (547.853098791449)*eta - (161.70421033764416));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007893619859375381))/(-0.0021527971288330503) -
                (-77.91094853908068)*phi_mod*phi_mod - (-5.4707679827841185)*phi_mod - (1.369029971689178) -
                (-87.34133057762398)*eta*eta - (-109.853015307007)*eta - (-34.458658367662665));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007105577692479386))/(-0.002122023413490226) -
                (-52.18765850038204)*phi_mod*phi_mod - (-4.513501207062105)*phi_mod - (0.7209086501633986) -
                (241.07057534744337)*eta*eta - (275.8979190088176)*eta - (78.52702996619111));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0019406655097993883))/(0.0020028921287081995) -
                (-148.67924363354578)*phi_mod*phi_mod - (18.62526451145749)*phi_mod - (1.3354236009884817) -
                (-3310.2667756011106)*eta*eta - (-4226.554455711545)*eta - (-1348.518416146177));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (7.985917791933425e-05))/(-0.0008006819797599095) -
                (-154.32478832371356)*phi_mod*phi_mod - (5.849084990244618)*phi_mod - (2.9858083924256302) -
                (-662.0712812385519)*eta*eta - (-1907.798985729966)*eta - (-1374.210703391181));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-6.837908112695053e-05))/(0.0007264135108940454) -
                (-172.90978565437595)*phi_mod*phi_mod - (-4.477636513744285)*phi_mod - (5.697325751793765) -
                (889.738691608802)*eta*eta - (2442.428993263864)*eta - (1675.2834736754085));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00027495588801616176))/(-0.0008192484926155259) -
                (-161.97693795814214)*phi_mod*phi_mod - (6.751830176486914)*phi_mod - (3.0227357071683247) -
                (-474.93611448964947)*eta*eta - (-1364.1557573838274)*eta - (-979.4645919966288));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002983519371362055))/(0.0006235339145903873) -
                (-175.66311204022426)*phi_mod*phi_mod - (-5.3384397523854705)*phi_mod - (5.386659070750165) -
                (-1057.1162742499098)*eta*eta - (-3067.4281802458963)*eta - (-2222.863811278628));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0002566447099723961))/(-0.0007739592978993696) -
                (-153.75764001212065)*phi_mod*phi_mod - (5.779465839803895)*phi_mod - (3.0647648820837254) -
                (-146.3095220115649)*eta*eta - (-408.3037498442194)*eta - (-284.5303326667016));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008079868296495347))/(0.0007479024345844941) -
                (-194.46431703906163)*phi_mod*phi_mod - (-4.768835929679329)*phi_mod - (6.536582055885547) -
                (712.9359746730845)*eta*eta - (1960.39764162755)*eta - (1346.9825746928143));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0008638162780987768))/(-0.0007083689221407642) -
                (-115.19819864222578)*phi_mod*phi_mod - (3.952276048235231)*phi_mod - (2.814272510517818) -
                (-394.57832304723684)*eta*eta - (-1124.3522916675274)*eta - (-800.7160547244573));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0004680186283990471))/(0.0007036960611766734) -
                (-185.28897144310432)*phi_mod*phi_mod - (-6.229527467701963)*phi_mod - (6.02874794724498) -
                (277.2790171656755)*eta*eta - (717.8788025318574)*eta - (461.28381673821315));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004930784897414631))/(-0.0008040379388286129) -
                (-174.60436423172771)*phi_mod*phi_mod - (7.350217006194113)*phi_mod - (3.84357871965049) -
                (-800.1792988175907)*eta*eta - (-2313.2673051200914)*eta - (-1671.6578477436065));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0004030340798736903))/(0.000708436028035233) -
                (-193.12658793254167)*phi_mod*phi_mod - (-4.290595715216638)*phi_mod - (6.057874618940003) -
                (-523.6565628796919)*eta*eta - (-1515.5554981914204)*eta - (-1095.5925657071577));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005757111423763371))/(-0.0008366525780586242) -
                (-173.4106485417966)*phi_mod*phi_mod - (7.923956439552748)*phi_mod - (3.081977805500775) -
                (-569.6493707435591)*eta*eta - (-1637.9800117655122)*eta - (-1177.3335912719697));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0032731393761563973))/(0.0006142098269333881) -
                (-120.05003316241495)*phi_mod*phi_mod - (-2.7365224083150164)*phi_mod - (3.278198921397716) -
                (-259.994055060927)*eta*eta - (-796.5222861065164)*eta - (-606.1390504762367));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00019366460803839675))/(-0.0008090103156607029) -
                (-161.12105077666723)*phi_mod*phi_mod - (6.336951077258629)*phi_mod - (3.0728923253606846) -
                (-394.08489690687117)*eta*eta - (-1127.4544268107672)*eta - (-806.2483594742823));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-9.023614012377384e-05))/(0.0007124927082975396) -
                (-158.34838494416985)*phi_mod*phi_mod - (-5.080663847583683)*phi_mod - (5.135862277474431) -
                (-409.89008736932294)*eta*eta - (-1190.0022240067574)*eta - (-862.7513244319024));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00040368550008426483))/(-0.0008188998046831133) -
                (-156.90031456143666)*phi_mod*phi_mod - (7.031888007602995)*phi_mod - (2.9063906895701077) -
                (-327.15518485664774)*eta*eta - (-938.5340301248656)*eta - (-673.0811125229776));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0005736823367205744))/(0.0007081807000200416) -
                (-155.78814880750764)*phi_mod*phi_mod - (-4.210919875059274)*phi_mod - (4.76845106957457) -
                (376.2845570586011)*eta*eta - (989.0841505364169)*eta - (646.8576540502621));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.023045071380091015))/(-0.0030714327408741717) -
                (-117.58365884378223)*phi_mod*phi_mod - (-3.7414559433721633)*phi_mod - (2.364020390320266) -
                (8766.16917046475)*eta*eta - (-8394.587080323616)*eta - (2009.5085982966425));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00810354431485597))/(0.0024734895664541624) -
                (-58.4319133283963)*phi_mod*phi_mod - (4.680849309303687)*phi_mod - (0.6828033519188309) -
                (-263.36171696796225)*eta*eta - (252.9030030835562)*eta - (-60.47499532683899));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005017618800118905))/(-0.0024498940366094652) -
                (-63.40139079367394)*phi_mod*phi_mod - (2.333844043529208)*phi_mod - (0.949154287682841) -
                (-7693.818973291774)*eta*eta - (7414.496999433903)*eta - (-1785.9353764126179));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00756661355199931))/(0.002464869995641445) -
                (-62.02354036522829)*phi_mod*phi_mod - (5.768898085783655)*phi_mod - (0.6097689153662683) -
                (-422.7221294136574)*eta*eta - (401.22680542088324)*eta - (-94.97923272420712));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.015078570950370527))/(-0.002751501102551979) -
                (-129.07260057136372)*phi_mod*phi_mod - (-2.9073326950593312)*phi_mod - (2.5914880756022596) -
                (-7318.7746905533295)*eta*eta - (7025.636947072435)*eta - (-1685.6982031263146));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0073492295898858265))/(0.0024370509032203467) -
                (-64.43789586841386)*phi_mod*phi_mod - (4.802689863395805)*phi_mod - (0.8989432500118933) -
                (-124.35882245386644)*eta*eta - (128.1876984234657)*eta - (-32.57498469823018));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007518176418806403))/(-0.0025610153784063226) -
                (-139.70072653420365)*phi_mod*phi_mod - (-7.231281710278535)*phi_mod - (1.938583931524841) -
                (-2280.3892829434913)*eta*eta - (2114.0042657756812)*eta - (-489.4103610940414));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007870090828952007))/(0.002459008593556907) -
                (-69.93935904014148)*phi_mod*phi_mod - (3.760513376389203)*phi_mod - (0.9881550120257497) -
                (-423.42384807134897)*eta*eta - (405.831554680261)*eta - (-96.97186578074825));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004108965486990285))/(-0.0024375704533127437) -
                (-151.42556546767636)*phi_mod*phi_mod - (-2.6091289495104837)*phi_mod - (2.2178566467562586) -
                (-10551.474584552901)*eta*eta - (10196.093487558894)*eta - (-2462.7286998533523));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009213655948449005))/(0.0025171701987434835) -
                (-60.34713790678552)*phi_mod*phi_mod - (2.9209343341381158)*phi_mod - (0.8604763471437715) -
                (-114.01385408273543)*eta*eta - (109.68875282442609)*eta - (-26.202145917051446));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007067297683835064))/(-0.0025279765647415113) -
                (-96.22536871103844)*phi_mod*phi_mod - (-5.662256517511956)*phi_mod - (1.4524454958272115) -
                (35.764203199834355)*eta*eta - (-38.193710005251695)*eta - (9.914378786335151));}

    else if (seg_combination_id == 50301 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008104099943546007))/(0.0024859707104430244) -
                (-91.5607186586069)*phi_mod*phi_mod - (5.545356083707868)*phi_mod - (1.3068536418141388) -
                (-50.358883056670194)*eta*eta - (37.182767739216615)*eta - (-6.604394550673862));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036268420067184317))/(-0.0020521168273445844) -
                (-87.3091050872656)*phi_mod*phi_mod - (-4.150756223381538)*phi_mod - (1.4532015844813106) -
                (-458.8212918122453)*eta*eta - (863.6429373907387)*eta - (-406.3308941623498));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0065153677062047026))/(0.002016193778295559) -
                (-117.87205505174262)*phi_mod*phi_mod - (5.640486405110082)*phi_mod - (2.1745926429730904) -
                (399.79020645867763)*eta*eta - (-750.6996963558871)*eta - (352.4111024214488));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004063945490935902))/(-0.0011945641875911969) -
                (297.42776569434653)*phi_mod*phi_mod - (21.0213120269294)*phi_mod - (-1.2677601841556259) -
                (-499.561832466456)*eta*eta - (-209.4479529673256)*eta - (-21.745197977174392));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012940977821609247))/(0.0011573472565965949) -
                (720.6337413207459)*phi_mod*phi_mod - (-43.94163520025073)*phi_mod - (-3.412483713605135) -
                (285.1314239659281)*eta*eta - (171.98540598650777)*eta - (24.27247880901155));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004207585387368271))/(-0.001204883677169237) -
                (308.87312310007286)*phi_mod*phi_mod - (22.887543634156895)*phi_mod - (-1.306022583253879) -
                (-166.89240021222315)*eta*eta - (-70.18610761377461)*eta - (-7.2493082829839235));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0002331144178512812))/(0.0011668042856948647) -
                (655.0609128946897)*phi_mod*phi_mod - (-31.668385477224327)*phi_mod - (-4.418168352257763) -
                (-1962.1637275400487)*eta*eta - (-828.9139691233527)*eta - (-86.9019871041555));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004460001137877335))/(-0.001219231169587479) -
                (305.9844075190576)*phi_mod*phi_mod - (21.457243277763745)*phi_mod - (-1.2723181808427841) -
                (-346.2323865571004)*eta*eta - (-143.78014749164595)*eta - (-14.791708140454816));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034206362387226735))/(0.0012384043504126655) -
                (565.5120660179396)*phi_mod*phi_mod - (-20.353389972624786)*phi_mod - (-3.429203940295181) -
                (-4346.565585146285)*eta*eta - (-1991.5494646128484)*eta - (-227.8974436866331));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003970235477052779))/(-0.001196353869919275) -
                (328.7821065495302)*phi_mod*phi_mod - (21.773093529432387)*phi_mod - (-1.5257897341794786) -
                (-386.36583907210513)*eta*eta - (-165.9476642576244)*eta - (-17.649488525986047));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005652006100909297))/(0.001315941279898832) -
                (634.1198167289953)*phi_mod*phi_mod - (-37.315512263050834)*phi_mod - (-3.9911605266172647) -
                (-3662.734215509242)*eta*eta - (-1602.8841097076238)*eta - (-174.78198663393687));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004147147111656401))/(-0.0012005455489586885) -
                (252.08653518325679)*phi_mod*phi_mod - (12.626379477094726)*phi_mod - (-1.3437647535292414) -
                (-476.40339441380854)*eta*eta - (-196.58113066819425)*eta - (-20.047412765625293));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004091064867863167))/(0.0012403218847413708) -
                (494.6371362260054)*phi_mod*phi_mod - (-16.629378011342)*phi_mod - (-2.7592263930326273) -
                (-2378.6901728763187)*eta*eta - (-1089.8904582648915)*eta - (-124.59960559466398));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0019213749088526871))/(-0.0010263715424879236) -
                (153.01934644946343)*phi_mod*phi_mod - (13.627726475262733)*phi_mod - (-0.39906597039236125) -
                (-598.2525801030398)*eta*eta - (-256.98615666333154)*eta - (-27.195332936965922));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001090753375353664))/(-0.0006821256150997072) -
                (232.71129176909537)*phi_mod*phi_mod - (-5.8275640146588055)*phi_mod - (-3.671089474810228) -
                (162.1450065578606)*eta*eta - (561.3043053862706)*eta - (485.7672045526003));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0005998467195751249))/(0.0007468561954926249) -
                (237.66225689678495)*phi_mod*phi_mod - (6.959259100052474)*phi_mod - (-7.065511110669593) -
                (-202.49626070845176)*eta*eta - (-708.6174935367172)*eta - (-619.1438681793712));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012167774281130782))/(-0.0006880052647260329) -
                (229.06829329832001)*phi_mod*phi_mod - (-5.613456384440679)*phi_mod - (-3.6368461978758444) -
                (285.409678941978)*eta*eta - (994.6900559171175)*eta - (866.6226971091676));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00027259416993410365))/(0.0007509145118266088) -
                (242.14680492579456)*phi_mod*phi_mod - (5.009291743224169)*phi_mod - (-6.995729177836824) -
                (-732.6273274354033)*eta*eta - (-2492.8960691363336)*eta - (-2120.405640949574));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001158182000876539))/(-0.0006842856978567087) -
                (242.8613651916118)*phi_mod*phi_mod - (-7.058698082567323)*phi_mod - (-3.8209097889442516) -
                (320.44587851991344)*eta*eta - (1117.4712104705084)*eta - (974.1799785351835));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0008514497747208459))/(0.0007349682716436134) -
                (241.70330601114196)*phi_mod*phi_mod - (6.308444412746283)*phi_mod - (-7.072158268899229) -
                (-753.9710401007494)*eta*eta - (-2577.9334387162626)*eta - (-2203.231295705608));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011631611372140257))/(-0.0006799464794009345) -
                (243.3031551241046)*phi_mod*phi_mod - (-5.513098969651028)*phi_mod - (-3.7251473627528844) -
                (102.52169733462934)*eta*eta - (351.74375905513745)*eta - (301.6858118501815));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0011698811831407664))/(0.0007090712807221897) -
                (260.75926098218025)*phi_mod*phi_mod - (7.124653725072104)*phi_mod - (-7.21486091923953) -
                (-510.45326424446694)*eta*eta - (-1756.5123531561626)*eta - (-1510.5134915294295));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007728890397527542))/(-0.0006659824763523464) -
                (250.74508767544052)*phi_mod*phi_mod - (-7.480644902242703)*phi_mod - (-4.072320574185662) -
                (324.92845491487043)*eta*eta - (1139.7173337527397)*eta - (999.371302619226));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0007875100519657461))/(0.0007091316805013178) -
                (261.5927715626553)*phi_mod*phi_mod - (4.89182596487658)*phi_mod - (-6.838995968263916) -
                (-193.78109794282008)*eta*eta - (-676.9656684024119)*eta - (-590.5414113528992));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009969525566347413))/(-0.0006753225724855025) -
                (237.97703999692752)*phi_mod*phi_mod - (-8.280156206244712)*phi_mod - (-3.7474953654441108) -
                (120.10247569179033)*eta*eta - (415.4737734977943)*eta - (359.3561633220191));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.001289806838838284))/(0.0007072159452927764) -
                (259.72199858008685)*phi_mod*phi_mod - (5.2920223502542845)*phi_mod - (-7.451323177802428) -
                (-1038.2410673278707)*eta*eta - (-3528.7060503716884)*eta - (-2998.0898647196786));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010024312898861535))/(-0.0006757964891925024) -
                (238.05455450531636)*phi_mod*phi_mod - (-7.036576707918741)*phi_mod - (-3.792341349297521) -
                (205.02003755611372)*eta*eta - (712.5665346120263)*eta - (619.1428655878376));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0008217173233482281))/(0.0007234932512143584) -
                (236.4635095786175)*phi_mod*phi_mod - (6.137579212377054)*phi_mod - (-6.797982660132499) -
                (-1003.1893243272356)*eta*eta - (-3406.0421792437965)*eta - (-2890.8885908610932));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011554967958833167))/(-0.0006856034779055853) -
                (232.50274464524878)*phi_mod*phi_mod - (-6.763104297080564)*phi_mod - (-3.6831289660792317) -
                (264.6337704369311)*eta*eta - (921.1461798990595)*eta - (801.5486490540509));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00025513136882786226))/(0.0007472007417926477) -
                (239.29055845812886)*phi_mod*phi_mod - (5.826007751459902)*phi_mod - (-7.156923945902127) -
                (-167.10690392359064)*eta*eta - (-583.6639680331161)*eta - (-509.0710856087829));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003515699932087047))/(-0.0016665574440752622) -
                (-57.831578928423546)*phi_mod*phi_mod - (-4.059785520857919)*phi_mod - (1.0027461418870616) -
                (-683.4205495278894)*eta*eta - (-1319.2435081652404)*eta - (-636.4882389197948));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003531353295419636))/(-0.0016726709218786203) -
                (-61.93595234606811)*phi_mod*phi_mod - (-3.9928788289080326)*phi_mod - (1.0716342480599996) -
                (-230.08641851127737)*eta*eta - (-457.2514587433928)*eta - (-226.78990255976075));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003298075337450669))/(-0.001662421885492659) -
                (-56.034356282847895)*phi_mod*phi_mod - (-3.4711614773650354)*phi_mod - (0.9131771511534148) -
                (-528.1582897410013)*eta*eta - (-1020.7212782191423)*eta - (-492.98447235258965));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034899013930537012))/(-0.0016697237087845652) -
                (-50.7368252158684)*phi_mod*phi_mod - (-2.309465508644183)*phi_mod - (0.9228855197563222) -
                (-653.5202602555505)*eta*eta - (-1265.5143660679234)*eta - (-612.4209791372142));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00390855924510019))/(-0.0016855258480648427) -
                (-63.16799424302895)*phi_mod*phi_mod - (-4.187198755606951)*phi_mod - (1.2403358171625787) -
                (-198.6985545780102)*eta*eta - (-398.1912161416651)*eta - (-198.98181053623566));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007805477045186071))/(-0.002489292078349782) -
                (-21.56467565515329)*phi_mod*phi_mod - (17.642059434724953)*phi_mod - (2.5833503567509015) -
                (196.32057058865803)*eta*eta - (344.47461168778796)*eta - (151.00908959284845));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034035053140418657))/(0.002457803776445873) -
                (-113.82127019224146)*phi_mod*phi_mod - (3.3182240413217676)*phi_mod - (1.3941714701930363) -
                (223.05134136294984)*eta*eta - (394.9588744432487)*eta - (174.74741128705315));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00773184170836984))/(-0.0024793799025869725) -
                (-116.7469385152114)*phi_mod*phi_mod - (-2.1892592140196574)*phi_mod - (1.2910397381159702) -
                (95.15913149052854)*eta*eta - (170.78731442458533)*eta - (76.48263225814519));}

    else if (seg_combination_id == 50313 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003959022795800027))/(0.0024831937676183897) -
                (-7.757194509751529)*phi_mod*phi_mod - (-19.6326729071793)*phi_mod - (2.8337234285263175) -
                (209.22491430316865)*eta*eta - (367.36992794034)*eta - (161.20787141929412));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003778507278018174))/(-0.0012309370037936087) -
                (326.86374636159644)*phi_mod*phi_mod - (20.16555469651547)*phi_mod - (-1.9005808068738663) -
                (-34.56247207398415)*eta*eta - (-4.849846091349523)*eta - (0.07523355659995487));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036853035574093964))/(0.00124290385098682) -
                (358.152588997666)*phi_mod*phi_mod - (-22.355487159865426)*phi_mod - (-1.9099316714857388) -
                (-12.830720471844822)*eta*eta - (-1.8739916746225025)*eta - (0.10994455926713137));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004001177505345042))/(-0.0012512592512966064) -
                (336.37450260864614)*phi_mod*phi_mod - (21.0515762348565)*phi_mod - (-1.99402798648105) -
                (-20.674556438086814)*eta*eta - (-1.8512782932672385)*eta - (0.17921252005301533));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036597766603389537))/(0.0012455190472361744) -
                (353.1984436844124)*phi_mod*phi_mod - (-19.446091998465743)*phi_mod - (-2.0139132775078465) -
                (-10.427782839656443)*eta*eta - (-1.1795096444838244)*eta - (0.14330849870975115));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003973208326144001))/(-0.0012564488929385819) -
                (333.22510270189434)*phi_mod*phi_mod - (20.899421627734306)*phi_mod - (-2.113050732763731) -
                (-23.133264099989404)*eta*eta - (-2.1484545211864576)*eta - (0.17569203483824564));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003784692266498596))/(0.0012580165338856738) -
                (348.9422799123535)*phi_mod*phi_mod - (-19.32893852927402)*phi_mod - (-2.2003355746932214) -
                (-5.194874618436369)*eta*eta - (-0.5622890010811619)*eta - (0.14165696168163824));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00402531727834745))/(-0.001234561085123195) -
                (391.8354152471041)*phi_mod*phi_mod - (21.90884446063443)*phi_mod - (-2.0555376170127335) -
                (-32.35699191363287)*eta*eta - (-5.664392880962541)*eta - (-0.044451039600755034));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0037522124715959563))/(0.0012404515510615116) -
                (430.0533015405176)*phi_mod*phi_mod - (-23.046866843823278)*phi_mod - (-2.2411508988620676) -
                (-10.005718933869385)*eta*eta - (-0.6459069561910292)*eta - (0.2664364437235251));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003654946876064835))/(-0.001214602417465979) -
                (387.391830769679)*phi_mod*phi_mod - (20.901526440141012)*phi_mod - (-2.0898342234688694) -
                (-1.7363671070435251)*eta*eta - (1.7111469331259785)*eta - (0.3473760126952203));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0035143105673738047))/(0.0012270012432777145) -
                (393.263654229283)*phi_mod*phi_mod - (-24.87419739846778)*phi_mod - (-2.0209645027634395) -
                (-17.648996880506612)*eta*eta - (-4.144489716085034)*eta - (-0.07604893816105937));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003899100655143686))/(-0.001245701030305144) -
                (324.51835683882405)*phi_mod*phi_mod - (19.268009008761997)*phi_mod - (-2.010468485323851) -
                (-20.59513680798752)*eta*eta - (-2.083787845716561)*eta - (0.14312735141858896));}

    else if (seg_combination_id == 60402 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036488541203283666))/(0.0012498121007312173) -
                (337.12107030644626)*phi_mod*phi_mod - (-19.735078123740962)*phi_mod - (-2.061850310728217) -
                (-14.062072285890663)*eta*eta - (-2.402880800297358)*eta - (0.04958076677564251));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012622477203540895))/(0.0008117075748498494) -
                (90.93298845991328)*phi_mod*phi_mod - (-3.0110654804748522)*phi_mod - (-1.3603276242521465) -
                (-169.29370140135208)*eta*eta - (508.2246923557945)*eta - (-380.68361423644774));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013311679902494372))/(0.0008194106647260219) -
                (89.29670970161968)*phi_mod*phi_mod - (-3.2122045005064757)*phi_mod - (-1.358204733991083) -
                (17.262134133394557)*eta*eta - (-72.4078810794554)*eta - (71.04569119870057));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001464137627309573))/(0.0008155477770535472) -
                (92.80220239222614)*phi_mod*phi_mod - (-3.130161907063239)*phi_mod - (-1.3998826244322673) -
                (-54.779071096558035)*eta*eta - (150.32765573124746)*eta - (-101.03507953877784));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014724490112584185))/(0.0008138594863527403) -
                (99.66803546446576)*phi_mod*phi_mod - (-3.0021987794280847)*phi_mod - (-1.540544926652136) -
                (-57.0120233856374)*eta*eta - (161.65696426778044)*eta - (-113.30724194399708));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014208595235916531))/(0.0008050488462022767) -
                (113.48223942692461)*phi_mod*phi_mod - (-5.2993176756152724)*phi_mod - (-1.8420179642517653) -
                (-22.337138306550298)*eta*eta - (53.584515067753095)*eta - (-29.10546057129591));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009209941946625119))/(0.0007615111720268695) -
                (77.58441806856109)*phi_mod*phi_mod - (-8.78482983777174)*phi_mod - (-1.162734645023185) -
                (-100.55333413461112)*eta*eta - (298.35028140030573)*eta - (-220.63703036968337));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013269971614687209))/(0.0008026777421731539) -
                (100.29148720230064)*phi_mod*phi_mod - (-3.888043544445955)*phi_mod - (-1.4980332982407454) -
                (-111.49584412907235)*eta*eta - (325.09154169956315)*eta - (-235.72400238802504));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011354496976912164))/(0.0007797475472463252) -
                (69.19307864741099)*phi_mod*phi_mod - (3.025058055674837)*phi_mod - (-1.2692644369973236) -
                (-144.62202570918288)*eta*eta - (434.3894827774772)*eta - (-325.6315859265074));}

    else if (seg_combination_id == 110902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030043449982324897))/(0.0009694822198785559) -
                (234.91579050902814)*phi_mod*phi_mod - (-13.8718482634823)*phi_mod - (-0.7776878285431322) -
                (-138.75157232226724)*eta*eta - (-253.62928354163606)*eta - (-114.97558106857812));}

    else if (seg_combination_id == 110902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002929477198633418))/(0.0009674682981588706) -
                (260.85390350665824)*phi_mod*phi_mod - (-21.028247742863762)*phi_mod - (-0.9865958359797511) -
                (-409.4865076014018)*eta*eta - (-684.0492005971844)*eta - (-285.54279332747205));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007236858096112063))/(0.0011990127502096966) -
                (-21.913939717184313)*phi_mod*phi_mod - (2.238324755258325)*phi_mod - (-1.2847690558691327) -
                (-106.96003068658723)*eta*eta - (-397.0650106862388)*eta - (-356.89367927913696));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01483178396987635))/(0.000404806122802607) -
                (-248.95461801015998)*phi_mod*phi_mod - (-38.22589603103109)*phi_mod - (7.511818316952896) -
                (11396.802371080152)*eta*eta - (49922.35809325891)*eta - (54667.413312956436));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001458783648990595))/(0.0009003564831205095) -
                (-67.5150132707269)*phi_mod*phi_mod - (9.646345188211365)*phi_mod - (0.2675982435925182) -
                (-97.99534515894798)*eta*eta - (-396.9154196112712)*eta - (-400.41632525247064));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0010261855434393974))/(0.0007823598414481196) -
                (72.81248188398858)*phi_mod*phi_mod - (13.027968581253196)*phi_mod - (-3.157396706530006) -
                (231.9002118339815)*eta*eta - (991.3043270534063)*eta - (1058.830308103849));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0007771827148819113))/(0.0006966813110128881) -
                (296.08399363611886)*phi_mod*phi_mod - (-6.540347303050445)*phi_mod - (-6.231122181298631) -
                (-868.1021127671529)*eta*eta - (-3727.732980131956)*eta - (-4001.174127686424));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00019714454182690608))/(0.0007080619684289879) -
                (3304.0489117613433)*phi_mod*phi_mod - (-1041.9152242209907)*phi_mod - (81.20724963168847) -
                (-510.9950964772218)*eta*eta - (-2193.3005365549957)*eta - (-2352.7280503558513));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0003991531759352831))/(0.0008899130378680525) -
                (1395.163945015998)*phi_mod*phi_mod - (-390.93763056486114)*phi_mod - (25.14113507716082) -
                (346.00414295483876)*eta*eta - (1499.2739502617846)*eta - (1623.2797318834407));}

    else if (seg_combination_id == 231934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00023560825758489167))/(0.0008063273488579912) -
                (-1330.8505602898883)*phi_mod*phi_mod - (364.4945734262078)*phi_mod - (-24.9726789911739) -
                (-69.45470451685541)*eta*eta - (-291.5127754378931)*eta - (-305.79994742406956));}

    else if (seg_combination_id == 100902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034962789502213042))/(-0.0011999312906605833) -
                (359.634788393673)*phi_mod*phi_mod - (20.600258630348744)*phi_mod - (-1.9670014071471276) -
                (-39.72866432468841)*eta*eta - (11.435686234424486)*eta - (-0.5891375736275346));}

    else if (seg_combination_id == 100902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003962324515977946))/(0.001199759156591886) -
                (308.3122598452311)*phi_mod*phi_mod - (-19.134240634664966)*phi_mod - (-1.7160157191278198) -
                (-0.14092437875638855)*eta*eta - (-1.6087673487047534)*eta - (0.3668974182897979));}

    else if (seg_combination_id == 100902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003209206856648754))/(-0.0011736781274061879) -
                (363.7053412383596)*phi_mod*phi_mod - (21.92616071733716)*phi_mod - (-2.0528833594144444) -
                (-33.92647056849629)*eta*eta - (8.008159486896162)*eta - (-0.17041593176584158));}

    else if (seg_combination_id == 100902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038395191529029997))/(0.001189520548861346) -
                (303.9111328666377)*phi_mod*phi_mod - (-20.3637568372445)*phi_mod - (-1.6427560148908995) -
                (11.553173765031298)*eta*eta - (-4.580137026707203)*eta - (0.5277102607560759));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003076360889742668))/(-0.0008274264253432594) -
                (356.5823681198028)*phi_mod*phi_mod - (20.185106444910147)*phi_mod - (-1.7190243152848435) -
                (-326.9403497841644)*eta*eta - (-594.0538920546524)*eta - (-269.7343718871088));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0023979472375451573))/(0.0009174365470939843) -
                (551.6518885694157)*phi_mod*phi_mod - (-22.46004137862502)*phi_mod - (-4.245262695887002) -
                (-269.4042268289173)*eta*eta - (-502.07039017183087)*eta - (-233.82473466574893));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003270847520095179))/(-0.0008441208866711042) -
                (348.93797576609535)*phi_mod*phi_mod - (21.35429635114098)*phi_mod - (-1.7472514849609855) -
                (-379.392973898995)*eta*eta - (-684.8202772356808)*eta - (-308.8878149167851));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002165958629953567))/(0.0007768305760221889) -
                (648.6889181369302)*phi_mod*phi_mod - (-22.81979359680675)*phi_mod - (-5.205562635578175) -
                (627.4832900560376)*eta*eta - (1190.9209471723893)*eta - (564.8922004112227));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003111707038563385))/(-0.000829646723276943) -
                (349.2382055633983)*phi_mod*phi_mod - (23.49457807569573)*phi_mod - (-1.627490750693443) -
                (-256.33084390652266)*eta*eta - (-463.42862210439307)*eta - (-209.34394544113815));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0020574341451243864))/(0.000769423952340298) -
                (659.9124213420373)*phi_mod*phi_mod - (-22.487074146228046)*phi_mod - (-4.928663078136595) -
                (-2677.4675414703884)*eta*eta - (-4938.333659598857)*eta - (-2276.868802842118));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00293176381238905))/(-0.0008205589042913462) -
                (421.59866227639765)*phi_mod*phi_mod - (21.867389443322043)*phi_mod - (-2.2294005186943386) -
                (-303.45952898923184)*eta*eta - (-547.0490651497091)*eta - (-246.2149246531589));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008460016004077294))/(0.0008251401394032821) -
                (599.449664150166)*phi_mod*phi_mod - (-22.018582866844298)*phi_mod - (-3.2789094539895096) -
                (315.09858532773995)*eta*eta - (608.661784295048)*eta - (293.7814814121663));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002922628302899048))/(-0.00083242773050641) -
                (401.77362012909657)*phi_mod*phi_mod - (19.310452012983493)*phi_mod - (-2.4458827734989437) -
                (-361.873455260956)*eta*eta - (-654.3026446371066)*eta - (-295.4643150234455));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012099005600034443))/(0.0008363937939209308) -
                (575.4554035586223)*phi_mod*phi_mod - (-24.069531451366625)*phi_mod - (-3.1770435721931434) -
                (-282.49872749301073)*eta*eta - (-524.3069750958012)*eta - (-243.14373424937017));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0029566195893617683))/(-0.0008278596494440111) -
                (357.1470178385681)*phi_mod*phi_mod - (19.78170802645658)*phi_mod - (-2.0645180442444313) -
                (-431.60061136732355)*eta*eta - (-782.3716729646068)*eta - (-354.2531168416801));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011366105165527707))/(0.000839230831736646) -
                (572.807289825549)*phi_mod*phi_mod - (-23.705255126265833)*phi_mod - (-3.1875409810476394) -
                (28.98024846042372)*eta*eta - (62.968729815992695)*eta - (33.639502628766536));}

    else if (seg_combination_id == 110902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0031524175823289145))/(-0.0011672961149100602) -
                (328.17754158853324)*phi_mod*phi_mod - (17.282491428597815)*phi_mod - (-1.9763127875702773) -
                (234.13380581496187)*eta*eta - (-162.1331580193328)*eta - (27.925249683914693));}

    else if (seg_combination_id == 110902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004025396121355819))/(0.0011809043053631898) -
                (320.87966776074467)*phi_mod*phi_mod - (-19.56777026244887)*phi_mod - (-2.1727480506636994) -
                (-6.056068610077921)*eta*eta - (1.9543727820351733)*eta - (0.009540756566320936));}

    else if (seg_combination_id == 110902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0030791278880784837))/(-0.001155884985405629) -
                (394.15105315512096)*phi_mod*phi_mod - (20.90333407291207)*phi_mod - (-2.315291339021248) -
                (168.2467326154911)*eta*eta - (-123.10752310657995)*eta - (22.097544465451406));}

    else if (seg_combination_id == 110902 && eta_inner == 2 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003880121865034416))/(0.0011505536816332977) -
                (334.89998081320647)*phi_mod*phi_mod - (-23.833928863173046)*phi_mod - (-1.9825375539007684) -
                (-17.772613330416128)*eta*eta - (11.236385269180488)*eta - (-1.6251345732274454));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.026438452209353765))/(-0.0006746241719009663) -
                (129.5158699107612)*phi_mod*phi_mod - (-15.944695447924097)*phi_mod - (-2.0420348945756737) -
                (-349.81245596498553)*eta*eta - (-566.5360162399298)*eta - (-228.4595271419097));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.024236697642295607))/(-0.000511737162444383) -
                (144.30209886170354)*phi_mod*phi_mod - (-17.360705992760472)*phi_mod - (-2.0328508698389967) -
                (-749.449942621834)*eta*eta - (-1231.2205970987563)*eta - (-505.63290238492425));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.016252431139389966))/(0.00023774797037942594) -
                (-109.50225187709674)*phi_mod*phi_mod - (3.9115288693726127)*phi_mod - (3.020049287156507) -
                (-13422.832274567281)*eta*eta - (-22706.677867872677)*eta - (-9599.750017688508));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034787112932604435))/(0.0020009107468123843) -
                (-60.85011122750322)*phi_mod*phi_mod - (7.130961824214114)*phi_mod - (1.0212012286055856) -
                (-2346.2470664314546)*eta*eta - (-3890.288307627308)*eta - (-1612.1477369504835));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.02487147364227149))/(-0.00065132236329105) -
                (54.98492859898314)*phi_mod*phi_mod - (-1.6391115141461647)*phi_mod - (-0.5094486403507203) -
                (1677.8060280845032)*eta*eta - (2710.3472113546736)*eta - (1092.6799181143215));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004154960959322528))/(-0.0011563565244382017) -
                (373.61877113943626)*phi_mod*phi_mod - (20.938637525547275)*phi_mod - (-1.6233930156033716) -
                (-22.553665311258325)*eta*eta - (-11.286397106269554)*eta - (-1.2196445060587675));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033100324872723263))/(0.001160069124885916) -
                (426.83961316285536)*phi_mod*phi_mod - (-26.5228432982272)*phi_mod - (-1.7145151358514292) -
                (-6.645148559743891)*eta*eta - (-1.1921157781332548)*eta - (0.41335949800050215));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0040998156752301285))/(-0.0011694983570922468) -
                (388.5118698578573)*phi_mod*phi_mod - (24.080156598880247)*phi_mod - (-1.7850589867894537) -
                (-9.468575898702015)*eta*eta - (-3.144248164437902)*eta - (0.015607887462700643));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00338979236562084))/(0.0011778843364807494) -
                (415.45276064238476)*phi_mod*phi_mod - (-22.18546158774657)*phi_mod - (-1.936771020169964) -
                (-21.730864646108603)*eta*eta - (-10.900806919200436)*eta - (-1.134124577173552));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0042663761336279955))/(-0.0011798845021082224) -
                (394.73853620975825)*phi_mod*phi_mod - (24.33370763782783)*phi_mod - (-1.88798431361689) -
                (-12.929679327707204)*eta*eta - (-4.448477950037354)*eta - (-0.025830317461251452));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003299977370243656))/(0.0011763194965353962) -
                (427.0476196036259)*phi_mod*phi_mod - (-22.482272519729175)*phi_mod - (-2.0827470742991565) -
                (5.834108365259166)*eta*eta - (6.296750856038739)*eta - (1.5183963153573503));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004330646277711246))/(-0.0011737577742072527) -
                (391.76571562149053)*phi_mod*phi_mod - (21.83120614491763)*phi_mod - (-1.8831057327107503) -
                (-7.445316909835185)*eta*eta - (-0.9288280110265846)*eta - (0.5584564832747873));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033050414228217324))/(0.0011703889425207902) -
                (444.74488832929745)*phi_mod*phi_mod - (-23.172512546508052)*phi_mod - (-2.078070952860517) -
                (4.774195034200308)*eta*eta - (5.672835373236056)*eta - (1.4510034339181102));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004245645816037792))/(-0.0011843286445857404) -
                (385.6849250438141)*phi_mod*phi_mod - (20.97105837048648)*phi_mod - (-2.135284324944487) -
                (-25.19093994037514)*eta*eta - (-10.885618304218664)*eta - (-0.8024144425857545));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033925100970494224))/(0.001185243900594437) -
                (420.5167943700926)*phi_mod*phi_mod - (-25.367337219664243)*phi_mod - (-2.088208201151344) -
                (-4.876406195621066)*eta*eta - (0.8776955577058203)*eta - (0.9235076409570413));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004164890762189775))/(-0.0011861101538360034) -
                (360.9294260041532)*phi_mod*phi_mod - (21.525346795430636)*phi_mod - (-1.9663515764357833) -
                (-7.471534701490961)*eta*eta - (-0.9051197926154604)*eta - (0.5210769577105681));}

    else if (seg_combination_id == 60402 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0032656576311514457))/(0.001183069574998365) -
                (380.992821215585)*phi_mod*phi_mod - (-21.99197780743291)*phi_mod - (-1.9745752497483102) -
                (-6.989695690117214)*eta*eta - (-2.334257953411527)*eta - (0.07215887712500862));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011855101050549024))/(-0.0006112973269775516) -
                (546.4285454015718)*phi_mod*phi_mod - (15.298235966617867)*phi_mod - (-2.0358855170465624) -
                (-216.97378814982517)*eta*eta - (658.3427754457406)*eta - (-497.06473206347647));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014516430671416849))/(0.0006008775056288838) -
                (430.8261131352432)*phi_mod*phi_mod - (-18.741691069793053)*phi_mod - (-2.236811865490073) -
                (54.57010656921479)*eta*eta - (-118.39120852558908)*eta - (59.1426457542297));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010083390139039954))/(-0.0006022285220154277) -
                (533.9406482590616)*phi_mod*phi_mod - (23.295599918281187)*phi_mod - (-1.9101549138633491) -
                (-162.31711267421713)*eta*eta - (500.63509113083734)*eta - (-383.1952799841986));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014153518602587544))/(0.0005937420759621492) -
                (435.2958737057358)*phi_mod*phi_mod - (-15.797854764247093)*phi_mod - (-2.263043454427729) -
                (141.4636748432699)*eta*eta - (-359.0044819691083)*eta - (225.72097647082748));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010649746957275318))/(-0.0006035434096567838) -
                (534.760588268385)*phi_mod*phi_mod - (10.869771711161423)*phi_mod - (-2.3308989461691456) -
                (35.230527659569205)*eta*eta - (-64.16440819916079)*eta - (20.374833676704135));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00156668890606085))/(0.000599717170673184) -
                (429.6092274759337)*phi_mod*phi_mod - (-19.826815009570925)*phi_mod - (-2.250828289665065) -
                (33.860238523418154)*eta*eta - (-63.17891785453681)*eta - (22.553957744788843));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008968764069342606))/(-0.0005977730509953467) -
                (527.4804468369016)*phi_mod*phi_mod - (9.516028989234579)*phi_mod - (-2.303178402509008) -
                (-199.30706831176425)*eta*eta - (603.3308405061584)*eta - (-454.56958113670845));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014956105424126678))/(0.00059419405237997) -
                (443.97369392932654)*phi_mod*phi_mod - (-19.003420984338643)*phi_mod - (-2.1447680200856603) -
                (72.09397825494395)*eta*eta - (-167.3782626258326)*eta - (93.35702118480891));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012070088328326178))/(-0.0006093566282994976) -
                (556.9522186304539)*phi_mod*phi_mod - (13.130100144011715)*phi_mod - (-2.2363660069764055) -
                (-197.37469438840026)*eta*eta - (600.7964133151569)*eta - (-454.8551330572544));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014980133987723546))/(0.0005957880327322496) -
                (448.73382454422904)*phi_mod*phi_mod - (-20.86067884056355)*phi_mod - (-2.2596380978555013) -
                (104.56991519428703)*eta*eta - (-257.56836469625654)*eta - (155.96709415062233));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013566191467902808))/(-0.0006186610397198363) -
                (440.4836324685251)*phi_mod*phi_mod - (12.100099542833188)*phi_mod - (-2.075116419998632) -
                (9.711710440433597)*eta*eta - (2.533340192345949)*eta - (-23.06380775316936));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013480552908484895))/(0.0005927318149371873) -
                (367.42414337391796)*phi_mod*phi_mod - (-12.764071503848553)*phi_mod - (-2.2494306319049473) -
                (112.09145019739438)*eta*eta - (-287.8713168101978)*eta - (183.4305569582396));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010266778600987567))/(-0.0006028403688722202) -
                (445.9855418227458)*phi_mod*phi_mod - (10.13099178026781)*phi_mod - (-1.9878491089254846) -
                (10.942571873384033)*eta*eta - (-0.14225642548578651)*eta - (-21.76901729072312));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013858621911575968))/(0.0005903114300519867) -
                (375.07952791659017)*phi_mod*phi_mod - (-18.54296287384152)*phi_mod - (-2.0507742968765075) -
                (32.654979286906375)*eta*eta - (-68.11826047996546)*eta - (31.507653211596423));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010490019197359395))/(-0.0006070087976249194) -
                (564.6683679417594)*phi_mod*phi_mod - (16.284382558115396)*phi_mod - (-2.1432387141203737) -
                (-94.50478387620213)*eta*eta - (308.7648952417207)*eta - (-247.67918836794232));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014378118706057019))/(0.0005981591259178362) -
                (444.55118279235603)*phi_mod*phi_mod - (-19.205385932011716)*phi_mod - (-2.2792608339591407) -
                (1.4560751660714322)*eta*eta - (28.37053233592405)*eta - (-42.206491596621376));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.020652082667125003))/(0.005796406050592216) -
                (135.94302776199186)*phi_mod*phi_mod - (-62.23558029926588)*phi_mod - (6.4221320180891945) -
                (44.002200469633415)*eta*eta - (73.70693492234895)*eta - (28.954149914679796));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.017035022732771483))/(0.005445667898652591) -
                (-112.30327632338657)*phi_mod*phi_mod - (-14.258582422813378)*phi_mod - (0.21611784921520358) -
                (-240.45085024074555)*eta*eta - (-280.7752024543903)*eta - (-81.57564170138856));}

    else if (seg_combination_id == 100902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003944846029141088))/(-0.0011963401949978583) -
                (281.3981404714314)*phi_mod*phi_mod - (17.789597518339946)*phi_mod - (-1.4726433756734683) -
                (-10.182360726720333)*eta*eta - (0.26012720388068195)*eta - (0.4415301642308914));}

    else if (seg_combination_id == 100902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003322232346710454))/(0.0011811989340604749) -
                (383.78390364965804)*phi_mod*phi_mod - (-23.00264585106491)*phi_mod - (-2.027877404101129) -
                (-40.76182399988813)*eta*eta - (-10.549793171495537)*eta - (-0.4049170945467923));}

    else if (seg_combination_id == 100902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037680124632871416))/(-0.0011809574872425998) -
                (303.02411924105996)*phi_mod*phi_mod - (18.159415513103923)*phi_mod - (-1.6391236574010064) -
                (2.6886028620298466)*eta*eta - (3.0528078543618506)*eta - (0.5264418451841264));}

    else if (seg_combination_id == 100902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003339173535345654))/(0.0011771875721957707) -
                (384.56144574335787)*phi_mod*phi_mod - (-24.659668627832428)*phi_mod - (-1.958855179314151) -
                (-53.270217080829816)*eta*eta - (-14.314392431519272)*eta - (-0.596034788224502));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034705827199142097))/(-0.002462870309259985) -
                (-11.595503910744048)*phi_mod*phi_mod - (17.586903505638737)*phi_mod - (2.5068590513054616) -
                (161.0422913648564)*eta*eta - (-283.3354876972859)*eta - (124.5896111920587));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007722031728068047))/(0.0024879540272581377) -
                (-145.07816186554646)*phi_mod*phi_mod - (-0.23618890518480304)*phi_mod - (1.2708563470580343) -
                (108.70281205809711)*eta*eta - (-193.98004716081408)*eta - (86.424727350379));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0039008932709882808))/(-0.0024743643204930706) -
                (-117.30836874422018)*phi_mod*phi_mod - (-0.6428294642711527)*phi_mod - (1.3134377227035803) -
                (154.28307396703593)*eta*eta - (-271.3681416945742)*eta - (119.2805974252289));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007580251112929437))/(0.0024710389346963265) -
                (-19.863313821341915)*phi_mod*phi_mod - (-16.663109317143004)*phi_mod - (2.5733766348276674) -
                (141.25668238312252)*eta*eta - (-248.83008074679316)*eta - (109.50674446338378));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009704352641057653))/(-0.003947441988810349) -
                (-214.2772706277901)*phi_mod*phi_mod - (5.5430649292694305)*phi_mod - (1.2831418540538582) -
                (1039.3717957006022)*eta*eta - (-2123.947345989336)*eta - (1084.376648442644));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.014931474965164586))/(0.004068768817645291) -
                (-9.78690716203336)*phi_mod*phi_mod - (-28.166712798629053)*phi_mod - (3.5773747453038416) -
                (-712.1396637176722)*eta*eta - (1334.5043612249297)*eta - (-623.5342092585596));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009083004996492861))/(-0.003918009839136021) -
                (-43.3823070307942)*phi_mod*phi_mod - (19.970222798105453)*phi_mod - (3.0302961720017705) -
                (1460.1947514307012)*eta*eta - (-2952.3043525470375)*eta - (1491.903539387168));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.014281419126418646))/(0.004069392172796792) -
                (-268.58315515877814)*phi_mod*phi_mod - (-6.205027867006882)*phi_mod - (1.144284716036446) -
                (-1017.3696091826904)*eta*eta - (1944.841443765237)*eta - (-928.4959452549152));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014871178023718934))/(-0.0012042606879496254) -
                (540.6159075252536)*phi_mod*phi_mod - (26.139478880011175)*phi_mod - (-3.5198399329239307) -
                (-8466.238339093701)*eta*eta - (3652.9431885598046)*eta - (-393.81654115297755));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004265892892798579))/(0.001204322129724942) -
                (282.36121014099757)*phi_mod*phi_mod - (-20.723904480199195)*phi_mod - (-1.0970230641712726) -
                (-403.8110719949625)*eta*eta - (166.4899118257533)*eta - (-16.976310127713806));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004163083299843303))/(-0.0012305118652397012) -
                (522.8896983584343)*phi_mod*phi_mod - (22.337866602722777)*phi_mod - (-2.5362275471842186) -
                (-657.3686842777781)*eta*eta - (330.7340503800886)*eta - (-41.28793069327479));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004262190246142517))/(0.0012097171410375303) -
                (274.2534840721203)*phi_mod*phi_mod - (-15.993934820756532)*phi_mod - (-1.3115678281468628) -
                (-165.58441750604408)*eta*eta - (73.90563641638522)*eta - (-8.027484269588758));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00022785431970044612))/(-0.0011051190991768992) -
                (504.9483425975416)*phi_mod*phi_mod - (25.35366757444821)*phi_mod - (-2.6591981748383553) -
                (1297.3393852828156)*eta*eta - (-610.8060324643916)*eta - (71.8463185634851));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004062643633400416))/(0.0011940101548328294) -
                (315.09456831468054)*phi_mod*phi_mod - (-18.559282666753592)*phi_mod - (-1.3558596280628195) -
                (-642.1586997893982)*eta*eta - (270.86877011141735)*eta - (-28.309905004594608));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004383434124953756))/(0.0012151415170357823) -
                (265.5069563856575)*phi_mod*phi_mod - (-17.265425889570157)*phi_mod - (-1.1178771884250558) -
                (26.964576205008726)*eta*eta - (-8.234962377044333)*eta - (0.6073381633099147));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004224579237887416))/(-0.0012691369676741016) -
                (429.4765994773912)*phi_mod*phi_mod - (21.051813661823893)*phi_mod - (-2.7308548402462796) -
                (260.6676751480186)*eta*eta - (-138.27931153202593)*eta - (18.052190379471373));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003911227553616261))/(0.0012059166675236265) -
                (274.2146116395809)*phi_mod*phi_mod - (-20.28299788632897)*phi_mod - (-1.4846110101612173) -
                (-468.43887199993736)*eta*eta - (199.97666824909723)*eta - (-21.102047312903693));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015358434556675274))/(-0.0011518059269016757) -
                (555.1667970274647)*phi_mod*phi_mod - (28.5868901124605)*phi_mod - (-2.852528375031509) -
                (-1629.1534707122935)*eta*eta - (703.2711989920433)*eta - (-75.43078474804064));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004120506753285947))/(0.0012047775042274616) -
                (285.3960914865687)*phi_mod*phi_mod - (-21.44198436866706)*phi_mod - (-1.2534232531661273) -
                (-472.0847896181695)*eta*eta - (194.1697824750057)*eta - (-19.798489039320355));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005787746983864517))/(-0.0007871947861262033) -
                (37.9943865073998)*phi_mod*phi_mod - (-0.3089662627988012)*phi_mod - (-0.6377328103770665) -
                (-60.09608927341477)*eta*eta - (-258.12180245109374)*eta - (-276.7902120115687));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0017972687315712618))/(0.0008029406121767851) -
                (46.112696821332506)*phi_mod*phi_mod - (1.09978372122524)*phi_mod - (0.08480486325548496) -
                (170.74063593087453)*eta*eta - (680.1942342102348)*eta - (676.9778666801707));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007040353171780875))/(-0.0007928883687103297) -
                (41.55537248119578)*phi_mod*phi_mod - (-0.6146490861272252)*phi_mod - (-0.6939508276024953) -
                (-51.608594576477586)*eta*eta - (-224.83721706412305)*eta - (-244.25351592281172));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0018249090489435857))/(0.0008047899837385052) -
                (45.904527796912014)*phi_mod*phi_mod - (1.1572279980461446)*phi_mod - (0.08951215688184799) -
                (19.0879222096535)*eta*eta - (61.36380818745254)*eta - (45.736576878350824));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006166741611699899))/(-0.0007841112902838845) -
                (43.65584230226013)*phi_mod*phi_mod - (-0.7642762811032316)*phi_mod - (-0.7283325413566283) -
                (-85.22544056780464)*eta*eta - (-363.35767560978786)*eta - (-386.9490516733276));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015576456047994743))/(0.0008101898310843148) -
                (38.46098650190175)*phi_mod*phi_mod - (0.3308253552755843)*phi_mod - (-0.1740097694373683) -
                (-142.67037147753288)*eta*eta - (-598.7231702149087)*eta - (-627.7267199584292));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006779136354510624))/(-0.0007883602370860877) -
                (42.945210681899894)*phi_mod*phi_mod - (0.20548010903211839)*phi_mod - (-0.7282524563987895) -
                (-66.74096565497719)*eta*eta - (-287.9178722438258)*eta - (-310.0103089575988));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022400593295436805))/(0.0008208610362620704) -
                (46.38417055815328)*phi_mod*phi_mod - (-0.16115787279664062)*phi_mod - (0.08075578226720721) -
                (-220.60400142000836)*eta*eta - (-924.3166885138729)*eta - (-967.6522329322834));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005935523193403352))/(-0.0007824195193257811) -
                (42.10100832650915)*phi_mod*phi_mod - (-2.1090061221500895)*phi_mod - (-0.7078371819312794) -
                (-51.00921309652397)*eta*eta - (-220.60501045672473)*eta - (-238.0357705252396));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002352364615900297))/(0.0008127913245844735) -
                (45.20554278092907)*phi_mod*phi_mod - (0.7674194867474751)*phi_mod - (0.37878392884866774) -
                (-269.7922961785456)*eta*eta - (-1122.839254517238)*eta - (-1167.7706438065782));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006662900143323284))/(-0.0007857337167882639) -
                (42.75126764412772)*phi_mod*phi_mod - (-0.2621302783692134)*phi_mod - (-0.713300113652289) -
                (-97.50278422054475)*eta*eta - (-416.97280260418177)*eta - (-445.2774263136408));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015741356262383309))/(0.0007941658829297316) -
                (47.41489976178993)*phi_mod*phi_mod - (-0.6798754882139025)*phi_mod - (-0.08666838803233748) -
                (24.07201188351865)*eta*eta - (85.76343994519836)*eta - (74.79637512892849));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00042262166133112867))/(-0.0007741084062271964) -
                (42.08485072757807)*phi_mod*phi_mod - (0.20655901016532624)*phi_mod - (-0.7745858508223584) -
                (-15.127929458516244)*eta*eta - (-70.86592035814839)*eta - (-81.85531233674888));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016834952714502205))/(0.0008075894811313642) -
                (54.33422369078481)*phi_mod*phi_mod - (-0.07208345807306547)*phi_mod - (-0.36474058435068396) -
                (-296.2214919692629)*eta*eta - (-1229.6571552894588)*eta - (-1275.7669525307863));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005535450551380348))/(-0.0007817026701875564) -
                (39.00542343839362)*phi_mod*phi_mod - (-0.7503885964494014)*phi_mod - (-0.6638967791927498) -
                (-28.863339336767893)*eta*eta - (-128.46038796632715)*eta - (-142.222978483631));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0018316925654934615))/(0.0008049735583636508) -
                (46.80454546424474)*phi_mod*phi_mod - (0.8845827467165404)*phi_mod - (-0.15095531769574858) -
                (63.495584156372864)*eta*eta - (242.18654200336502)*eta - (229.7851765825018));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007605458711541908))/(-0.002429180150140588) -
                (-35.105612411504914)*phi_mod*phi_mod - (13.062263565820407)*phi_mod - (2.2544170248820063) -
                (67.24824235879389)*eta*eta - (138.48838093617388)*eta - (70.64315638714149));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036907601839013702))/(0.0024272995945334246) -
                (-111.15115260136287)*phi_mod*phi_mod - (2.1433076256981054)*phi_mod - (1.2697842632153304) -
                (77.63357808795993)*eta*eta - (156.16705236636068)*eta - (78.16831584013609));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007627525317544971))/(-0.002436087453148812) -
                (-120.79776582752551)*phi_mod*phi_mod - (-3.7052958708554296)*phi_mod - (1.3466962683120478) -
                (-624.9396156032151)*eta*eta - (-1156.6666717538264)*eta - (-535.1089697809429));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00417213741325584))/(0.002451092352611809) -
                (9.616601990229253)*phi_mod*phi_mod - (-20.79212610751594)*phi_mod - (2.6687699011372685) -
                (308.4017595418403)*eta*eta - (581.6586731504358)*eta - (274.22609868353516));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.026807010387370482))/(-0.00041588692464541706) -
                (78.01368728497322)*phi_mod*phi_mod - (-10.142313719955792)*phi_mod - (0.28681426781841934) -
                (-774.4149968885484)*eta*eta - (-998.1903270022352)*eta - (-321.2504628021515));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.021407632607413966))/(-6.334603641550084e-05) -
                (31.827888414824574)*phi_mod*phi_mod - (3.7165817520805007)*phi_mod - (-1.1096256027178313) -
                (5674.011031720675)*eta*eta - (7258.486663661775)*eta - (2319.6303562375583));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.022557396247333036))/(-0.00019589863718399476) -
                (46.04368130716863)*phi_mod*phi_mod - (12.375976323446125)*phi_mod - (-2.600475135439787) -
                (-5308.661323266859)*eta*eta - (-6845.972467354711)*eta - (-2207.248941844134));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01725121098981214))/(0.00032441293071964816) -
                (-114.44754301137326)*phi_mod*phi_mod - (10.382239573145057)*phi_mod - (2.2200611243241752) -
                (-4120.564249194569)*eta*eta - (-5318.973301209341)*eta - (-1716.1462447304816));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038921096017212166))/(-0.000897029127192887) -
                (-97.80307039090688)*phi_mod*phi_mod - (-1.806782528050501)*phi_mod - (5.135514449544513) -
                (-58.795732867484695)*eta*eta - (197.11776740793815)*eta - (-164.63764151165216));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008106587380755825))/(0.0009485453739375044) -
                (72.47294213970783)*phi_mod*phi_mod - (-5.475430971006381)*phi_mod - (-1.1294357549499943) -
                (6897.882675837555)*eta*eta - (-21952.659783309646)*eta - (17464.783364588646));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002170161044923111))/(-0.0008894965516097254) -
                (19.778526459602244)*phi_mod*phi_mod - (2.2133040400720088)*phi_mod - (-1.4908486392453268) -
                (300.7288063729421)*eta*eta - (-975.1405390127951)*eta - (789.8874115742335));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038179711139354386))/(-0.0009362621134693294) -
                (-117.44956042032075)*phi_mod*phi_mod - (0.4002237461179865)*phi_mod - (6.251427018781691) -
                (-1576.0806091088905)*eta*eta - (5084.259831729948)*eta - (-4099.719757841099));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0031917379217397423))/(-0.0008094908285172583) -
                (-231.4983676798793)*phi_mod*phi_mod - (-6.369580107918171)*phi_mod - (14.09840702459506) -
                (55.353116605270934)*eta*eta - (-172.78337447381992)*eta - (135.04254810387994));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.018391217859945803))/(-0.00010885072587678583) -
                (5942.27358978782)*phi_mod*phi_mod - (576.8787993793678)*phi_mod - (-175.35772503010227) -
                (-559.422598611429)*eta*eta - (1118.1523155305485)*eta - (-357.09835601237785));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0053114669398874525))/(0.0009420207373459225) -
                (98.91241567509556)*phi_mod*phi_mod - (3.565925267057771)*phi_mod - (-6.135642071379896) -
                (12331.871675461227)*eta*eta - (-39233.99835868085)*eta - (31203.585492172093));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-6.929081336999749e-05))/(-0.0007067772080274974) -
                (-125.00774905842107)*phi_mod*phi_mod - (-1.757887819397327)*phi_mod - (7.382198825921268) -
                (81.03229578199037)*eta*eta - (-274.3258374096665)*eta - (231.59517997610433));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0001910763746216067))/(-0.0008150139185840911) -
                (42.9818417174507)*phi_mod*phi_mod - (1.942256011598246)*phi_mod - (-3.402098526376487) -
                (-974.7087930535287)*eta*eta - (3162.9630407745676)*eta - (-2565.0778252635937));}

    else if (seg_combination_id == 221924 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003516059398683052))/(0.0007219687348267594) -
                (-66.87517484403081)*phi_mod*phi_mod - (11.011970144017209)*phi_mod - (2.3075684530924403) -
                (-24120.293312854745)*eta*eta - (76455.02939153499)*eta - (-60581.119433188585));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003984474006623013))/(-0.002507502384285857) -
                (-38.71872045588674)*phi_mod*phi_mod - (10.792659109344603)*phi_mod - (2.409430239629911) -
                (-587.0484357676712)*eta*eta - (972.2595579667749)*eta - (-402.43732491789865));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008506896892581042))/(0.002581438005756345) -
                (-122.00205516191473)*phi_mod*phi_mod - (1.1594524449766135)*phi_mod - (1.174890092938244) -
                (-325.84633071020784)*eta*eta - (538.6580686502549)*eta - (-222.38582936492728));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003703209046225951))/(-0.0024754390216843165) -
                (-117.452372132108)*phi_mod*phi_mod - (0.7331248425375708)*phi_mod - (1.6738861518593282) -
                (-899.014959115211)*eta*eta - (1474.7591131172207)*eta - (-604.6666736035345));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00853487133764423))/(0.0025662236604675885) -
                (-25.152873615072682)*phi_mod*phi_mod - (-12.605481424190348)*phi_mod - (2.2986538186453265) -
                (-126.5637443062018)*eta*eta - (204.58190652760427)*eta - (-82.60254837872392));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003317267701080992))/(-0.0019839046706355166) -
                (-86.36178081981578)*phi_mod*phi_mod - (-4.07972308567641)*phi_mod - (1.2247875533808843) -
                (93.48093199554393)*eta*eta - (-180.53213475746608)*eta - (86.74803114689114));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006002183769364968))/(0.001966096460411408) -
                (-100.36063317402814)*phi_mod*phi_mod - (6.570005962557416)*phi_mod - (1.1882943002065325) -
                (31.80958610644972)*eta*eta - (-74.38625960272884)*eta - (41.22164036810021));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003358790640414363))/(-0.0020008351218786346) -
                (-95.09415695367781)*phi_mod*phi_mod - (-4.877369839430335)*phi_mod - (1.3557498879263654) -
                (54.920389102761334)*eta*eta - (-111.24179058978696)*eta - (55.50125570964416));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006224699060475551))/(0.0020088028775189673) -
                (-108.84389977244498)*phi_mod*phi_mod - (5.4156083852108265)*phi_mod - (1.3470543397425674) -
                (34.818801784648)*eta*eta - (-78.35727845996989)*eta - (42.03910304700625));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0033510509104445357))/(-0.0020046883078610076) -
                (-94.78521966806352)*phi_mod*phi_mod - (-5.350126519075204)*phi_mod - (1.3160973856888514) -
                (55.67313218347883)*eta*eta - (-114.67815871564069)*eta - (57.99260963391865));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006102837325108645))/(0.002003115682629364) -
                (-106.82913439734315)*phi_mod*phi_mod - (5.093708935746808)*phi_mod - (1.3064610416567966) -
                (86.09985762760468)*eta*eta - (-169.60406193675163)*eta - (82.59695231948301));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003408902671188385))/(-0.001993407317080343) -
                (-98.15195843414084)*phi_mod*phi_mod - (-5.088176080886263)*phi_mod - (1.4456754501651359) -
                (69.29005179768937)*eta*eta - (-138.0022147382116)*eta - (67.9690553247771));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006246513768237585))/(0.001996438048469858) -
                (-114.3970718203833)*phi_mod*phi_mod - (4.798336898662811)*phi_mod - (1.4907747449934585) -
                (49.5626480887114)*eta*eta - (-105.7082836660068)*eta - (54.736160278254424));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038527079844201495))/(-0.002019608070934854) -
                (-102.75908722694074)*phi_mod*phi_mod - (-4.740925709239717)*phi_mod - (1.5206679173813735) -
                (62.35859552334113)*eta*eta - (-125.5028176094498)*eta - (62.280435175117795));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006341992565057978))/(0.0019945978835930805) -
                (-110.92149949494888)*phi_mod*phi_mod - (5.30276305129024)*phi_mod - (1.4428938649345258) -
                (30.732095845740727)*eta*eta - (-72.0000003220611)*eta - (39.58087253185216));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024884967811572125))/(0.001627074799291508) -
                (-52.20960169793809)*phi_mod*phi_mod - (2.3510112466223614)*phi_mod - (1.1361662642702255) -
                (-1855.5746383320127)*eta*eta - (3496.27858738187)*eta - (-1646.6857290725977));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004405974082541082))/(-0.0010440644593043634) -
                (149.7546714043762)*phi_mod*phi_mod - (8.651000694953664)*phi_mod - (-1.4135678106516254) -
                (-820.1459545111978)*eta*eta - (-1271.6615550009271)*eta - (-492.84509534776004));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003797026727891007))/(-0.0010060272784564257) -
                (175.55434013708404)*phi_mod*phi_mod - (14.906198729916863)*phi_mod - (-1.4311380224414654) -
                (-437.67546218350486)*eta*eta - (-667.5536559017706)*eta - (-254.38835016134047));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004845415706662805))/(-0.0010691449162428157) -
                (128.70341830317597)*phi_mod*phi_mod - (9.614649713934552)*phi_mod - (-1.0474868250224811) -
                (-182.1084770534911)*eta*eta - (-271.2095980233374)*eta - (-100.72537144260023));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004250436463271338))/(-0.0009800049337994818) -
                (345.0667899344716)*phi_mod*phi_mod - (17.889074254966452)*phi_mod - (-2.2763588182728314) -
                (-394.83963857484486)*eta*eta - (-615.2008262466907)*eta - (-239.35319652624352));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0017777219665507705))/(0.0009636601250296245) -
                (460.7265269249681)*phi_mod*phi_mod - (-18.425456410968692)*phi_mod - (-2.9104955463917395) -
                (311.5378015324611)*eta*eta - (523.5031977244523)*eta - (219.54219518029203));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003967177792897001))/(-0.0009710632222652949) -
                (339.18005304621124)*phi_mod*phi_mod - (16.052689302344756)*phi_mod - (-2.3365135101886763) -
                (-128.89707168114495)*eta*eta - (-188.41515854941193)*eta - (-68.20767832627844));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0020042550353572344))/(0.0009567924650300985) -
                (463.7450899315926)*phi_mod*phi_mod - (-22.36582327307654)*phi_mod - (-2.7530347196197877) -
                (278.68176080998666)*eta*eta - (468.8871771504954)*eta - (196.87817435459561));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003926729803890413))/(-0.0009618970558100172) -
                (278.9445908946242)*phi_mod*phi_mod - (14.346687983536196)*phi_mod - (-1.8469721616573473) -
                (-142.32822468594475)*eta*eta - (-208.0645258487537)*eta - (-75.33472859790764));}

    else if (seg_combination_id == 60402 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001665228218554922))/(0.0009521048769656666) -
                (459.7928661905536)*phi_mod*phi_mod - (-20.76605130040019)*phi_mod - (-2.6968756358900303) -
                (118.61576378589743)*eta*eta - (203.02271803008367)*eta - (86.5722698066969));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005742934238042064))/(-0.0004650529815266074) -
                (-39.065308187426226)*phi_mod*phi_mod - (-2.4619666901187536)*phi_mod - (2.817352209283187) -
                (379.8878986620153)*eta*eta - (-1031.8816921494854)*eta - (700.6511923185741));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002130101973155517))/(-0.00039533093502787) -
                (-88.03579176935021)*phi_mod*phi_mod - (-6.094721416540053)*phi_mod - (3.4976193489594776) -
                (-79.31487248135218)*eta*eta - (195.9692464350364)*eta - (-120.40631009883796));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.000770774157030154))/(-0.0004038943217672353) -
                (-118.22010076010415)*phi_mod*phi_mod - (-7.384108305713486)*phi_mod - (8.863777435917848) -
                (-1554.8375465009674)*eta*eta - (4167.9255590916455)*eta - (-2793.03593574467));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00392222694850357))/(-0.0006495416280019601) -
                (66.99116233000156)*phi_mod*phi_mod - (2.2580170345522443)*phi_mod - (-6.628268295298429) -
                (857.4320279517605)*eta*eta - (-2250.8018277733086)*eta - (1476.1193210710849));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0009376658485105027))/(-0.00044175967323448027) -
                (-63.931158811711924)*phi_mod*phi_mod - (0.45436981799902176)*phi_mod - (3.4185740131468845) -
                (3162.5651638667787)*eta*eta - (-8551.111904629848)*eta - (5778.903282886818));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0019034283050322373))/(-0.0003911969895473233) -
                (-51.217304226942)*phi_mod*phi_mod - (-2.4336238854792276)*phi_mod - (1.4776308205259063) -
                (4969.8153808531115)*eta*eta - (-13404.929563271999)*eta - (9038.179324564087));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0018373142461468302))/(-0.0005211719022362772) -
                (-15.12194361399346)*phi_mod*phi_mod - (-2.7076320619073453)*phi_mod - (1.0765976554479506) -
                (1064.9207384199976)*eta*eta - (-2868.813759522927)*eta - (1932.2698532895822));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (5.205092558795629e-05))/(-0.00043886491586498906) -
                (-36.78888054884957)*phi_mod*phi_mod - (-1.2385248773425974)*phi_mod - (2.650244215638835) -
                (-73.10382588172415)*eta*eta - (216.79768088622293)*eta - (-159.16018171787138));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.019503177206855026))/(-0.005433332048105572) -
                (-174.39539921191698)*phi_mod*phi_mod - (6.669132239279317)*phi_mod - (0.7741506100536748) -
                (-123.9767132272963)*eta*eta - (-124.67363752700555)*eta - (-30.971537534099674));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013189713222328306))/(0.005324772961649904) -
                (12.381932805662089)*phi_mod*phi_mod - (-23.303037165510137)*phi_mod - (2.811087253421626) -
                (52.030533497934066)*eta*eta - (67.45981536182994)*eta - (21.498349862558218));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.018593386397509574))/(-0.005388823256018236) -
                (-53.6591816681338)*phi_mod*phi_mod - (8.384181526647216)*phi_mod - (1.8926929551902074) -
                (-123.95025028789861)*eta*eta - (-123.07663801516529)*eta - (-30.075387984777855));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01442212620840618))/(0.005401731987378367) -
                (-236.9275661279339)*phi_mod*phi_mod - (-10.949044806345814)*phi_mod - (0.7767217356936389) -
                (-34.25175510343374)*eta*eta - (-26.702608931387775)*eta - (-4.185058075748566));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007726610472829075))/(0.00016781308219750745) -
                (-229.39483985181462)*phi_mod*phi_mod - (13.702995544886619)*phi_mod - (2.4373857130336596) -
                (475.4995917218898)*eta*eta - (1481.738897610024)*eta - (1150.9606027738573));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006844343512626524))/(7.123711490113423e-05) -
                (-215.52387553887354)*phi_mod*phi_mod - (11.987524149774066)*phi_mod - (2.0873935378059194) -
                (187.54774028749154)*eta*eta - (585.5364014324255)*eta - (455.95713573461205));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006716961961595399))/(8.022907624787053e-05) -
                (-331.0657613725181)*phi_mod*phi_mod - (33.17904037524699)*phi_mod - (2.105119266512315) -
                (1421.4042802400222)*eta*eta - (4591.401045422935)*eta - (3706.862174813674));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006264113128163091))/(3.623186399027944e-05) -
                (-180.63978996286755)*phi_mod*phi_mod - (28.330847429115202)*phi_mod - (0.5423622087828485) -
                (-1848.0068501019864)*eta*eta - (-6040.368518067658)*eta - (-4936.588208065396));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.005770680189438183))/(-2.465480168488623e-05) -
                (220.66980790821998)*phi_mod*phi_mod - (-19.663974056644722)*phi_mod - (-0.7724674987939363) -
                (-2965.6088080034224)*eta*eta - (-9578.910362527642)*eta - (-7733.878041993983));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0060437801796718255))/(2.798316975471993e-05) -
                (-170.213167467629)*phi_mod*phi_mod - (27.302689041155244)*phi_mod - (0.1416492554315419) -
                (766.6455503178169)*eta*eta - (2412.6420856206005)*eta - (1894.6839927577892));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007077726495543404))/(0.00012470625850121846) -
                (-333.60607599431273)*phi_mod*phi_mod - (21.014933483797158)*phi_mod - (2.03313003028629) -
                (629.6520917972324)*eta*eta - (2034.7958878605643)*eta - (1643.4057499309254));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00559745722608305))/(-2.4816037790716605e-05) -
                (158.39590436931243)*phi_mod*phi_mod - (1.527270455093862)*phi_mod - (-2.53180637024379) -
                (33.37409652533614)*eta*eta - (103.91212206118267)*eta - (79.6798956916458));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008947401177817716))/(-0.0031707788578089436) -
                (-15.115322035194147)*phi_mod*phi_mod - (14.102023954885146)*phi_mod - (2.273855909433983) -
                (20.672830384034807)*eta*eta - (-24.878407054872437)*eta - (6.984027958903141));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010539794601329358))/(0.0031668877038954603) -
                (-115.40472066080866)*phi_mod*phi_mod - (3.9952418243186796)*phi_mod - (1.4486002759112424) -
                (21.17364525073235)*eta*eta - (-25.593191768352465)*eta - (7.110711193797804));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00906146123165277))/(-0.003175445585523066) -
                (-114.89760664869888)*phi_mod*phi_mod - (0.8233151372048956)*phi_mod - (1.1419747924652612) -
                (-53.473431379875095)*eta*eta - (36.80000017673854)*eta - (-5.763565067384283));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010484463938694578))/(0.0031535957537637137) -
                (3.514809300369359)*phi_mod*phi_mod - (-21.597400316107652)*phi_mod - (2.91717441472531) -
                (-79.24209549837535)*eta*eta - (57.64583133130003)*eta - (-10.073875017087449));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008277262964081628))/(-0.0025148111115356575) -
                (-100.16480087705925)*phi_mod*phi_mod - (-3.272804774602053)*phi_mod - (1.3812315763443463) -
                (90.33650062178317)*eta*eta - (91.82125262858827)*eta - (23.29949389952856));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006602626326950675))/(0.00249243467505496) -
                (-100.35668484688868)*phi_mod*phi_mod - (3.695009460671643)*phi_mod - (1.4089360961508677) -
                (-366.7567530525682)*eta*eta - (-351.3886176135723)*eta - (-84.05124615421983));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00822454435884135))/(-0.002524574978559235) -
                (-109.47127120065907)*phi_mod*phi_mod - (-5.479983814895001)*phi_mod - (1.4415564031379526) -
                (-120.00662594420416)*eta*eta - (-103.31505183515031)*eta - (-21.941856583527528));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006303991717399893))/(0.0024929200388426756) -
                (-111.65052799360798)*phi_mod*phi_mod - (6.795771225722031)*phi_mod - (1.479943879367202) -
                (-104.64551537146885)*eta*eta - (-96.93537720021126)*eta - (-22.33633675266896));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008456747010113431))/(-0.0025241309175760935) -
                (-105.24697304461819)*phi_mod*phi_mod - (-5.853185007526123)*phi_mod - (1.3898213514235145) -
                (-185.2300428729285)*eta*eta - (-167.03818443506626)*eta - (-37.473335066757684));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006711260645173949))/(0.0025121584376511246) -
                (-108.74662224183555)*phi_mod*phi_mod - (5.870393550844844)*phi_mod - (1.4551791897143496) -
                (-447.955311030693)*eta*eta - (-428.7971882525109)*eta - (-102.51119119719891));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008318289712649366))/(-0.0025077228040596023) -
                (-105.15631952748511)*phi_mod*phi_mod - (-5.945181920571108)*phi_mod - (1.4242512150851265) -
                (325.2954450452821)*eta*eta - (313.6861797642165)*eta - (75.63139825075115));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006471626699118845))/(0.0024987920836956686) -
                (-103.0094156115575)*phi_mod*phi_mod - (3.1034600592058785)*phi_mod - (1.4801860383196406) -
                (101.08619212496045)*eta*eta - (95.43970710841118)*eta - (22.5561511118587));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007398703735820012))/(-0.002435927746815089) -
                (-114.12271625209065)*phi_mod*phi_mod - (-5.733425411906618)*phi_mod - (1.8951475863390272) -
                (-423.99796169809133)*eta*eta - (-394.3307347596574)*eta - (-91.50542350723188));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007092171582417468))/(0.0024725549400979913) -
                (-100.23841741396879)*phi_mod*phi_mod - (5.2319927690066805)*phi_mod - (1.7177825323507003) -
                (-838.2724968381166)*eta*eta - (-807.1043429283164)*eta - (-194.1256256734514));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008265984277592838))/(-0.0024759618946906614) -
                (-103.85847073712635)*phi_mod*phi_mod - (-4.74098533977552)*phi_mod - (1.487693041575415) -
                (-172.4200677281691)*eta*eta - (-152.74116244107228)*eta - (-33.597627026382625));}

    else if (seg_combination_id == 50301 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006550162795280857))/(0.002477496780275306) -
                (-91.75385464277379)*phi_mod*phi_mod - (5.191563480012548)*phi_mod - (1.322164183180969) -
                (-197.75200023264483)*eta*eta - (-181.76033535973846)*eta - (-41.59175802559792));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.013597897841055999))/(-0.004078279945093308) -
                (-261.07415602351557)*phi_mod*phi_mod - (8.141223327615297)*phi_mod - (1.1366834760727262) -
                (-1114.6100103704118)*eta*eta - (-2130.2541333302042)*eta - (-1016.8733400946064));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008023840522755883))/(0.0038995531152491983) -
                (-31.776103864974047)*phi_mod*phi_mod - (-22.951472289431912)*phi_mod - (3.326058879129063) -
                (1508.8051872150247)*eta*eta - (3056.525474642196)*eta - (1547.4375436209812));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.014381181750620054))/(-0.004058197746718332) -
                (-39.133148756582)*phi_mod*phi_mod - (19.67620071129824)*phi_mod - (2.8437278167132765) -
                (-656.3393720529776)*eta*eta - (-1226.1767515651425)*eta - (-571.0143736103015));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008380367520404705))/(0.003921168747420408) -
                (-204.9381369089092)*phi_mod*phi_mod - (1.300138592893448)*phi_mod - (1.5267413088763224) -
                (1065.3149419508384)*eta*eta - (2177.8356279620843)*eta - (1112.2806512835932));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.018174056392161558))/(-0.0016484490871564326) -
                (-422.9305174246285)*phi_mod*phi_mod - (13.028874198342034)*phi_mod - (0.02673136563763785) -
                (-32.421315843050984)*eta*eta - (-92.39540899613331)*eta - (-66.24082198140276));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.015805228741471437))/(0.0017745671907580705) -
                (-254.08246479316912)*phi_mod*phi_mod - (-6.376220887962931)*phi_mod - (-0.8412166192474896) -
                (288.16042137938024)*eta*eta - (876.9879365733917)*eta - (666.4017829142585));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01873962813156344))/(-0.0016477263094203999) -
                (-459.5873661267362)*phi_mod*phi_mod - (10.286045926058137)*phi_mod - (0.3972562598815552) -
                (-109.62860289422757)*eta*eta - (-329.0568810567783)*eta - (-247.57381340980422));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019070060168744168))/(0.0016945612752759436) -
                (-234.79961867019475)*phi_mod*phi_mod - (-9.360134481103458)*phi_mod - (-0.790832114760825) -
                (348.3443677084946)*eta*eta - (1063.277976023896)*eta - (810.57001704039));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.015776691435107338))/(-0.0017383540505573182) -
                (-418.14050873318837)*phi_mod*phi_mod - (10.484083362989908)*phi_mod - (-0.056495407285322666) -
                (-42.92650547485771)*eta*eta - (-129.10974360542988)*eta - (-98.00391558376614));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017227461957472327))/(0.00173119179999094) -
                (-206.985776533475)*phi_mod*phi_mod - (-7.080285087750925)*phi_mod - (-0.9617438101147963) -
                (215.688050411188)*eta*eta - (666.2270032554476)*eta - (513.8690718236836));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.021796787468107228))/(-0.001542157144224331) -
                (-371.2009648803205)*phi_mod*phi_mod - (7.772126293315172)*phi_mod - (-0.05570275295199585) -
                (63.468263546688355)*eta*eta - (199.84189039064364)*eta - (156.4415768671275));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019644960914209225))/(0.0016760542909681157) -
                (-206.55670346911026)*phi_mod*phi_mod - (-4.498179284576504)*phi_mod - (-0.8388536076738058) -
                (110.40426447349975)*eta*eta - (330.3232053306452)*eta - (246.2556597092225));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01427449786939724))/(-0.001763820504303214) -
                (-462.53490645335916)*phi_mod*phi_mod - (16.197482333236014)*phi_mod - (0.025048290230643158) -
                (-17.78822079735694)*eta*eta - (-46.68310957125513)*eta - (-30.692619565598736));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018950587229790643))/(0.0016540051919159576) -
                (-182.70269978240597)*phi_mod*phi_mod - (-5.161516262245099)*phi_mod - (-1.0683189050398338) -
                (-6.582960009990411)*eta*eta - (-26.972889725175328)*eta - (-26.543113174683363));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01583624363800165))/(-0.0017446603596863327) -
                (-364.6686313032062)*phi_mod*phi_mod - (11.113578565004916)*phi_mod - (-0.4670061853606504) -
                (-409.74117206715607)*eta*eta - (-1274.9673755498557)*eta - (-992.5457172425738));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019267871706552333))/(0.001659268944025569) -
                (-205.88373430189878)*phi_mod*phi_mod - (-2.2352001506085593)*phi_mod - (-0.6946909534923046) -
                (406.8493476043434)*eta*eta - (1263.8975814673206)*eta - (981.0340161878414));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.014574759505784851))/(-0.001768292552694684) -
                (-316.9049854549102)*phi_mod*phi_mod - (11.94887588728055)*phi_mod - (-0.8597649344978282) -
                (-29.69880670986514)*eta*eta - (-89.11753810056562)*eta - (-67.65119228166327));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01810760860041786))/(0.0017407210432595541) -
                (-242.87992783679755)*phi_mod*phi_mod - (-4.781170767432974)*phi_mod - (-0.5788678673112594) -
                (32.793550945674134)*eta*eta - (88.44301050449921)*eta - (57.955735713543746));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.016641814863419042))/(-0.00170518030440698) -
                (-479.39355797088035)*phi_mod*phi_mod - (14.862221946300371)*phi_mod - (0.23633687113445453) -
                (-136.10408781095)*eta*eta - (-410.5569256969302)*eta - (-310.2787981054619));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017293741533495777))/(0.0017153883659125667) -
                (-215.7862975203294)*phi_mod*phi_mod - (-6.7423771785474615)*phi_mod - (-1.0027895446647526) -
                (-21.125559518136264)*eta*eta - (-64.92398777896813)*eta - (-50.45941035925018));}

    else if (seg_combination_id == 231915 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006439612854591905))/(0.0005742567149177545) -
                (-14.505207481729252)*phi_mod*phi_mod - (4.728461284089258)*phi_mod - (0.9948648899242107) -
                (3524.1037235116623)*eta*eta - (9139.154376955015)*eta - (5924.551534132098));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005713390510190432))/(-0.0022146136435872246) -
                (-163.13500634322267)*phi_mod*phi_mod - (-11.74094750054485)*phi_mod - (2.75494264111143) -
                (715.2123372159082)*eta*eta - (1334.3442197130385)*eta - (622.2470064218037));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004033819430902712))/(0.0023569724916203895) -
                (-118.68831596890972)*phi_mod*phi_mod - (1.2532396763064835)*phi_mod - (1.5715697460744604) -
                (-382.3857717680759)*eta*eta - (-731.881617378568)*eta - (-350.0795104958822));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005438134647923493))/(-0.0021998432591665146) -
                (-94.17755041915285)*phi_mod*phi_mod - (-12.9209775271396)*phi_mod - (3.285360531281677) -
                (-627.5460794487824)*eta*eta - (-1204.8631992734258)*eta - (-578.1224035533266));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004044802884766527))/(0.002370944117521494) -
                (-3.9636319514832627)*phi_mod*phi_mod - (-18.592456841345815)*phi_mod - (2.864329334794825) -
                (-297.85677382847535)*eta*eta - (-587.7894068773859)*eta - (-289.77784457896524));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-4.099340504753157e-05))/(-0.000558706047093897) -
                (44.081158376151194)*phi_mod*phi_mod - (-4.274038496069285)*phi_mod - (-5.710087454159256) -
                (781.8953670542123)*eta*eta - (2154.612262984123)*eta - (1483.9524298594283));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002859266435502421))/(-0.00020566278419522886) -
                (-12.873944795873618)*phi_mod*phi_mod - (-0.09299470169208246)*phi_mod - (0.21950703752963344) -
                (2572.2814059555803)*eta*eta - (7164.026058577839)*eta - (4985.6769816480055));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-9.348866823375346e-05))/(-0.0003904470231381771) -
                (13.93465655071802)*phi_mod*phi_mod - (-1.3760718662627318)*phi_mod - (-0.4661554783134152) -
                (-1997.6465913658633)*eta*eta - (-5513.78045559103)*eta - (-3803.39011110212));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.025830238189557913))/(0.00030291735752627783) -
                (16.021560231060043)*phi_mod*phi_mod - (15.81948612051781)*phi_mod - (2.4578426367750357) -
                (1126.632214659429)*eta*eta - (-1433.2381496228188)*eta - (455.98379482987053));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0050115417691256455))/(-0.0014241673954636849) -
                (-48.551489841949454)*phi_mod*phi_mod - (-3.733674533216166)*phi_mod - (0.9165991685952551) -
                (-1282.457180010933)*eta*eta - (1595.9021514311955)*eta - (-495.64464194916474));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.022996961201786778))/(8.607478470315334e-05) -
                (-189.94549989776445)*phi_mod*phi_mod - (-39.384628848711785)*phi_mod - (5.05667203529369) -
                (-23800.000323674612)*eta*eta - (30838.000417120926)*eta - (-9987.936384378147));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.024272655876293812))/(0.00021880361426658193) -
                (53.2952721723796)*phi_mod*phi_mod - (-3.3035836549096036)*phi_mod - (-2.0659284203456947) -
                (2228.317682546201)*eta*eta - (-2805.4839908307627)*eta - (881.8303360417533));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.010906582754213112))/(-0.0004590823842769454) -
                (102.58678304049191)*phi_mod*phi_mod - (-3.8734762616658687)*phi_mod - (-1.099383252959749) -
                (-35.73537838560864)*eta*eta - (26.1698994452577)*eta - (-3.577124965025224));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005532496138323671))/(-6.175163527478627e-05) -
                (7540.727473736662)*phi_mod*phi_mod - (-393.30010836469586)*phi_mod - (-0.8159802495351801) -
                (13668.57142263534)*eta*eta - (-9823.085710027106)*eta - (1761.5379992376265));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008860885879449698))/(-0.004560449673597491) -
                (-222.89126310375502)*phi_mod*phi_mod - (10.103920095521948)*phi_mod - (0.9600035064248253) -
                (542.820808826028)*eta*eta - (-1030.974130212068)*eta - (488.95777608008115));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.016410128067475792))/(0.004660778206079059) -
                (-14.746879102685098)*phi_mod*phi_mod - (-18.864790704535267)*phi_mod - (2.5635127968601497) -
                (511.32389712535473)*eta*eta - (-975.059551918821)*eta - (463.91741892615084));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007801756770456546))/(-0.00455794506861457) -
                (-61.5549796340144)*phi_mod*phi_mod - (7.270914738332766)*phi_mod - (1.934336516776044) -
                (718.715086748266)*eta*eta - (-1357.0609267643927)*eta - (640.0635939463069));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01653403460684017))/(0.004700196783524451) -
                (-256.66677945006285)*phi_mod*phi_mod - (-9.339968333147693)*phi_mod - (0.8412676290054919) -
                (428.720061097735)*eta*eta - (-819.0131204875431)*eta - (390.2959644457411));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008660887952679121))/(-0.0008154972149960412) -
                (565.2037032150232)*phi_mod*phi_mod - (22.93608386021372)*phi_mod - (-2.820675930498612) -
                (367.9166097452261)*eta*eta - (-713.5499308838073)*eta - (345.83526166082845));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002632756270489973))/(0.0007998687750173937) -
                (524.307105583956)*phi_mod*phi_mod - (-24.96237611673816)*phi_mod - (-2.644767623171452) -
                (2.8406545652825423)*eta*eta - (-27.84010808377223)*eta - (23.71278405067306));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012506573982503145))/(-0.0008300109025614917) -
                (490.5746057697492)*phi_mod*phi_mod - (28.163710065111424)*phi_mod - (-2.5772174092679956) -
                (544.2636404087804)*eta*eta - (-1043.9313472377564)*eta - (500.52618225734363));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003075800146763138))/(0.0008127318820398514) -
                (523.3798234003265)*phi_mod*phi_mod - (-19.322632414073986)*phi_mod - (-2.687193509327785) -
                (-300.3231244191603)*eta*eta - (544.7606629591193)*eta - (-246.57256847540725));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009942987258572994))/(-0.0008178032004747287) -
                (552.9722489867812)*phi_mod*phi_mod - (26.08527396763707)*phi_mod - (-2.6667806165224017) -
                (364.5118950977402)*eta*eta - (-706.3144221602026)*eta - (342.04128284763925));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0027423994514861687))/(0.0008044646918973478) -
                (541.894316794605)*phi_mod*phi_mod - (-20.729257327599413)*phi_mod - (-2.8495154909158296) -
                (42.9443543626879)*eta*eta - (-104.36662991592097)*eta - (60.20558161896898));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008434899976127476))/(-0.0007931616289034626) -
                (543.7016924018881)*phi_mod*phi_mod - (26.286003624419582)*phi_mod - (-2.2999082395686807) -
                (44.69500906815224)*eta*eta - (-97.603511807677)*eta - (52.59817738713097));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00197303725051523))/(0.0007524259484533841) -
                (714.806464970258)*phi_mod*phi_mod - (-21.7812858456979)*phi_mod - (-2.87442993863426) -
                (-1523.8574601976397)*eta*eta - (2878.388834517046)*eta - (-1358.998709064387));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001087298812683414))/(-0.0008017074114631209) -
                (527.3418811910019)*phi_mod*phi_mod - (23.23611082783547)*phi_mod - (-2.250953859291242) -
                (268.15586577540324)*eta*eta - (-516.200819972227)*eta - (248.49902698876815));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0026567441027109473))/(0.0007623673197173432) -
                (782.3950757815264)*phi_mod*phi_mod - (-31.43555197100638)*phi_mod - (-2.4863786048520686) -
                (-4967.809953831232)*eta*eta - (9467.182861142648)*eta - (-4510.171582353308));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008408329403280775))/(-0.000798300064845084) -
                (494.0453796476772)*phi_mod*phi_mod - (23.650919872020737)*phi_mod - (-2.227180899947599) -
                (217.33142763711757)*eta*eta - (-429.98010113365655)*eta - (212.56017191401654));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002391898725399051))/(0.0007735616970790342) -
                (637.9197919747745)*phi_mod*phi_mod - (-21.879905742011214)*phi_mod - (-2.889105138959206) -
                (305.457946194343)*eta*eta - (-598.8734372764314)*eta - (293.4198605013798));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006786770485787157))/(-0.0021689366762306433) -
                (-98.05630307705613)*phi_mod*phi_mod - (-5.256340683347826)*phi_mod - (1.3202352147231982) -
                (-85.65899579685271)*eta*eta - (-118.58976065424291)*eta - (-40.8073353722866));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004581925993927936))/(0.002173460187613273) -
                (-91.69344120014041)*phi_mod*phi_mod - (5.2133628510406025)*phi_mod - (1.3493873058866772) -
                (7.633101780311983)*eta*eta - (18.21623268355584)*eta - (9.423616823810631));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006895833472108955))/(-0.002177748089979937) -
                (-101.3047756601081)*phi_mod*phi_mod - (-5.276940016950092)*phi_mod - (1.3770190597751502) -
                (-58.08282623521694)*eta*eta - (-77.75506095410118)*eta - (-25.73032034313972));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004628411975075471))/(0.002180309215823222) -
                (-91.35619621954419)*phi_mod*phi_mod - (5.457319044857587)*phi_mod - (1.3183032161062476) -
                (3.862617102273714)*eta*eta - (12.863127082506965)*eta - (7.521857771889014));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0065518940066393505))/(-0.0021632270863919207) -
                (-99.4918217999019)*phi_mod*phi_mod - (-5.098094516380431)*phi_mod - (1.3470395132796802) -
                (-47.26233953967619)*eta*eta - (-62.421899719813396)*eta - (-20.30460510208679));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004577183615165229))/(0.0021795115642006795) -
                (-89.74503230554089)*phi_mod*phi_mod - (5.126509662732098)*phi_mod - (1.3339091899076467) -
                (10.941414958960369)*eta*eta - (22.952189344096418)*eta - (11.116580727377386));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007014973589895242))/(-0.00218614159365007) -
                (-102.26063332751565)*phi_mod*phi_mod - (-6.369351506810602)*phi_mod - (1.3496032502628983) -
                (-75.94308806433709)*eta*eta - (-103.69360910185284)*eta - (-35.11893278384803));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004800334932686788))/(0.0021821606545779216) -
                (-94.56446477709122)*phi_mod*phi_mod - (4.443172715998165)*phi_mod - (1.4131383576574605) -
                (13.5186997989608)*eta*eta - (27.35956713181569)*eta - (12.965104043064981));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007463358200331459))/(-0.002214929526925745) -
                (-107.6880444567836)*phi_mod*phi_mod - (-5.358992223813152)*phi_mod - (1.527755506720364) -
                (-54.15206635579857)*eta*eta - (-71.01728455624429)*eta - (-22.892839934448414));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0049108854222587725))/(0.0021974458880135907) -
                (-89.64739233272113)*phi_mod*phi_mod - (4.999916646785851)*phi_mod - (1.375566135830567) -
                (13.121944008645524)*eta*eta - (27.28151073789137)*eta - (13.1471057776378));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037314645370977242))/(-0.0012359534583876717) -
                (362.9079313871738)*phi_mod*phi_mod - (21.389625476152744)*phi_mod - (-1.8148862703872697) -
                (-13.60833410974342)*eta*eta - (2.8434947440422)*eta - (-0.025236844685487418));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0041040007442214475))/(0.0012416962132288) -
                (356.03334157706473)*phi_mod*phi_mod - (-22.21361632231869)*phi_mod - (-1.7685758104804217) -
                (-16.589344752471995)*eta*eta - (0.4748794151610443)*eta - (0.2547094887141645));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003508206462984768))/(-0.001226535520931448) -
                (376.8126402237805)*phi_mod*phi_mod - (22.93058257830964)*phi_mod - (-1.914674203679735) -
                (-18.33623302134092)*eta*eta - (3.910358915973452)*eta - (-0.05002103768940844));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004069512261598579))/(0.0012441930575932537) -
                (336.4777839283827)*phi_mod*phi_mod - (-18.047947842900054)*phi_mod - (-1.801006397753837) -
                (-16.7013276950096)*eta*eta - (0.524583757637519)*eta - (0.26778342806503586));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003739563874758379))/(-0.0012486994097957646) -
                (351.17812191889755)*phi_mod*phi_mod - (20.67403062512401)*phi_mod - (-2.0862652712151495) -
                (-7.206101931059936)*eta*eta - (0.8274672740386413)*eta - (0.13505346734629714));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004119066521593697))/(0.0012588176916038766) -
                (361.92817359243304)*phi_mod*phi_mod - (-19.458951922273013)*phi_mod - (-2.1832157788533615) -
                (-15.748556193905303)*eta*eta - (0.8919122894915084)*eta - (0.2513792824789548));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003642825004464006))/(-0.0012289053648960268) -
                (391.40086558372116)*phi_mod*phi_mod - (21.260380334396938)*phi_mod - (-2.0414867577375957) -
                (-10.153312963668016)*eta*eta - (-1.2610661824881095)*eta - (0.5942791146728704));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003910523762027734))/(0.0012303703920726733) -
                (381.5078397037725)*phi_mod*phi_mod - (-21.846573183295167)*phi_mod - (-2.0497664643557814) -
                (-32.48090518195145)*eta*eta - (4.995278294525978)*eta - (0.07932126673277465));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036833816271456075))/(-0.0012579133058084092) -
                (337.8613334003023)*phi_mod*phi_mod - (18.410348086769027)*phi_mod - (-2.2840471255404355) -
                (-12.798734528024598)*eta*eta - (2.2054057010723938)*eta - (0.08497449615631124));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004162592036607316))/(0.0012681753286036023) -
                (351.1622772395833)*phi_mod*phi_mod - (-21.329789508875635)*phi_mod - (-2.389414745993582) -
                (-29.197370664590238)*eta*eta - (3.7020272417161015)*eta - (0.14151907496191146));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00369457596486838))/(-0.0012429405036986153) -
                (329.8300833342719)*phi_mod*phi_mod - (20.503987899100995)*phi_mod - (-1.848693385069725) -
                (-10.206437814110945)*eta*eta - (1.35244688553587)*eta - (0.12042674381182651));}

    else if (seg_combination_id == 60402 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003917687148440832))/(0.001244935618962838) -
                (332.0209067249165)*phi_mod*phi_mod - (-20.538771942361137)*phi_mod - (-1.9864762322985463) -
                (-7.928867143041489)*eta*eta - (-0.8173777249274047)*eta - (0.2727288638704999));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006111662074934725))/(-0.0024682010489688834) -
                (-100.42133542574196)*phi_mod*phi_mod - (-3.1571908605975647)*phi_mod - (1.569359779972056) -
                (-130.74503249206813)*eta*eta - (128.41188513654572)*eta - (-31.41799153863041));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008327073695342658))/(0.0024917510932763467) -
                (-96.67177022205864)*phi_mod*phi_mod - (3.934174208265026)*phi_mod - (1.2696756803490283) -
                (-289.1149243667102)*eta*eta - (272.63507896600083)*eta - (-64.13659922187091));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006420638495285578))/(-0.0025061762527401926) -
                (-105.314526003741)*phi_mod*phi_mod - (-3.887439287771802)*phi_mod - (1.5191642146331255) -
                (-471.4354507268291)*eta*eta - (455.27369908380604)*eta - (-109.79296384567921));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007450253217701413))/(0.002480231238612813) -
                (-110.12899251968267)*phi_mod*phi_mod - (6.423748913672109)*phi_mod - (1.365532280823713) -
                (-263.5305704613263)*eta*eta - (245.764068841308)*eta - (-57.18307875153671));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006327524847886453))/(-0.0025052438950534887) -
                (-103.59100822790236)*phi_mod*phi_mod - (-4.385895879990946)*phi_mod - (1.3800259096307799) -
                (-29.7431539149444)*eta*eta - (25.92233106556293)*eta - (-5.5170698620350676));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008254900469036047))/(0.0025273800750057794) -
                (-108.01832213887329)*phi_mod*phi_mod - (5.258204097212901)*phi_mod - (1.3090982749809537) -
                (0.6282192684430801)*eta*eta - (-5.932603205346458)*eta - (2.7362184225839075));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00615324091876947))/(-0.0024786123808602195) -
                (-114.48818265289391)*phi_mod*phi_mod - (-6.352832540997815)*phi_mod - (1.6003610140104487) -
                (-316.1467655820922)*eta*eta - (301.9351363111262)*eta - (-71.95900483803184));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008693553791840397))/(0.002526196821499509) -
                (-112.27932233662669)*phi_mod*phi_mod - (4.32400510907473)*phi_mod - (1.5157202587857384) -
                (-362.79670468452355)*eta*eta - (337.24732492563385)*eta - (-78.21226830588145));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007179425503550778))/(-0.00250031566162899) -
                (-108.97008614393911)*phi_mod*phi_mod - (-4.076865656174008)*phi_mod - (1.7178842564949972) -
                (-344.7662155191365)*eta*eta - (330.8052752285991)*eta - (-79.2473063616975));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008697002164916872))/(0.00250545380080505) -
                (-102.08190352048489)*phi_mod*phi_mod - (4.124796326132988)*phi_mod - (1.4864167472876777) -
                (153.94328037504212)*eta*eta - (-154.91639805716983)*eta - (38.904274535366035));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0073870895414911006))/(-0.0025164673887315904) -
                (-93.08596105180015)*phi_mod*phi_mod - (-6.393571158076195)*phi_mod - (1.3620706712245516) -
                (-221.7875174366556)*eta*eta - (208.9801561235727)*eta - (-49.09286903619216));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007582111711288089))/(0.0024400608006751104) -
                (-107.24300467276295)*phi_mod*phi_mod - (6.361863384863307)*phi_mod - (1.4444966101399341) -
                (84.06605023647529)*eta*eta - (-86.1928148031641)*eta - (22.071348505513907));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010168197611002512))/(-0.0006036945690571537) -
                (564.6389819954287)*phi_mod*phi_mod - (-22.069228341473895)*phi_mod - (-2.0963275218966975) -
                (-97.29979169769088)*eta*eta - (-318.47628253706915)*eta - (-255.72174527068182));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016064523684635))/(0.0006077884949886303) -
                (422.0171789617247)*phi_mod*phi_mod - (14.612441378395246)*phi_mod - (-2.203049653653281) -
                (171.7555237481415)*eta*eta - (443.5076593340408)*eta - (284.62946592791303));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008764384079377337))/(-0.0006003573106300084) -
                (559.2769336232546)*phi_mod*phi_mod - (-18.09162407806131)*phi_mod - (-2.126909272720951) -
                (-131.7225441004593)*eta*eta - (-418.71576402481355)*eta - (-328.7050047186617));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016426732942088054))/(0.0006104331838895544) -
                (425.35078960426137)*phi_mod*phi_mod - (15.734624546264236)*phi_mod - (-2.208770218439188) -
                (97.83794312087535)*eta*eta - (240.07485505059265)*eta - (144.66545806335444));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010102865685616606))/(-0.0006045935911843932) -
                (555.0107317259439)*phi_mod*phi_mod - (-22.137988295627984)*phi_mod - (-2.178993428893352) -
                (-127.29689164485684)*eta*eta - (-405.4744862655656)*eta - (-318.7242149284246));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015288987444854027))/(0.0006055733112367129) -
                (417.9537909448956)*phi_mod*phi_mod - (12.08291187995287)*phi_mod - (-2.2863878506714066) -
                (117.726259867134)*eta*eta - (295.19395711048503)*eta - (182.9512607189741));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010042729539689228))/(-0.0005967586403526875) -
                (543.6215214381194)*phi_mod*phi_mod - (-20.739915554431143)*phi_mod - (-2.0001692770213313) -
                (-93.67573149912549)*eta*eta - (-307.7724249257287)*eta - (-247.78492040496047));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001406887892401095))/(0.0005912408473390747) -
                (432.7108292252499)*phi_mod*phi_mod - (13.396486687074674)*phi_mod - (-2.187626682420338) -
                (2.183628366675513)*eta*eta - (-25.853664605403672)*eta - (-40.08311397247809));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009230481473868155))/(-0.0005958805244337544) -
                (550.2915874720704)*phi_mod*phi_mod - (-22.098473774549806)*phi_mod - (-2.1535250450342214) -
                (-163.41946688493016)*eta*eta - (-503.2691794723069)*eta - (-384.7408129861942));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014456904592448118))/(0.0005944478245848188) -
                (427.4941747570866)*phi_mod*phi_mod - (13.10828721018046)*phi_mod - (-2.24273323746012) -
                (-41.80410331491195)*eta*eta - (-147.5117889287955)*eta - (-124.16909729535756));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009852686189479741))/(-0.0006066698333893028) -
                (464.8419849450446)*phi_mod*phi_mod - (-15.880020884728626)*phi_mod - (-2.2318572743532727) -
                (69.57666187337054)*eta*eta - (168.1616377505721)*eta - (98.53918199399492));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00145751216815926))/(0.0005979612474089086) -
                (362.9540990730546)*phi_mod*phi_mod - (13.565803248405448)*phi_mod - (-2.2221581235833776) -
                (120.45857798069761)*eta*eta - (311.9670153812703)*eta - (200.8408752723033));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000969703608999936))/(-0.0005955986992363035) -
                (468.44024333092557)*phi_mod*phi_mod - (-16.327535071615227)*phi_mod - (-1.9827596487503092) -
                (-62.54917845106817)*eta*eta - (-207.3014851807426)*eta - (-167.97438915145437));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014230117817588248))/(0.0005959527788569684) -
                (346.20264809444706)*phi_mod*phi_mod - (12.335069141632575)*phi_mod - (-2.060615663764191) -
                (-7.920294187346565)*eta*eta - (-44.99958346914558)*eta - (-47.232277515086736));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009545978330618471))/(-0.0006025984256987539) -
                (570.034362985029)*phi_mod*phi_mod - (-20.97064910701117)*phi_mod - (-2.1437984036663695) -
                (-106.92166420426109)*eta*eta - (-347.0220856885276)*eta - (-276.88735460064856));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001515909299766216))/(0.0006081458704977826) -
                (417.09916151379554)*phi_mod*phi_mod - (13.363982074281703)*phi_mod - (-2.2390647993584887) -
                (162.76241482669144)*eta*eta - (418.52327452653344)*eta - (267.2664375922923));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007485334401177099))/(0.00014450602507264906) -
                (-252.4562641945127)*phi_mod*phi_mod - (-12.322380254517338)*phi_mod - (2.3743564577365817) -
                (537.9482596456863)*eta*eta - (-1726.6325720662771)*eta - (1384.2817796400623));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007227725389763122))/(0.0001444883051948145) -
                (-195.5427228411682)*phi_mod*phi_mod - (-10.64130760451692)*phi_mod - (1.262536301404559) -
                (162.29520243733353)*eta*eta - (-499.4075680487206)*eta - (382.46445202384143));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006771946587350181))/(9.09433572154828e-05) -
                (-264.87258489537834)*phi_mod*phi_mod - (-19.921469492227036)*phi_mod - (1.390585530030232) -
                (392.2329331006462)*eta*eta - (-1242.2110647837787)*eta - (982.0574126302207));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00742489144805264))/(0.00013419173911838176) -
                (-310.39595595179145)*phi_mod*phi_mod - (-19.570718455408986)*phi_mod - (2.8344939222145986) -
                (179.77115401279383)*eta*eta - (-538.6878003488973)*eta - (399.7982497229463));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006187058333680017))/(1.3638292544968109e-05) -
                (67.14449247199859)*phi_mod*phi_mod - (15.299003341592105)*phi_mod - (-0.4897738997914661) -
                (145.02334558274399)*eta*eta - (-349.4902494728059)*eta - (184.0225687558087));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006707514396152044))/(9.802510052436048e-05) -
                (-250.63133376576758)*phi_mod*phi_mod - (-3.3613761732631033)*phi_mod - (1.875714483231451) -
                (762.6100669743207)*eta*eta - (-2446.2484293327047)*eta - (1960.7500298851219));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.007419052844125287))/(0.0001340701261508829) -
                (-303.8101217179105)*phi_mod*phi_mod - (-21.088172594752454)*phi_mod - (2.5284454914851113) -
                (200.62967585138668)*eta*eta - (-610.3687127750981)*eta - (461.462339428011));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0067225417735197355))/(9.987358316420212e-05) -
                (-249.37962537464276)*phi_mod*phi_mod - (-33.572158352800315)*phi_mod - (1.1238760207306726) -
                (489.03081394694465)*eta*eta - (-1560.3127589092799)*eta - (1243.6271452232993));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00019886406341924917))/(-0.0008550978112904386) -
                (424.4814832523606)*phi_mod*phi_mod - (-13.253511110922615)*phi_mod - (-2.012775711592361) -
                (-524.5964149177232)*eta*eta - (-1633.0050198334525)*eta - (-1267.7809942846654));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00228101628987697))/(0.0008569736980769284) -
                (429.3262234285394)*phi_mod*phi_mod - (16.37986020390354)*phi_mod - (-2.481922521400376) -
                (568.2779940629122)*eta*eta - (1593.3726202671764)*eta - (1114.5209353758478));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00036099869022027396))/(-0.0008632391513105567) -
                (409.667423650145)*phi_mod*phi_mod - (-10.42868628951079)*phi_mod - (-2.022298977140399) -
                (18.226770613063014)*eta*eta - (-29.969925285152478)*eta - (-84.3813243789408));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024218439035146315))/(0.0008732309057034798) -
                (439.3912448174518)*phi_mod*phi_mod - (17.76498795169072)*phi_mod - (-2.5178553729578104) -
                (608.569839524154)*eta*eta - (1711.4928900577622)*eta - (1201.043970940916));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00019173224969703517))/(-0.0008675177629995203) -
                (435.57874204127575)*phi_mod*phi_mod - (-13.702795951332607)*phi_mod - (-2.1569968029356996) -
                (-492.0649428533629)*eta*eta - (-1546.0796630784002)*eta - (-1210.5227961371334));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00223235833324198))/(0.0008661905342098375) -
                (411.8709422758804)*phi_mod*phi_mod - (15.281513188064023)*phi_mod - (-2.454130374211931) -
                (552.023717111275)*eta*eta - (1548.5887487405216)*eta - (1083.6638419537599));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.000389988303190969))/(-0.0008356221631473037) -
                (473.2431395302526)*phi_mod*phi_mod - (-13.290058565219482)*phi_mod - (-2.2833778334929797) -
                (-282.966501543392)*eta*eta - (-926.0469497648785)*eta - (-750.8273031901402));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021929170115236652))/(0.000835557071168065) -
                (469.42090034250316)*phi_mod*phi_mod - (15.66599083042969)*phi_mod - (-2.679867125360795) -
                (421.5169308213151)*eta*eta - (1168.902992106617)*eta - (807.6641885451436));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0005823091649863434))/(-0.0008182270525084368) -
                (479.21792413538833)*phi_mod*phi_mod - (-15.510226785643715)*phi_mod - (-2.2462941827968885) -
                (29.295928699122182)*eta*eta - (3.9122350507087478)*eta - (-58.372871948325944));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021601549481144932))/(0.0008360577303535324) -
                (454.7604480692919)*phi_mod*phi_mod - (16.288706670127997)*phi_mod - (-2.6119475629814) -
                (248.1366766107937)*eta*eta - (663.7409589657033)*eta - (439.78645611902687));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0013101225161045607))/(-0.0008134607431446488) -
                (420.51545837002413)*phi_mod*phi_mod - (-10.632067611012918)*phi_mod - (-3.027830752280204) -
                (1180.6999744711727)*eta*eta - (3442.8387504973275)*eta - (2508.850824947748));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002489136449395695))/(0.0008573182205929519) -
                (360.8931170621898)*phi_mod*phi_mod - (14.223513062421315)*phi_mod - (-2.5406588646241564) -
                (513.2125898392114)*eta*eta - (1449.0979064487342)*eta - (1021.3650164534297));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0005015596760671012))/(-0.0008604144709132076) -
                (364.79515448347735)*phi_mod*phi_mod - (-13.562868976337572)*phi_mod - (-2.6897115059909615) -
                (611.8689701390459)*eta*eta - (1761.3946705021765)*eta - (1266.3591656314052));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0021748765267262105))/(0.0008510172989630978) -
                (372.6429318378562)*phi_mod*phi_mod - (11.133181001799274)*phi_mod - (-2.8174403014965885) -
                (328.22880905975273)*eta*eta - (910.7813722597689)*eta - (629.7023829835076));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0004511768877591744))/(-0.0008537994761696508) -
                (442.52947743536674)*phi_mod*phi_mod - (-12.33811054448109)*phi_mod - (-2.1113857831986493) -
                (202.53151800514078)*eta*eta - (504.13075501263415)*eta - (302.2723401183889));}

    else if (seg_combination_id == 232024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0023398506341202633))/(0.0008635719528824894) -
                (427.08930418562204)*phi_mod*phi_mod - (15.556279440442577)*phi_mod - (-2.5442271705310198) -
                (661.5239646912373)*eta*eta - (1866.3247406630505)*eta - (1314.217885467878));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009564765147457693))/(-0.0009059140889127235) -
                (-85.48128243432248)*phi_mod*phi_mod - (4.6093558861789035)*phi_mod - (1.2212934500717036) -
                (52.142999354221814)*eta*eta - (208.99063201217817)*eta - (209.13041642101305));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0006340013186405848))/(0.0008337514105003412) -
                (253.7130052108509)*phi_mod*phi_mod - (11.75494437127272)*phi_mod - (-3.6986766104541293) -
                (-184.2972728280696)*eta*eta - (-659.7276519390563)*eta - (-589.6016065793877));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000849722190552607))/(-0.0008899126284301153) -
                (-181.86985729121182)*phi_mod*phi_mod - (6.929479920817044)*phi_mod - (3.03788280251428) -
                (41.19941940939129)*eta*eta - (143.01051136331105)*eta - (122.14190340786634));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008527148880146616))/(-0.0008979173238788138) -
                (-53.595695876094176)*phi_mod*phi_mod - (6.228355819286551)*phi_mod - (0.7745661746096567) -
                (-314.8023484717816)*eta*eta - (-1219.7180757630547)*eta - (-1181.4142131760273));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010070513904749169))/(-0.000895672477200182) -
                (-98.05109940508977)*phi_mod*phi_mod - (3.2366979328903125)*phi_mod - (1.703035043598289) -
                (234.6199139907843)*eta*eta - (897.1796298506189)*eta - (857.2538532530951));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0031438991954911804))/(-0.0009902061975469152) -
                (-72.2169995607912)*phi_mod*phi_mod - (2.8869517721238536)*phi_mod - (0.5896297792810428) -
                (128.22068328161032)*eta*eta - (475.19886129730156)*eta - (439.12460957770753));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0017492223976082833))/(-0.0009300639620084284) -
                (-234.55457852213712)*phi_mod*phi_mod - (8.11313861757333)*phi_mod - (3.3631411750241655) -
                (174.6846458243401)*eta*eta - (663.116259761532)*eta - (628.7012316292838));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012530272371264854))/(-0.0009099959761625286) -
                (-53.341080934707406)*phi_mod*phi_mod - (5.386155773602901)*phi_mod - (0.7810360635134681) -
                (32.56990651112792)*eta*eta - (130.10355424497115)*eta - (129.72569755070893));}

    else if (seg_combination_id == 232015 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013153305392021104))/(-0.0009139372325117809) -
                (-85.84516678148226)*phi_mod*phi_mod - (4.070579023066213)*phi_mod - (1.2369371279613746) -
                (110.01116047916231)*eta*eta - (433.0526994503118)*eta - (426.11529258205564));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.009886596338445864))/(-0.0029032193195966324) -
                (-223.75729532047302)*phi_mod*phi_mod - (0.45364524553822133)*phi_mod - (1.321284561051417) -
                (488.99758675633706)*eta*eta - (397.353901600221)*eta - (79.8155413377739));}

    else if (seg_combination_id == 50308 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.025300835840077057))/(-0.005789461655171685) -
                (-128.25482156248572)*phi_mod*phi_mod - (-30.058640892538953)*phi_mod - (-1.081064061580333) -
                (-256.1301665260438)*eta*eta - (-236.95790111721098)*eta - (-54.62186279775615));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004792076445529795))/(-0.0011979852074961834) -
                (-4265.501549318916)*phi_mod*phi_mod - (1720.6303302796127)*phi_mod - (-173.36931302178306) -
                (-577.5241482892428)*eta*eta - (-1126.9459891531242)*eta - (-549.7179216442166));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003416276604629218))/(0.0013621622434274777) -
                (-1.2369220326550203)*phi_mod*phi_mod - (-0.3223129788101479)*phi_mod - (-0.2674168901175324) -
                (634.4715875033054)*eta*eta - (1283.224102547436)*eta - (648.5607550330659));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.036138787124143916))/(8.76252699549913e-05) -
                (723.0195227765727)*phi_mod*phi_mod - (77.2418221258269)*phi_mod - (-18.669832971797213) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 50302 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002600554404385557))/(0.0013053131613460379) -
                (5.983118264963904)*phi_mod*phi_mod - (6.110695659506943)*phi_mod - (0.8115462953905958) -
                (109.81752535201629)*eta*eta - (237.58462957421378)*eta - (127.69239205498113));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0032989097942366314))/(0.0016446998205508717) -
                (-52.70612392091795)*phi_mod*phi_mod - (2.244798931595509)*phi_mod - (0.9393363998446346) -
                (-372.6500733360301)*eta*eta - (728.5625575853574)*eta - (-355.8368314171701));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034182793932415892))/(0.0016570725686219786) -
                (-50.60904724157691)*phi_mod*phi_mod - (2.8186117852293817)*phi_mod - (0.9252086122801801) -
                (-301.0356292335369)*eta*eta - (593.2345038345984)*eta - (-291.9521170249745));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003522267868750137))/(0.0016638918772743222) -
                (-55.82900851670532)*phi_mod*phi_mod - (3.548753407612202)*phi_mod - (0.9618375510343369) -
                (-325.9699593171874)*eta*eta - (635.8699080154832)*eta - (-309.9240940384568));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034498682371318537))/(0.0016739817373684766) -
                (-58.93334892426745)*phi_mod*phi_mod - (3.23372333572152)*phi_mod - (1.0334328471539103) -
                (-307.43199635632425)*eta*eta - (604.818056494625)*eta - (-297.18618964033857));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003657277350556085))/(0.0016689549648789984) -
                (-60.56673723001046)*phi_mod*phi_mod - (3.2707078863655834)*phi_mod - (1.2016897175494898) -
                (-532.310806251588)*eta*eta - (1035.5409484339884)*eta - (-503.3889198138188));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021541915807432883))/(-0.0010425992470999533) -
                (420.6979096265896)*phi_mod*phi_mod - (18.243726553325963)*phi_mod - (-2.8465895286163536) -
                (-3.779851534114967)*eta*eta - (-28.414805416567685)*eta - (-13.183261280406938));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0029012053254503212))/(0.001039030513846883) -
                (334.16117811615305)*phi_mod*phi_mod - (-18.16561115645112)*phi_mod - (-1.745136790407339) -
                (89.61179974289611)*eta*eta - (105.86726848102973)*eta - (31.000211620753337));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00409815348597094))/(-0.0010872097997935179) -
                (408.1100972645452)*phi_mod*phi_mod - (14.15881129305116)*phi_mod - (-2.602395885381457) -
                (518.6652712834476)*eta*eta - (502.35842521233843)*eta - (121.41989046705885));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030193979710615047))/(0.001044684238774535) -
                (353.4656540233148)*phi_mod*phi_mod - (-22.092811347682908)*phi_mod - (-1.6412317690993001) -
                (186.58360157044308)*eta*eta - (213.4985294826779)*eta - (60.72836499076775));}

    else if (seg_combination_id == 50302 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0048878877212837745))/(0.001600250615584911) -
                (20.02482127925385)*phi_mod*phi_mod - (-4.07311809270557)*phi_mod - (-0.48520445792632433) -
                (67.2208182982587)*eta*eta - (106.74487518574823)*eta - (42.28009226081273));}

    else if (seg_combination_id == 50302 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004276172283918948))/(0.0015538047090316882) -
                (-35.734398908321985)*phi_mod*phi_mod - (-23.076493847200773)*phi_mod - (-3.1391639470309065) -
                (-90.3180841182896)*eta*eta - (-117.74850215195647)*eta - (-37.478839100539595));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004762688695244434))/(-0.0007100277592775238) -
                (140.23466190187622)*phi_mod*phi_mod - (-2.490107823741233)*phi_mod - (-2.0330550058533827) -
                (16.98137463416042)*eta*eta - (45.83097107730303)*eta - (26.337133425652613));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011153422254257762))/(0.0007150397900783274) -
                (188.43893049888808)*phi_mod*phi_mod - (5.049983089969198)*phi_mod - (-2.6327902397514014) -
                (107.86496679307378)*eta*eta - (373.3736801235137)*eta - (322.45833357134427));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004809056979823761))/(-0.0007099511207998737) -
                (142.94363394157944)*phi_mod*phi_mod - (-2.5644534200001172)*phi_mod - (-2.0753116327957373) -
                (16.06579633169921)*eta*eta - (42.122327693978185)*eta - (22.60926309432464));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010586604899885195))/(0.0007126784427847337) -
                (186.33440880793577)*phi_mod*phi_mod - (4.357287289225621)*phi_mod - (-2.584756694916322) -
                (107.89947699846478)*eta*eta - (373.2452464264895)*eta - (322.1117414797683));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-3.190207868089649e-05))/(-0.0006867302588466453) -
                (167.36907766639735)*phi_mod*phi_mod - (-3.563871295732118)*phi_mod - (-2.5476071350470955) -
                (31.658695671193538)*eta*eta - (102.34525593323715)*eta - (80.7846913905755));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000776694449902369))/(0.0006886752459943604) -
                (204.88525177778735)*phi_mod*phi_mod - (5.660169474238444)*phi_mod - (-2.751894368912749) -
                (132.6259048135404)*eta*eta - (456.7883700775955)*eta - (392.77657781737656));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00048715539221010637))/(-0.0007082221496428618) -
                (143.60182558917387)*phi_mod*phi_mod - (-2.6470298312525666)*phi_mod - (-2.04375266123286) -
                (23.409314332606694)*eta*eta - (69.08110500749022)*eta - (47.32834844576766));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001158203446326913))/(0.0007197964731423437) -
                (187.73372967229847)*phi_mod*phi_mod - (5.049344239339078)*phi_mod - (-2.654871916750606) -
                (116.94928111783739)*eta*eta - (405.88744208436634)*eta - (351.4904536590326));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00033152806008319665))/(-0.0007035077373912523) -
                (146.85202130296565)*phi_mod*phi_mod - (-3.9286321889039617)*phi_mod - (-2.193986737517041) -
                (26.861723618594862)*eta*eta - (81.98203514530303)*eta - (59.41341840696857));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009119068499329025))/(0.0007100580601803204) -
                (192.3284995878814)*phi_mod*phi_mod - (3.4075657709680742)*phi_mod - (-2.798574856032986) -
                (106.66258663209996)*eta*eta - (367.45979321934016)*eta - (315.6837028703382));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005706398180624955))/(-0.0007117814648550493) -
                (144.71209874393597)*phi_mod*phi_mod - (-4.337096856050767)*phi_mod - (-2.0743107778678174) -
                (23.32270373880072)*eta*eta - (69.24052617415025)*eta - (47.95091471628347));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010937578089900532))/(0.0007098429362769099) -
                (186.30818144842124)*phi_mod*phi_mod - (3.13587632158843)*phi_mod - (-2.6462653793371853) -
                (94.4564554267874)*eta*eta - (324.6901252023399)*eta - (278.31620727608674));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000428822869474337))/(-0.0007043669188373882) -
                (143.82224440232702)*phi_mod*phi_mod - (-3.0731683476423317)*phi_mod - (-2.106285517833953) -
                (22.07576615437593)*eta*eta - (65.26281062821556)*eta - (44.86328111085828));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000972300975829524))/(0.0007064610567426595) -
                (187.72852833489756)*phi_mod*phi_mod - (4.344282473592401)*phi_mod - (-2.645256271998736) -
                (100.1612934118257)*eta*eta - (345.5446555308907)*eta - (297.3381061514787));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00046991257883328676))/(-0.0007066619571369892) -
                (144.0542045849549)*phi_mod*phi_mod - (-3.390547132297002)*phi_mod - (-2.079063648874005) -
                (21.47798705707923)*eta*eta - (63.01463934438307)*eta - (42.778381235945865));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001038115691476415))/(0.0007052317130545521) -
                (190.84247894109703)*phi_mod*phi_mod - (4.231639268263002)*phi_mod - (-2.702585555726859) -
                (101.73999664448921)*eta*eta - (350.9333606158318)*eta - (301.98154296024));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005780831705426736))/(-3.0213140741370283e-05) -
                (102.28863599965975)*phi_mod*phi_mod - (20.381102038785162)*phi_mod - (-1.1003793232778205) -
                (-5078.1468444784105)*eta*eta - (6068.01470650848)*eta - (-1810.7672802149239));}

    else if (seg_combination_id == 100902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004747246081547247))/(4.959025783483541e-05) -
                (-322.85991694563893)*phi_mod*phi_mod - (13.010324514862898)*phi_mod - (0.6132331034227799) -
                (3888.6753257979262)*eta*eta - (-4501.844854368426)*eta - (1301.7353368067797));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006088811368227812))/(-0.002750219170597329) -
                (-37.76072826792609)*phi_mod*phi_mod - (6.518311124078529)*phi_mod - (1.472506123562212) -
                (78.14929724965549)*eta*eta - (-116.13379888958598)*eta - (43.18250204953462));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009213589830262497))/(0.0027417311449566203) -
                (-120.47386634365174)*phi_mod*phi_mod - (3.034841570279469)*phi_mod - (1.1813269591790967) -
                (202.23879177478972)*eta*eta - (-296.6894845001593)*eta - (108.76119723994171));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005917180441275371))/(-0.0027306654938489875) -
                (-105.88688378637589)*phi_mod*phi_mod - (-1.3909567817159927)*phi_mod - (1.1321358073611534) -
                (114.45847574174111)*eta*eta - (-167.40441208180215)*eta - (61.218573780069384));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008885209996374252))/(0.002714664285518285) -
                (-37.25786138860088)*phi_mod*phi_mod - (-8.325868905859265)*phi_mod - (1.8051204820078417) -
                (46.2167984402622)*eta*eta - (-72.90175847044421)*eta - (28.596964649356373));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009075029098596384))/(-0.0009023686318654172) -
                (-10.649431995783688)*phi_mod*phi_mod - (0.052341902076702904)*phi_mod - (0.24189908317379913) -
                (-82.90181483273048)*eta*eta - (306.03707755419555)*eta - (-281.4170021629376));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006405156969756245))/(0.0010555911073761397) -
                (5.744381430740943)*phi_mod*phi_mod - (12.265245998040848)*phi_mod - (-0.9085497359483331) -
                (-138.90165313385154)*eta*eta - (505.27636907020707)*eta - (-457.58000990798956));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004762419040474138))/(-0.0008758066615499152) -
                (-5.864469146294278)*phi_mod*phi_mod - (3.7667708948034515)*phi_mod - (0.512010001212627) -
                (157.21136739840367)*eta*eta - (-617.6242644728029)*eta - (606.5738737829284));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001328703177606268))/(-0.0009143797986487594) -
                (9.907770678070312)*phi_mod*phi_mod - (5.0520767374040485)*phi_mod - (-0.08371260593615998) -
                (-523.3223703890424)*eta*eta - (2054.9993904613643)*eta - (-2017.2706271341488));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00485341634630474))/(0.0009800807375827225) -
                (182.0797840366113)*phi_mod*phi_mod - (-11.187676410733145)*phi_mod - (-2.638024017533324) -
                (-76.74758429690628)*eta*eta - (278.6934634622695)*eta - (-252.52377126771492));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012462967878391368))/(-0.0009034425084689498) -
                (-58.85108283547953)*phi_mod*phi_mod - (1.217210034804828)*phi_mod - (0.9957826616081656) -
                (105.1444392898439)*eta*eta - (-397.12891137221555)*eta - (374.51328368651474));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0035641905348966197))/(-0.0010128422450955837) -
                (156.53270210469108)*phi_mod*phi_mod - (3.1093313844826254)*phi_mod - (-2.8008470596649575) -
                (225.97261561012203)*eta*eta - (-856.439893855696)*eta - (810.7579335107728));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022186708589515096))/(0.0008780179314948892) -
                (67.07698502903898)*phi_mod*phi_mod - (2.6835701720548952)*phi_mod - (-1.3414646513537796) -
                (-293.67936334444113)*eta*eta - (1068.5850098229541)*eta - (-970.605032318953));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001277791524641595))/(-0.0009161011315452033) -
                (-44.74228852565374)*phi_mod*phi_mod - (0.8767543058835693)*phi_mod - (0.3776863209606042) -
                (48.98878671196603)*eta*eta - (-179.4775207596203)*eta - (163.74100180513938));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001257091712335202))/(0.0009071709205143191) -
                (-65.04536993222474)*phi_mod*phi_mod - (-13.987060061438665)*phi_mod - (-0.8067495039803366) -
                (-60.347639482087914)*eta*eta - (208.5469285097736)*eta - (-179.2224757589859));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013325573491752697))/(-0.0009174830753643702) -
                (-33.50689869027517)*phi_mod*phi_mod - (-0.02425723203772492)*phi_mod - (0.37587292963715646) -
                (24.40543145060293)*eta*eta - (-84.22417170844503)*eta - (71.45764316443748));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01771492875165741))/(0.0006077853225792807) -
                (64.90984456863046)*phi_mod*phi_mod - (7.1239107759857925)*phi_mod - (2.7159905753451588) -
                (-34.85727267461524)*eta*eta - (138.00404425662458)*eta - (-133.96530686431328));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018610569824593585))/(0.002261252452604843) -
                (-91.88037713091666)*phi_mod*phi_mod - (-5.799392554185505)*phi_mod - (-1.6592379209379955) -
                (-63.858924677000196)*eta*eta - (275.51894607939744)*eta - (-295.3806267000978));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00017726078136907743))/(-0.00045602277312054506) -
                (22.59946336343847)*phi_mod*phi_mod - (-13.096808807437938)*phi_mod - (-4.566115343274076) -
                (14.687578708393943)*eta*eta - (-55.234623884736955)*eta - (50.82141706552643));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.011218758793315613))/(-0.0002964633547102773) -
                (-17.51709277506851)*phi_mod*phi_mod - (-0.36455755299540454)*phi_mod - (1.9724782240958059) -
                (-9.83609433614232)*eta*eta - (40.32049043036974)*eta - (-38.10110503824799));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.04750973312266975))/(0.0016741822728114743) -
                (-105.38490950234247)*phi_mod*phi_mod - (17.511479739473728)*phi_mod - (6.079946640146816) -
                (-35.94435295849919)*eta*eta - (128.98470853904567)*eta - (-112.82549345703673));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01815216045758635))/(-0.0006644106748472706) -
                (-62.964921617914534)*phi_mod*phi_mod - (-1.180293241110962)*phi_mod - (4.611113410394294) -
                (-66.8230326698096)*eta*eta - (288.4423135969482)*eta - (-307.90816396608545));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.05513033924032468))/(0.0020114504604524545) -
                (-8.2571683774686)*phi_mod*phi_mod - (0.7250259586233426)*phi_mod - (-0.5337849207952545) -
                (365.6253515652123)*eta*eta - (-1444.600619547073)*eta - (1420.2945940424484));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01617991750627237))/(-0.0005852732416695513) -
                (-86.1186407404528)*phi_mod*phi_mod - (-18.511136201056974)*phi_mod - (6.318753720014561) -
                (-72.42251654279934)*eta*eta - (313.4627420272081)*eta - (-335.57472800758916));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003787605004079069))/(3.473792001631635e-05) -
                (-853.3333333333334)*phi_mod*phi_mod - (86.10909090909063)*phi_mod - (7.648242424242478) -
                (-190.94594591036162)*eta*eta - (756.85067553571)*eta - (-745.032203410724));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019340390984206392))/(-0.0007221398534566319) -
                (-256.93657476965365)*phi_mod*phi_mod - (-9.702717837539996)*phi_mod - (6.916004449533587) -
                (-66.11901161743754)*eta*eta - (283.503944832879)*eta - (-300.69872571609716));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00881481321857317))/(4.577433506644134e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0017372399433050257))/(0.0003587815767674351) -
                (-22.74699798462486)*phi_mod*phi_mod - (16.22859309939063)*phi_mod - (-1.9787020604205476) -
                (36.3849173705567)*eta*eta - (-163.19315507346877)*eta - (179.2768847835852));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.013887061996820197))/(0.0004436388761336526) -
                (97.12491167938481)*phi_mod*phi_mod - (-4.44121462064795)*phi_mod - (-1.2194158287693493) -
                (-67.69497489507025)*eta*eta - (263.66237379866163)*eta - (-253.3438161667488));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018323186505771583))/(-0.00048454523411507776) -
                (-8.135762889651081)*phi_mod*phi_mod - (-0.3694328997311522)*phi_mod - (1.6448322930222459) -
                (27.021939055798583)*eta*eta - (-109.40770584523526)*eta - (110.89187309478314));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004341257381456013))/(-7.678917680239767e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221934 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.012344860107880225))/(-0.00026583864150402526) -
                (-5265.663082437079)*phi_mod*phi_mod - (819.2458781361734)*phi_mod - (-23.576833333332736) -
                (-559.6575002888812)*eta*eta - (2356.3225089751145)*eta - (-2471.051348099542));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008722744300348853))/(0.0016145982151766962) -
                (-10.132314696117929)*phi_mod*phi_mod - (1.9376491575076071)*phi_mod - (0.022706634816951822) -
                (72.17634468136387)*eta*eta - (-201.26111054146705)*eta - (139.39664651983625));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00042514186261457393))/(0.0012394275383994476) -
                (-61.30883778121069)*phi_mod*phi_mod - (-2.1935715914738747)*phi_mod - (-0.11536346239872525) -
                (214.69404482629318)*eta*eta - (-600.7616221442503)*eta - (418.20045696833495));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005600728998970737))/(0.0009523341969832795) -
                (-180.347779771361)*phi_mod*phi_mod - (6.5986114156152595)*phi_mod - (1.5216594741071077) -
                (246.05482931643212)*eta*eta - (-697.2510190032427)*eta - (492.03608326864696));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.015007151003603465))/(0.001892103070230921) -
                (86.1762392355365)*phi_mod*phi_mod - (-10.441160905260418)*phi_mod - (-2.519833215738908) -
                (182.6683923112701)*eta*eta - (-556.9190714475382)*eta - (424.2936687978552));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00529590451439381))/(0.0014890450396708714) -
                (44.45270516657415)*phi_mod*phi_mod - (-8.880389278165001)*phi_mod - (-1.2523046891612173) -
                (-88.70847711416472)*eta*eta - (284.06640581657035)*eta - (-226.8761217907063));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006859887441890113))/(0.001465802712857417) -
                (-49.55293024192896)*phi_mod*phi_mod - (6.6135349223832)*phi_mod - (0.2312262439904938) -
                (190.6475504746767)*eta*eta - (-548.322406152015)*eta - (393.66402554705957));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003199031672355783))/(0.0015386204290883155) -
                (-52.67222858665282)*phi_mod*phi_mod - (0.43358835826865194)*phi_mod - (-0.6574661749884954) -
                (-34.26268790460134)*eta*eta - (120.86242414724205)*eta - (-104.32161015180634));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008012968621223584))/(0.001657415348739454) -
                (-6.437341205583588)*phi_mod*phi_mod - (-4.36572749115613)*phi_mod - (-0.35509585756798434) -
                (-32.295408637992644)*eta*eta - (110.33133560584149)*eta - (-92.64310172675738));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008248282223613328))/(-0.002645785614731185) -
                (-104.48787474149628)*phi_mod*phi_mod - (-5.7574556936288594)*phi_mod - (1.4651924578212485) -
                (37.66232145360774)*eta*eta - (19.85050866109929)*eta - (2.6739309025625513));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0075794987839384285))/(0.0026578852940443696) -
                (-94.97538756774085)*phi_mod*phi_mod - (5.224241863269929)*phi_mod - (1.3870389963267438) -
                (-52.435128692711864)*eta*eta - (-28.450061295017303)*eta - (-3.707059750338178));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.014317100843222528))/(-0.005063557090917516) -
                (-92.70378405335451)*phi_mod*phi_mod - (-5.987531157998606)*phi_mod - (1.6995439633627794) -
                (-58.33309917406294)*eta*eta - (67.79911875570077)*eta - (-19.208739027961002));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02183454472461069))/(0.005269336761496295) -
                (8.041229262522146)*phi_mod*phi_mod - (-26.991015299910618)*phi_mod - (3.746682116066473) -
                (304.27378294563204)*eta*eta - (-419.0724050709084)*eta - (143.78659712782508));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.013981983361291358))/(-0.005108342743206032) -
                (42.089484573962785)*phi_mod*phi_mod - (34.048151256341534)*phi_mod - (3.891254900433518) -
                (28.964965894284298)*eta*eta - (-46.149683627776064)*eta - (17.97225917983946));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.019946152077387133))/(0.005160789972199181) -
                (-128.54022478158976)*phi_mod*phi_mod - (0.8091077800740976)*phi_mod - (1.3271683340816653) -
                (174.89138189952664)*eta*eta - (-243.3109375305226)*eta - (84.25313787802801));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0016741729067142048))/(-0.00048075343038615987) -
                (508.9577580478932)*phi_mod*phi_mod - (11.781851290492185)*phi_mod - (-3.733123876853515) -
                (-11576.40540321228)*eta*eta - (31297.343265979198)*eta - (-21153.05064095794));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001441926437423267))/(0.0005362566204121842) -
                (198.1335939914251)*phi_mod*phi_mod - (-9.916686863014036)*phi_mod - (-1.2098940934112457) -
                (-138.60129852222755)*eta*eta - (388.2217956375535)*eta - (-270.8966514417477));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001065491795094574))/(-0.0005744726719364255) -
                (417.8339625059476)*phi_mod*phi_mod - (15.732151135018555)*phi_mod - (-3.115584701399787) -
                (-676.3143737122541)*eta*eta - (1814.8333701740146)*eta - (-1217.2445410097748));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013634317918295954))/(0.0005264768905414212) -
                (195.2303361852208)*phi_mod*phi_mod - (-9.025624642928054)*phi_mod - (-1.0840917620924302) -
                (-131.034434094974)*eta*eta - (370.59255524916813)*eta - (-260.82360050766454));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036411809013811875))/(-0.0006324071405561689) -
                (343.00725919196447)*phi_mod*phi_mod - (8.16703343906232)*phi_mod - (-1.8282846349990627) -
                (1098.7496676599692)*eta*eta - (-2952.1080013784676)*eta - (1982.8160146530763));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012926676476957817))/(0.0005250570605632859) -
                (185.43156367039504)*phi_mod*phi_mod - (-8.222886321211321)*phi_mod - (-1.037919987022426) -
                (-214.0866681031468)*eta*eta - (589.6262258720585)*eta - (-405.2245288160612));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0019462301881107216))/(-0.0005899881101542332) -
                (445.27143244715865)*phi_mod*phi_mod - (13.631059758748886)*phi_mod - (-2.859248178727519) -
                (-469.9570838532354)*eta*eta - (1375.0677060251628)*eta - (-999.8618691253675));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001392529691233142))/(0.0005271656553649732) -
                (215.63214571328245)*phi_mod*phi_mod - (-12.148848243000717)*phi_mod - (-1.1348660615450734) -
                (-156.1260196555646)*eta*eta - (439.31411764094645)*eta - (-307.84622832048007));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007983083213614244))/(-0.0005520147728639331) -
                (370.5416933002008)*phi_mod*phi_mod - (9.502098326301388)*phi_mod - (-2.73456087623398) -
                (-3763.084635141057)*eta*eta - (10163.407754518541)*eta - (-6862.142334575585));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013576067419811394))/(0.0005244021938938254) -
                (221.27115079299617)*phi_mod*phi_mod - (-12.571098713610878)*phi_mod - (-1.1373537093828092) -
                (-48.823532388215554)*eta*eta - (156.2479181076898)*eta - (-121.1259419963697));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0019903439365502053))/(-0.0006022727623184464) -
                (299.4184075442084)*phi_mod*phi_mod - (9.838383379391626)*phi_mod - (-2.213030576601957) -
                (2744.4806687136934)*eta*eta - (-7434.4032793801)*eta - (5034.339086427366));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013982957059339403))/(0.0005262290983693523) -
                (178.0096192126948)*phi_mod*phi_mod - (-7.3388708693675495)*phi_mod - (-1.0780876339758905) -
                (-58.68300907227595)*eta*eta - (178.99106712973511)*eta - (-134.13150967643332));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001646840685861874))/(-0.0005820217483052532) -
                (386.44348960851505)*phi_mod*phi_mod - (14.668530847109274)*phi_mod - (-2.840681601243196) -
                (-3548.5039292751344)*eta*eta - (9624.71987611367)*eta - (-6526.334020695854));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013939881732728102))/(0.0005251195748944097) -
                (163.3010785444918)*phi_mod*phi_mod - (-9.39986328854719)*phi_mod - (-0.9582045080471163) -
                (-77.54690376407716)*eta*eta - (224.71445757790028)*eta - (-161.55262285259198));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009378864320764231))/(-0.0005535725553937173) -
                (407.2854755746784)*phi_mod*phi_mod - (14.45814602124273)*phi_mod - (-2.3479756051830676) -
                (-605.1557813857042)*eta*eta - (1643.506137077163)*eta - (-1115.901551279426));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013416637882674334))/(0.0005309641701569674) -
                (202.33772749986608)*phi_mod*phi_mod - (-10.078353028177208)*phi_mod - (-1.16885160776281) -
                (-122.23707589931934)*eta*eta - (346.37440999436194)*eta - (-244.20492189372666));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004776611558631306))/(0.001029606327429608) -
                (200.4103552148364)*phi_mod*phi_mod - (-16.69554080396714)*phi_mod - (-1.0133525106085803) -
                (-422.757732813341)*eta*eta - (673.4241836362169)*eta - (-267.97324455504565));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004801150673620555))/(0.0010615175972428662) -
                (142.5031211858655)*phi_mod*phi_mod - (-9.108945680151997)*phi_mod - (-1.174960697003937) -
                (-539.1598960756512)*eta*eta - (847.0923004312482)*eta - (-332.6624936815462));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004887588059740379))/(0.0010789946935425765) -
                (132.64753828466533)*phi_mod*phi_mod - (-7.835377378385104)*phi_mod - (-1.186134191097331) -
                (-737.6722213608383)*eta*eta - (1146.5690326493316)*eta - (-445.42831325475925));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0020808078469822947))/(-0.0009708754400054545) -
                (446.1049876137286)*phi_mod*phi_mod - (19.442160010064633)*phi_mod - (-2.725586607225883) -
                (575.6902973323866)*eta*eta - (-941.433538711718)*eta - (384.7977211078881));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003842623912090081))/(0.0009572403721374427) -
                (310.8531453928727)*phi_mod*phi_mod - (-15.447709832860205)*phi_mod - (-1.9551223281187444) -
                (159.86674258276446)*eta*eta - (-278.6916710775384)*eta - (120.6735479807099));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002078348147210519))/(-0.0009638672977318306) -
                (456.22613945787424)*phi_mod*phi_mod - (18.789065645864497)*phi_mod - (-2.7795870032676726) -
                (30.20195426983332)*eta*eta - (-65.34167231901054)*eta - (33.092466780792705));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004038159350462493))/(0.0009698403344006898) -
                (345.2103269321005)*phi_mod*phi_mod - (-20.677927437071304)*phi_mod - (-2.3032382672112193) -
                (-211.86293665041458)*eta*eta - (320.97539199008423)*eta - (-121.08042833302574));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002295393458509019))/(-0.0009713660934757471) -
                (431.61911855009294)*phi_mod*phi_mod - (20.48480903090782)*phi_mod - (-2.6114331855302937) -
                (221.08082802253057)*eta*eta - (-368.37937013960226)*eta - (153.3068896233609));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004064124605159839))/(0.0009764933670410982) -
                (331.51559578800993)*phi_mod*phi_mod - (-17.007957906846187)*phi_mod - (-2.287452695000588) -
                (-49.039166145690004)*eta*eta - (62.828117938963416)*eta - (-18.82551832068342));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004828721808696365))/(0.0021333163474498594) -
                (-341.62497931443596)*phi_mod*phi_mod - (101.62569106701025)*phi_mod - (-7.495689982098207) -
                (-4633.0410219203295)*eta*eta - (8670.910950579255)*eta - (-4056.083961157035));}

    else if (seg_combination_id == 50308 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.006130574391071622))/(0.00204100140567611) -
                (112.73233317566276)*phi_mod*phi_mod - (25.19575615181352)*phi_mod - (0.9396731811005399) -
                (-1557.8197480214174)*eta*eta - (2946.585272077832)*eta - (-1392.223047218448));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009980100955425116))/(-0.0033433760297969482) -
                (-30.07969555464834)*phi_mod*phi_mod - (7.96528637444865)*phi_mod - (1.7482467180598458) -
                (-186.1369390329972)*eta*eta - (88.5141180062556)*eta - (-10.34533295205274));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01062371079512814))/(0.0032967692344235615) -
                (-115.60058271540285)*phi_mod*phi_mod - (5.196586977753308)*phi_mod - (2.1457674929538486) -
                (-356.3417193321493)*eta*eta - (163.9418200259605)*eta - (-18.695631882687646));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00740822071476283))/(-0.0032417839706443668) -
                (-102.17893831440598)*phi_mod*phi_mod - (-1.8440458869602072)*phi_mod - (1.1468194992665675) -
                (-225.88841785221248)*eta*eta - (99.06393888174662)*eta - (-10.671549039302503));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01590997538811103))/(0.0035191761305253515) -
                (8.48926568837844)*phi_mod*phi_mod - (-20.21509511933839)*phi_mod - (2.3910646891011944) -
                (888.8717464654792)*eta*eta - (-389.9002317251566)*eta - (42.55480323497668));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014873780582939343))/(-0.000878900446389665) -
                (-54.958081105851306)*phi_mod*phi_mod - (-2.1016480152569685)*phi_mod - (0.6849650525896218) -
                (-295.1949284257246)*eta*eta - (884.4352756895347)*eta - (-662.051573112288));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000653484127170979))/(0.0008926287654758927) -
                (-151.76124912751422)*phi_mod*phi_mod - (4.498730727245978)*phi_mod - (1.9512815071488003) -
                (-179.54156572048663)*eta*eta - (524.8713591424886)*eta - (-383.4831064689054));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015194947265122559))/(-0.0008842016087695152) -
                (-58.22354514490809)*phi_mod*phi_mod - (-2.024585336922845)*phi_mod - (0.7643914016833634) -
                (-341.3368505635216)*eta*eta - (1026.32469052475)*eta - (-771.0875743882281));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005124470999037241))/(0.0008882189577198164) -
                (-150.55604916703646)*phi_mod*phi_mod - (5.0590155953426486)*phi_mod - (1.9368023608104104) -
                (-193.2326835782067)*eta*eta - (567.2502127323521)*eta - (-416.19841137624564));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016395704689251903))/(-0.0008905714278422414) -
                (-57.50118191909665)*phi_mod*phi_mod - (-2.6113121494754687)*phi_mod - (0.6967733262548905) -
                (-361.58552090576)*eta*eta - (1090.2279299803215)*eta - (-821.4690075576182));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00047042884795103475))/(0.0008833174811255246) -
                (-147.0379668341582)*phi_mod*phi_mod - (5.21574121688201)*phi_mod - (1.7912208852204492) -
                (-143.46857748043323)*eta*eta - (422.532795046289)*eta - (-311.0970704690101));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014244671589383122))/(-0.0008687616255874433) -
                (-58.694644358615406)*phi_mod*phi_mod - (-2.2656120872288876)*phi_mod - (0.8054182068085673) -
                (-266.8563721358212)*eta*eta - (798.2346581633795)*eta - (-596.5427251998359));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005172755961290387))/(0.0008797581477109274) -
                (-147.15383916635489)*phi_mod*phi_mod - (3.9399480039792016)*phi_mod - (1.9249597876230025) -
                (-182.09593175604437)*eta*eta - (533.1716036101691)*eta - (-390.16466094596313));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016691635178429827))/(-0.0008746082273685606) -
                (-60.1038061120507)*phi_mod*phi_mod - (-1.5052858998581153)*phi_mod - (0.8562148984249668) -
                (-381.6214413294036)*eta*eta - (1146.7872134038362)*eta - (-861.1255600777383));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006726699394808984))/(0.0008702742831358253) -
                (-140.61779193006424)*phi_mod*phi_mod - (4.757581419911889)*phi_mod - (1.8957716845210686) -
                (-191.15478580037052)*eta*eta - (558.386244791046)*eta - (-407.6137302997903));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016879883159253977))/(-0.0008699936652348391) -
                (-60.119217102380624)*phi_mod*phi_mod - (-3.04671744543295)*phi_mod - (0.7528931184850532) -
                (-287.79610574145426)*eta*eta - (857.0156395100602)*eta - (-637.5373550233433));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006182321695314216))/(0.0008693176637266575) -
                (-146.87313993679422)*phi_mod*phi_mod - (5.177406294974443)*phi_mod - (1.9045611705498353) -
                (-239.38065344136723)*eta*eta - (700.3488879052733)*eta - (-512.113923403858));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015214349269442962))/(-0.0008697135339981471) -
                (-54.171261494342616)*phi_mod*phi_mod - (-1.563304534455765)*phi_mod - (0.6529955296478103) -
                (-323.50561691002815)*eta*eta - (969.4646206921024)*eta - (-725.91670178169));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005121913876248803))/(0.0008679894957636746) -
                (-132.68204520852797)*phi_mod*phi_mod - (4.019265791512241)*phi_mod - (1.7016931950064107) -
                (-195.56819774160212)*eta*eta - (571.5134069090783)*eta - (-417.4270035752309));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016556230476853608))/(-0.0008755566902224796) -
                (-59.98288331601085)*phi_mod*phi_mod - (-0.934636813039458)*phi_mod - (0.7727672315124884) -
                (-308.8159970923447)*eta*eta - (921.0403502183658)*eta - (-686.2276840116369));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006056944455611414))/(0.0008841292797037089) -
                (-146.54909963612204)*phi_mod*phi_mod - (5.492031042866939)*phi_mod - (1.7824248046190398) -
                (-221.64279883323434)*eta*eta - (646.9814164377121)*eta - (-472.03812377340097));}

    else if (seg_combination_id == 231915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004510781456350671))/(-0.0009961746891935035) -
                (-53.55501193238685)*phi_mod*phi_mod - (6.586133729408978)*phi_mod - (1.028659878835357) -
                (79.86021533580796)*eta*eta - (-290.94435849844865)*eta - (263.44469509659206));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01369181323153396))/(0.001574376662181885) -
                (208.77309355619388)*phi_mod*phi_mod - (0.8439833466916555)*phi_mod - (-0.343672070301695) -
                (255.06206778276493)*eta*eta - (-863.9781363568519)*eta - (731.0156616813391));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015247536673742466))/(0.0013809204849511301) -
                (400.79513185498325)*phi_mod*phi_mod - (-13.097280574750524)*phi_mod - (-6.174871935267403) -
                (-2766.5283038977464)*eta*eta - (9106.191782218511)*eta - (-7492.9302572846955));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00107252261897422))/(0.0008082469801247437) -
                (372.0850745012934)*phi_mod*phi_mod - (-24.62400815454687)*phi_mod - (-1.1489440918363747) -
                (28.456165968526406)*eta*eta - (65.86923186046761)*eta - (36.72192946175135));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001367341775411154))/(0.0008357851243391422) -
                (359.5559723456124)*phi_mod*phi_mod - (-19.37621131563915)*phi_mod - (-1.3620365419137184) -
                (-77.0633304066958)*eta*eta - (-138.7570377167765)*eta - (-62.29319553587615));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010700445401013352))/(0.0008133929955217206) -
                (319.5530137234112)*phi_mod*phi_mod - (-16.63557723115271)*phi_mod - (-1.1601562888512196) -
                (163.27638163559465)*eta*eta - (320.4674360671089)*eta - (156.8737598539716));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005219333379152003))/(0.00020019243830654083) -
                (733.9239740655357)*phi_mod*phi_mod - (-60.24642512076659)*phi_mod - (-1.3067068725214392) -
                (2231.5395733051287)*eta*eta - (4301.616892937549)*eta - (2072.5867636934563));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001379996032015439))/(0.00077818592717222) -
                (292.7301636563816)*phi_mod*phi_mod - (-25.863123838731198)*phi_mod - (-0.4224513049437285) -
                (-1874.3006488667359)*eta*eta - (-3561.195587091791)*eta - (-1691.1204824234612));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0042846593754173315))/(0.0002754458804648614) -
                (644.5611818223382)*phi_mod*phi_mod - (-59.65130482388833)*phi_mod - (-0.7973609668842121) -
                (-409.83950225974246)*eta*eta - (-764.0487672927841)*eta - (-355.61010833149726));}

    else if (seg_combination_id == 50302 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003659297001609792))/(-0.0014787413744022009) -
                (52.935815803910565)*phi_mod*phi_mod - (5.3354076642995985)*phi_mod - (-3.130848146051415) -
                (81.76523774492989)*eta*eta - (-133.62869787806278)*eta - (54.22465653267464));}

    else if (seg_combination_id == 50302 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010027594926167154))/(0.0016606464602204126) -
                (3206.443596548421)*phi_mod*phi_mod - (-1632.142567318253)*phi_mod - (206.8664942556309) -
                (2329.8631779138555)*eta*eta - (-3511.1102687738326)*eta - (1321.598761982228));}

    else if (seg_combination_id == 50302 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004509423877198753))/(-0.0015823867102142172) -
                (15.819334465721584)*phi_mod*phi_mod - (-1.011528238210915)*phi_mod - (-1.6220904013650839) -
                (-170.0693220171914)*eta*eta - (247.0807665449113)*eta - (-89.6031619376297));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009992512098403928))/(-0.00020983490718344357) -
                (110.1986439710286)*phi_mod*phi_mod - (-7.185808184254677)*phi_mod - (-3.32411965594247) -
                (-125.79143389541993)*eta*eta - (-203.9490689069791)*eta - (-82.26108275373852));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01817097436439471))/(-0.0006075142487783848) -
                (-16.613792175173863)*phi_mod*phi_mod - (-8.706570240557523)*phi_mod - (0.5550370176302895) -
                (-658.6326473039611)*eta*eta - (-1057.4961552815473)*eta - (-423.2321779683658));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011763452177029395))/(-0.003149732743329598) -
                (-5.8299419762622815)*phi_mod*phi_mod - (14.858989252719766)*phi_mod - (2.0495360082313048) -
                (-52.4888875142911)*eta*eta - (-45.840056422678614)*eta - (-9.848668234601622));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008231504360146042))/(0.0030921246404562726) -
                (-103.73154916424531)*phi_mod*phi_mod - (6.8578489908231575)*phi_mod - (1.4840049391543935) -
                (-349.90621667076454)*eta*eta - (-328.7939800252977)*eta - (-77.09957027020101));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010944728772105294))/(-0.0031289698519594983) -
                (-114.37104765662647)*phi_mod*phi_mod - (-0.7884615135633698)*phi_mod - (1.0617163023572587) -
                (-452.03706714297425)*eta*eta - (-430.51351293378843)*eta - (-102.31704424157991));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0086892856680998))/(0.003155566253077662) -
                (-28.47377565125302)*phi_mod*phi_mod - (-13.98671689077322)*phi_mod - (2.484789109671234) -
                (-612.1788548136499)*eta*eta - (-593.3147341237609)*eta - (-143.58556470631325));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.024464880193800265))/(0.005619502901730496) -
                (-238.3917774863422)*phi_mod*phi_mod - (53.836299116837665)*phi_mod - (-2.420205489865392) -
                (-246.41636072075238)*eta*eta - (314.8229300642434)*eta - (-100.16899435938527));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02254949928282628))/(0.00547189982187982) -
                (-62.95934795851523)*phi_mod*phi_mod - (7.197131046581456)*phi_mod - (0.6812729814206568) -
                (509.09183739929296)*eta*eta - (-594.0042237129992)*eta - (172.89981311312005));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013931464576385963))/(-0.0008362541987092185) -
                (384.75025139813516)*phi_mod*phi_mod - (23.888402672885753)*phi_mod - (-1.3486304460554583) -
                (-57.03699551828544)*eta*eta - (107.61360710495538)*eta - (-50.718365122215));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009868093720687293))/(-0.0008109566995113912) -
                (325.81840614815)*phi_mod*phi_mod - (26.332356550970967)*phi_mod - (-1.0907345134967035) -
                (326.978800504607)*eta*eta - (-614.2720402026156)*eta - (288.50421715413347));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013671931814608113))/(-0.0008331157365700484) -
                (375.8885079962802)*phi_mod*phi_mod - (25.09992541208313)*phi_mod - (-1.269487373907076) -
                (137.00683001738136)*eta*eta - (-263.4650511390201)*eta - (126.56371406649438));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003008132648194466))/(-0.0009275704140233487) -
                (208.23463846230806)*phi_mod*phi_mod - (16.57050120283863)*phi_mod - (-0.2751150646630516) -
                (-789.3156530325509)*eta*eta - (1508.3206165737943)*eta - (-720.4360664389515));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0073365586115307))/(2.973860238587143e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 60402 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00617314942934272))/(-0.00011683548731061326) -
                (498.6664627321573)*phi_mod*phi_mod - (9.083142548465524)*phi_mod - (-2.659669513725929) -
                (2265.061207707938)*eta*eta - (-4297.100302193356)*eta - (2038.0074460825713));}

    else if (seg_combination_id == 50308 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.020503054225819287))/(-0.006146523542560648) -
                (-97.70239831208423)*phi_mod*phi_mod - (-6.539327324964203)*phi_mod - (1.3145713669953236) -
                (2.308829530147833)*eta*eta - (4.5240347080575205)*eta - (0.7589788853538953));}

    else if (seg_combination_id == 50308 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018522645531022702))/(0.0061341474802416454) -
                (-98.07713087493312)*phi_mod*phi_mod - (4.174428887256679)*phi_mod - (1.449604039250774) -
                (53.24106603699146)*eta*eta - (21.09970862905108)*eta - (2.1060568316689117));}

    else if (seg_combination_id == 50308 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01991085765693066))/(-0.006103217140219557) -
                (-91.22336153436493)*phi_mod*phi_mod - (-3.146397591209215)*phi_mod - (1.2999615590600675) -
                (-21.458161664099052)*eta*eta - (-3.8205613006037193)*eta - (0.04947604116538521));}

    else if (seg_combination_id == 50308 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018887787210631207))/(0.006167402593653596) -
                (-99.10242504983003)*phi_mod*phi_mod - (7.511680334206462)*phi_mod - (1.3415648917117062) -
                (-0.7223950416496242)*eta*eta - (3.5784058422667204)*eta - (0.7122960500552143));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0020020191418701244))/(-0.001224641115127032) -
                (-1325.5373339425262)*phi_mod*phi_mod - (527.2859837057616)*phi_mod - (-52.33913601383651) -
                (-119.27904642562217)*eta*eta - (229.83216860435883)*eta - (-110.67319256085975));}

    else if (seg_combination_id == 50302 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003645503596023463))/(-0.0013375789409821798) -
                (-32.56322674417685)*phi_mod*phi_mod - (-9.301404758495284)*phi_mod - (0.018169195442481387) -
                (-208.78806409604886)*eta*eta - (392.67782581379083)*eta - (-184.43289031257362));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005266919498102147))/(-0.0019484180638472853) -
                (-76.43127040983514)*phi_mod*phi_mod - (-5.01154296522815)*phi_mod - (1.2021130816908145) -
                (-1061.281155163624)*eta*eta - (-1760.5469114833058)*eta - (-730.0003338870456));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013010313100102096))/(0.0018504856675601667) -
                (-66.37054076816908)*phi_mod*phi_mod - (3.8709524021914494)*phi_mod - (1.5865556526190434) -
                (-791.1974552646947)*eta*eta - (-1316.534591683455)*eta - (-547.5594187072165));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0050506433676682635))/(-0.0019330681373781963) -
                (-73.88409022302292)*phi_mod*phi_mod - (-4.0769071240866595)*phi_mod - (1.258784852478172) -
                (-632.0956061365233)*eta*eta - (-1051.275508969048)*eta - (-436.9896845559148));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0016937667806643344))/(0.0018641137701549476) -
                (-65.07080869663852)*phi_mod*phi_mod - (3.534317842337648)*phi_mod - (1.7192742659867837) -
                (-90.9316983988301)*eta*eta - (-159.71759228993952)*eta - (-69.91930889880797));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004913285364139941))/(-0.0019503191868203605) -
                (-71.24776740641387)*phi_mod*phi_mod - (-3.895121630980376)*phi_mod - (1.1989926126021122) -
                (-635.6559159513572)*eta*eta - (-1059.8705214585925)*eta - (-441.65009499096533));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012516904317548196))/(0.0018506130788194005) -
                (-62.26578679157149)*phi_mod*phi_mod - (2.795258570100184)*phi_mod - (1.6401624750446784) -
                (-1039.2720508812802)*eta*eta - (-1735.3552146617003)*eta - (-724.2834445727781));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005408561038941271))/(-0.0019635906530508338) -
                (-78.92856205473933)*phi_mod*phi_mod - (-5.903548166967276)*phi_mod - (1.270752099602584) -
                (-768.6267228673181)*eta*eta - (-1278.5805942825505)*eta - (-531.5722489829965));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012788604480241442))/(0.0018205037271101262) -
                (-59.33424275432394)*phi_mod*phi_mod - (3.9730895901432204)*phi_mod - (1.7020169798998717) -
                (-1575.2321428956525)*eta*eta - (-2616.772350789431)*eta - (-1086.6060241748992));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005300403410359228))/(-0.0019678046650942714) -
                (-83.26484177382912)*phi_mod*phi_mod - (-4.476466229877951)*phi_mod - (1.5097549134246164) -
                (-104.46714018759324)*eta*eta - (-187.51886462780604)*eta - (-83.51979049975156));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00016891115836019537))/(0.0018409968416458172) -
                (-72.09103736626106)*phi_mod*phi_mod - (3.049084812503943)*phi_mod - (2.0178877315785364) -
                (-961.7538262228162)*eta*eta - (-1584.060889395219)*eta - (-652.1005635417215));}

    else if (seg_combination_id == 110902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0027987591703373246))/(0.0005628056461032289) -
                (138.63937793388297)*phi_mod*phi_mod - (-33.304594276271146)*phi_mod - (-1.1316805599803659) -
                (-1462.4515263894139)*eta*eta - (745.0418400227355)*eta - (-94.17815810966168));}

    else if (seg_combination_id == 110902 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004714080407539396))/(0.0011825129976044688) -
                (60.247463571484495)*phi_mod*phi_mod - (1.5942456178313984)*phi_mod - (-1.1813064016146342) -
                (-838.1766839994468)*eta*eta - (428.8608298072242)*eta - (-54.47179568791855));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003937078940958356))/(0.0011217741649563338) -
                (114.32733933136848)*phi_mod*phi_mod - (-13.558761335391377)*phi_mod - (-0.49774211867085105) -
                (-405.93179718227816)*eta*eta - (355.31501960503124)*eta - (-77.68956464527865));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005444350710886174))/(0.001218660122360053) -
                (162.113945078462)*phi_mod*phi_mod - (-14.494957112901407)*phi_mod - (-0.7868227071265895) -
                (-884.6059658277618)*eta*eta - (786.113879331488)*eta - (-174.3850009162576));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011733302230291787))/(0.0009051186364792756) -
                (-69.36334160385104)*phi_mod*phi_mod - (9.416796510116503)*phi_mod - (0.8667732841327792) -
                (-476.5231395761681)*eta*eta - (451.4107938796971)*eta - (-106.36486963861789));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003223322843267401))/(0.0009104789426262008) -
                (263.5386968458722)*phi_mod*phi_mod - (-23.336322229787893)*phi_mod - (0.36010979047039027) -
                (-342.85396824626474)*eta*eta - (276.2384042348995)*eta - (-55.059821174591626));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004376814093423796))/(0.0011964963370724494) -
                (108.98117738421809)*phi_mod*phi_mod - (-6.932444009979034)*phi_mod - (-0.6969056459759553) -
                (-286.04642249043917)*eta*eta - (233.953134463256)*eta - (-47.44974285565306));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003533289940236775))/(0.00047242070664728185) -
                (392.0137526598576)*phi_mod*phi_mod - (-34.601547746108686)*phi_mod - (-2.009517130207565) -
                (-3453.4939866429027)*eta*eta - (3006.2262451273878)*eta - (-653.90499809074));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010009702021047184))/(-0.002858866351621162) -
                (-18.98490843043862)*phi_mod*phi_mod - (14.275150789264492)*phi_mod - (2.2239977860802727) -
                (-89.31066993393027)*eta*eta - (-108.8862322792257)*eta - (-32.93384963531133));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006579358591290583))/(0.0028308233656083484) -
                (-113.30972071749723)*phi_mod*phi_mod - (3.218741948040807)*phi_mod - (1.3033378677914604) -
                (-95.37926509597986)*eta*eta - (-118.63020903586009)*eta - (-36.60321086834531));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009857045614582418))/(-0.0028440770836318467) -
                (-116.10300244770275)*phi_mod*phi_mod - (-0.7731030984094813)*phi_mod - (1.1421133512920751) -
                (-182.70487614586395)*eta*eta - (-232.1907676730256)*eta - (-73.57188355308071));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006820569121789207))/(0.0028476540990483392) -
                (-7.911334849625602)*phi_mod*phi_mod - (-17.132285290926454)*phi_mod - (2.5153696047960734) -
                (-105.99681183687004)*eta*eta - (-137.9508592536988)*eta - (-44.744710000267204));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00231110475414133))/(0.002215159431665197) -
                (-44.784090421604624)*phi_mod*phi_mod - (4.057589728538363)*phi_mod - (0.6634956723763632) -
                (-693.725506627288)*eta*eta - (-349.2092755608245)*eta - (-43.72101305347367));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007318568665678875))/(0.0025928608592663644) -
                (-44.52861787277322)*phi_mod*phi_mod - (3.739249134385101)*phi_mod - (0.6714830840304097) -
                (931.4974438763675)*eta*eta - (477.5356163113379)*eta - (61.19244314222955));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012290329791941558))/(-0.0028652079088721154) -
                (-116.15053364835539)*phi_mod*phi_mod - (-5.844698685180252)*phi_mod - (1.7360645142745863) -
                (583.4589815662562)*eta*eta - (263.9289399102034)*eta - (29.721346246560664));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0075988183667664005))/(0.0027029979098526623) -
                (-96.64311804473272)*phi_mod*phi_mod - (6.58127991160375)*phi_mod - (1.3176468576213047) -
                (-660.9987079927179)*eta*eta - (-331.7580633795867)*eta - (-41.48382102549195));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0017701622929877777))/(0.0019549162631557334) -
                (-64.72946468546972)*phi_mod*phi_mod - (6.020686924919436)*phi_mod - (1.4009004953972388) -
                (-434.37754847740996)*eta*eta - (-176.2211209920607)*eta - (-16.67076358468638));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.027651670831778413))/(-0.003699552016469574) -
                (-130.63960657345305)*phi_mod*phi_mod - (-0.028165974156064692)*phi_mod - (3.2230792986595946) -
                (3505.2083241592754)*eta*eta - (1546.6874958365095)*eta - (170.72512322582833));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010143235334585188))/(0.003214458698442703) -
                (-33.981936255994334)*phi_mod*phi_mod - (0.11531519893041836)*phi_mod - (0.7595807609671514) -
                (233.09946315593467)*eta*eta - (149.48876417372534)*eta - (22.68433804739448));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0048846316305666635))/(0.0017274041221751676) -
                (-25.535597291942164)*phi_mod*phi_mod - (2.6629140830906675)*phi_mod - (1.014798958360533) -
                (-871.4591101031442)*eta*eta - (-379.3759389192833)*eta - (-40.04066064716984));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0074469287917436275))/(-0.00289956478713358) -
                (-7.807722595878147)*phi_mod*phi_mod - (14.474337427629543)*phi_mod - (2.1126881867003133) -
                (-38.44091681357378)*eta*eta - (45.07719556703156)*eta - (-13.04010650840168));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010551712680299953))/(0.0029102688660221166) -
                (-110.72092606838281)*phi_mod*phi_mod - (5.50340870006379)*phi_mod - (1.523961683927212) -
                (-117.31592241372834)*eta*eta - (135.43264961215073)*eta - (-38.962110382540786));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006839819254337192))/(-0.002852644028980983) -
                (-98.24155826087068)*phi_mod*phi_mod - (-1.0075253246768687)*phi_mod - (1.1226373120115807) -
                (-103.0022944357046)*eta*eta - (118.64672106778342)*eta - (-33.87772780059772));}

    else if (seg_combination_id == 50313 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01043765397405625))/(0.0029040010377176205) -
                (-31.561812916939157)*phi_mod*phi_mod - (-13.112740733201399)*phi_mod - (2.4425491303331106) -
                (736.4863809205284)*eta*eta - (-896.3601749066728)*eta - (272.65193546888815));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0024193782027445297))/(-0.0018603249331010819) -
                (-126.6001448591294)*phi_mod*phi_mod - (-5.3784415166677695)*phi_mod - (1.7757807942014148) -
                (-216.91865935878647)*eta*eta - (433.1383802596153)*eta - (-216.1288600562452));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005927054670984406))/(0.0019047101182783678) -
                (-129.87601888433855)*phi_mod*phi_mod - (5.708087205382457)*phi_mod - (1.6503611115353396) -
                (164.64006300925692)*eta*eta - (-345.30099876946537)*eta - (180.26001654697131));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002699793543770364))/(-0.0018638622355837374) -
                (-128.08831581619552)*phi_mod*phi_mod - (-5.4067273812286)*phi_mod - (1.8387242086744635) -
                (-509.11390556088844)*eta*eta - (1017.4932070263991)*eta - (-508.2525801122943));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00604477771930313))/(0.0019081843027089005) -
                (-133.37772829481307)*phi_mod*phi_mod - (6.476378789736775)*phi_mod - (1.6640750300432383) -
                (297.1831337352157)*eta*eta - (-603.7183655919581)*eta - (306.2430384539013));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0031290448354668898))/(-0.001891213838805629) -
                (-124.13454529467728)*phi_mod*phi_mod - (-5.8908744107260285)*phi_mod - (1.7313809473658266) -
                (-445.2521152444737)*eta*eta - (893.5636863987224)*eta - (-448.17590460077025));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0059643548299515734))/(0.0018991912381947581) -
                (-132.81540467158683)*phi_mod*phi_mod - (5.973695977888737)*phi_mod - (1.64776560059207) -
                (338.26098211048657)*eta*eta - (-685.2469280225638)*eta - (346.694222828147));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00308059637709035))/(-0.0018350317007002324) -
                (-124.1632986114599)*phi_mod*phi_mod - (-5.3683502286278)*phi_mod - (2.318593592278658) -
                (-178.64658500953442)*eta*eta - (354.78065981551674)*eta - (-176.0431448058203));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00553688904457193))/(0.0018723386819723754) -
                (-141.56295906241763)*phi_mod*phi_mod - (5.214613957984437)*phi_mod - (2.034363162646439) -
                (250.1243461196525)*eta*eta - (-514.8840859495343)*eta - (264.4058565717952));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028354471808717113))/(-0.0018666355797364728) -
                (-131.95921558536116)*phi_mod*phi_mod - (-5.015145465157116)*phi_mod - (1.9948820537636303) -
                (-578.9813422437185)*eta*eta - (1159.4310619020243)*eta - (-580.2923248304285));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006349135284934145))/(0.0019073212262106746) -
                (-129.63765635361386)*phi_mod*phi_mod - (6.244691452726699)*phi_mod - (1.7207270882734798) -
                (255.45963938551915)*eta*eta - (-528.0093595755117)*eta - (272.1177188053003));}

    else if (seg_combination_id == 100902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0029328361480531143))/(-0.0008628854514512728) -
                (342.20827080450056)*phi_mod*phi_mod - (16.87568221212432)*phi_mod - (-2.157455759938624) -
                (-244.07229369797997)*eta*eta - (-415.3994127036145)*eta - (-176.67472220578802));}

    else if (seg_combination_id == 100902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012175446119420056))/(0.0008293661651952695) -
                (498.551441680857)*phi_mod*phi_mod - (-20.766692116148388)*phi_mod - (-2.6404179460932573) -
                (609.5251479658184)*eta*eta - (1120.0495974418993)*eta - (514.0930056328577));}

    else if (seg_combination_id == 100902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002968328554090459))/(-0.0008390291725978935) -
                (400.5746197735786)*phi_mod*phi_mod - (18.46121302993741)*phi_mod - (-2.457829043542929) -
                (-259.1761708721214)*eta*eta - (-447.3428480033587)*eta - (-192.91646357391667));}

    else if (seg_combination_id == 100902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014345319003986122))/(0.0008395362409149304) -
                (474.1390103675255)*phi_mod*phi_mod - (-24.1181684237915)*phi_mod - (-2.444199967591256) -
                (344.62045671421765)*eta*eta - (633.1315151692581)*eta - (290.5561297235129));}

    else if (seg_combination_id == 100902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014543196477733798))/(-0.0008381980788140905) -
                (470.38001313762464)*phi_mod*phi_mod - (20.782905610169347)*phi_mod - (-2.271721113199099) -
                (454.08870624887726)*eta*eta - (-832.4987966204136)*eta - (381.28345147736536));}

    else if (seg_combination_id == 100902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002919097723331705))/(0.0008378258401882789) -
                (429.42040303131284)*phi_mod*phi_mod - (-19.420951174331385)*phi_mod - (-2.512726308990202) -
                (-180.75240766339144)*eta*eta - (310.57544030991085)*eta - (-133.3094723623986));}

    else if (seg_combination_id == 100902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012156511547111414))/(-0.0008284443073991171) -
                (462.77196103429014)*phi_mod*phi_mod - (19.693219356246313)*phi_mod - (-2.4160456718390546) -
                (327.2243807890702)*eta*eta - (-601.9944353213051)*eta - (276.6107943439452));}

    else if (seg_combination_id == 100902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028011623241051818))/(0.0008339221734460111) -
                (389.04078133653434)*phi_mod*phi_mod - (-21.642810370274766)*phi_mod - (-2.2492589040647597) -
                (-104.67982600529393)*eta*eta - (182.31115378888305)*eta - (-79.28223457491997));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0038856851905447296))/(-0.0010839557298208975) -
                (382.9191996382861)*phi_mod*phi_mod - (21.17893931043186)*phi_mod - (-2.0451286432661067) -
                (-31.591168077586428)*eta*eta - (-22.27278114932813)*eta - (-3.0283737419184416));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002760197071007529))/(0.0010831939085618806) -
                (422.2722590251947)*phi_mod*phi_mod - (-24.660088891625485)*phi_mod - (-1.9957136185778288) -
                (19.198367803584024)*eta*eta - (29.469392129525442)*eta - (10.301834610408635));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004282020954886964))/(-0.0011043863857440545) -
                (383.1930519044493)*phi_mod*phi_mod - (22.495083866899037)*phi_mod - (-2.0538550500994464) -
                (3.5987568267116945)*eta*eta - (14.89336482919485)*eta - (6.84263065404719));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0027167369920664806))/(0.0010832824214009088) -
                (442.11724307875363)*phi_mod*phi_mod - (-21.98367794248857)*phi_mod - (-2.1791196221731473) -
                (24.28537734944804)*eta*eta - (36.09042350182633)*eta - (12.430745473626878));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004033858298613339))/(-0.0010942068260974026) -
                (389.55375957655843)*phi_mod*phi_mod - (23.41350169676034)*phi_mod - (-1.9755982168317598) -
                (-31.188791302898697)*eta*eta - (-21.022847030889704)*eta - (-2.48419805606282));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002804256829339209))/(0.0010867544130289469) -
                (403.0266038627589)*phi_mod*phi_mod - (-20.827972293173048)*phi_mod - (-1.9667745904837048) -
                (16.299009652641896)*eta*eta - (27.025029619287352)*eta - (9.825674055232641));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004133900016743772))/(-0.0010927839208828049) -
                (407.5751567128106)*phi_mod*phi_mod - (21.989284689728116)*phi_mod - (-2.1322960353124567) -
                (-49.8039445409262)*eta*eta - (-39.89440693868862)*eta - (-7.202916255995833));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028223407274829498))/(0.0010903460782308559) -
                (449.53608365005647)*phi_mod*phi_mod - (-21.283918512248956)*phi_mod - (-2.237592420605925) -
                (0.28798295618304276)*eta*eta - (10.454823435097168)*eta - (5.575645730924354));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004365497118386003))/(-0.0011133167165322682) -
                (365.73252958930715)*phi_mod*phi_mod - (18.428166519889288)*phi_mod - (-2.181500899851496) -
                (-1.6651968753999575)*eta*eta - (8.025926438017464)*eta - (4.638740671602421));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002955190777964244))/(0.0010990848213226915) -
                (439.0240958866281)*phi_mod*phi_mod - (-25.776388505494513)*phi_mod - (-2.2374423146030615) -
                (20.318666489470885)*eta*eta - (30.869452194683404)*eta - (10.72410233782641));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004162700827943849))/(-0.0011060003894582818) -
                (342.387169400921)*phi_mod*phi_mod - (20.273697373252553)*phi_mod - (-1.927717967862605) -
                (-47.47862282704066)*eta*eta - (-38.08896133807755)*eta - (-6.979356317370249));}

    else if (seg_combination_id == 60402 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028299401609137953))/(0.0010952482837879834) -
                (409.4065467198695)*phi_mod*phi_mod - (-22.853973445594903)*phi_mod - (-2.0994642490758895) -
                (-12.095877457254398)*eta*eta - (-2.8415011755242516)*eta - (1.9411043318219403));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00017162039828344953))/(-0.0007915403998907368) -
                (-56.88282447858063)*phi_mod*phi_mod - (0.05612397088513397)*phi_mod - (0.35442101197448783) -
                (103.70913182581236)*eta*eta - (-472.48260310793626)*eta - (537.2909217957196));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000842031765458402))/(0.0008129519516214711) -
                (-54.438430889050146)*phi_mod*phi_mod - (0.4712715925939547)*phi_mod - (0.3076805427751149) -
                (87.1266561556712)*eta*eta - (-390.17932623187477)*eta - (436.0440600945158));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00025435020064740947))/(-0.0008079638344089851) -
                (-50.31796748945315)*phi_mod*phi_mod - (-0.3575191233363515)*phi_mod - (0.33792805467786824) -
                (36.11729231304448)*eta*eta - (-151.0008449912278)*eta - (155.0574091288356));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009018925762162758))/(0.0008184058822910888) -
                (-43.4608634342833)*phi_mod*phi_mod - (0.7823798244534219)*phi_mod - (0.2622577876401717) -
                (85.98715450856885)*eta*eta - (-385.5528824482557)*eta - (431.42466493323815));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003359700517332547))/(-0.0008084170169254799) -
                (-57.495007013400055)*phi_mod*phi_mod - (-0.8108013347210676)*phi_mod - (0.3617714916533796) -
                (29.75416899976067)*eta*eta - (-117.79161889001874)*eta - (112.07701412044756));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008100568588003056))/(0.0008126996975022365) -
                (-48.84272521368833)*phi_mod*phi_mod - (1.4454747988721641)*phi_mod - (0.31807481607908983) -
                (79.20514233152021)*eta*eta - (-353.7411074941201)*eta - (394.13284626951435));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00036838295841713596))/(-0.0008067202003152696) -
                (-60.24310092236825)*phi_mod*phi_mod - (0.05308774611989626)*phi_mod - (0.3990836175804718) -
                (54.53973783200271)*eta*eta - (-238.2382768268546)*eta - (258.3409388983383));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008283148910226541))/(0.0008070054507139827) -
                (-55.8158884583145)*phi_mod*phi_mod - (1.0025578124966947)*phi_mod - (0.3567897111283424) -
                (90.84424109578295)*eta*eta - (-406.843727274587)*eta - (454.6570790552717));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00019724838936833433))/(-0.0008013959345426125) -
                (-45.09762841998288)*phi_mod*phi_mod - (-0.39691754068626106)*phi_mod - (0.3315864254502145) -
                (3.1443268655700036)*eta*eta - (4.699953778710533)*eta - (-28.71866268787097));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007867412589935986))/(0.0008068590856517781) -
                (-58.861490766131524)*phi_mod*phi_mod - (1.7221749948288887)*phi_mod - (0.363741772105687) -
                (55.99388798223577)*eta*eta - (-244.5515550148442)*eta - (265.7936874824014));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-8.181008132744748e-05))/(-0.0007923438705632209) -
                (-50.923171022310044)*phi_mod*phi_mod - (-0.30147712783820385)*phi_mod - (0.25370605152639447) -
                (29.694043994990054)*eta*eta - (-117.69948986116866)*eta - (112.25358146029485));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008315341803212588))/(0.0008113003519723226) -
                (-57.49279636857964)*phi_mod*phi_mod - (0.325643193479028)*phi_mod - (0.33339183850884013) -
                (92.64232657214323)*eta*eta - (-414.8601833377613)*eta - (463.6109414404307));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002602552529300868))/(-0.0008009342534144846) -
                (-62.52040320378415)*phi_mod*phi_mod - (-0.7319421312546233)*phi_mod - (0.4681057545649463) -
                (69.03543376227181)*eta*eta - (-305.1091952243088)*eta - (335.39658133346944));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008378217810953295))/(0.0008109729680622561) -
                (-48.99979616131326)*phi_mod*phi_mod - (1.1112961877327483)*phi_mod - (0.31438145518561433) -
                (92.59440351939004)*eta*eta - (-414.95186834585235)*eta - (464.0598953940775));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003135114257039798))/(-0.0008053348796236494) -
                (-51.752071969007325)*phi_mod*phi_mod - (-0.7818405455656376)*phi_mod - (0.39712434119391155) -
                (-70.80021597715383)*eta*eta - (353.2181027398253)*eta - (-439.36256124612515));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008084514789094385))/(0.0008112234494822408) -
                (-50.63899793433284)*phi_mod*phi_mod - (0.9594854536598353)*phi_mod - (0.32184129769793896) -
                (80.76611164621896)*eta*eta - (-360.9626196383287)*eta - (402.51050388065306));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0024538680110855983))/(-0.0007094732366514689) -
                (-56.80721873980081)*phi_mod*phi_mod - (1.4671234702991949)*phi_mod - (4.704340611088765) -
                (313.3929510253329)*eta*eta - (888.1479733314578)*eta - (628.2684595610142));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00010837092045574824))/(-0.0005137602838947294) -
                (73.54116827555804)*phi_mod*phi_mod - (-3.4348498700416306)*phi_mod - (-6.704999401417029) -
                (1685.5877347148762)*eta*eta - (4936.944670082797)*eta - (3615.0078710337275));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003066927475292201))/(-0.00040347455684719083) -
                (-73.54172698254261)*phi_mod*phi_mod - (2.8589076589610425)*phi_mod - (1.8449977364419754) -
                (-3448.404191119574)*eta*eta - (-10188.15446363691)*eta - (-7525.279436577644));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (5.619474801764112e-05))/(-0.0005642052999856322) -
                (-76.5726615429393)*phi_mod*phi_mod - (4.824611693320444)*phi_mod - (6.158913983829298) -
                (-1503.5700075012326)*eta*eta - (-4353.61246145319)*eta - (-3150.2072547214416));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005224619682021171))/(-0.0008248827277605275) -
                (41.52284004112291)*phi_mod*phi_mod - (-0.3695341602428334)*phi_mod - (-0.6438324851531615) -
                (-41.828587555669145)*eta*eta - (-192.25690245675554)*eta - (-220.54743630927524));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008635944730443751))/(0.0008238134674543807) -
                (39.01874584534682)*phi_mod*phi_mod - (0.8637622153835197)*phi_mod - (-0.5875630445907182) -
                (34.00599325209965)*eta*eta - (137.84197196522217)*eta - (139.20513491433803));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004641401653683503))/(-0.0008254869291733221) -
                (45.07865149665929)*phi_mod*phi_mod - (-0.48654024980679156)*phi_mod - (-0.6943251603016812) -
                (-35.47594939055958)*eta*eta - (-164.31560288530613)*eta - (-189.81362492250128));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009116110715259399))/(0.0008333989414043698) -
                (37.65201261230869)*phi_mod*phi_mod - (0.9307026608737115)*phi_mod - (-0.6296360706724486) -
                (36.40587349534697)*eta*eta - (148.38164359725772)*eta - (150.75984325017862));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00042919928803034475))/(-0.0008209618441196609) -
                (47.1301436126484)*phi_mod*phi_mod - (-0.50655628101279)*phi_mod - (-0.7545930199499653) -
                (-44.35207989639546)*eta*eta - (-204.61505687868672)*eta - (-235.50987253229687));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008528206635584765))/(0.000828905822561396) -
                (37.00953809630836)*phi_mod*phi_mod - (0.409852674339474)*phi_mod - (-0.6292265948862213) -
                (38.55436530618845)*eta*eta - (157.05419460097795)*eta - (159.49311954502343));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005050631170794936))/(-0.0008238062963221061) -
                (45.87661694593733)*phi_mod*phi_mod - (0.30974995394436927)*phi_mod - (-0.7171809658158903) -
                (-30.54254255605804)*eta*eta - (-142.8140898363843)*eta - (-166.4067625626124));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008713091426986294))/(0.0008304271066789746) -
                (39.78197322831041)*phi_mod*phi_mod - (-0.5226622856512958)*phi_mod - (-0.6541244377622228) -
                (51.49551690602973)*eta*eta - (211.71027778786558)*eta - (217.15315179403586));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00034971999424401304))/(-0.000817314265045039) -
                (49.4261355820658)*phi_mod*phi_mod - (-2.0160096335112043)*phi_mod - (-0.784782535705134) -
                (-37.996955888810085)*eta*eta - (-176.5643204587754)*eta - (-204.5588736671831));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007642713553751877))/(0.0008211494636808334) -
                (40.720134670984145)*phi_mod*phi_mod - (0.9807389629700963)*phi_mod - (-0.5444996504666448) -
                (-3.24244375057736)*eta*eta - (-24.248412233772168)*eta - (-37.09910356373704));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002886910891147511))/(-0.0008123442431207208) -
                (46.05807126640211)*phi_mod*phi_mod - (-0.31706320672197263)*phi_mod - (-0.7248054750952474) -
                (-84.32075924826876)*eta*eta - (-381.4523735046759)*eta - (-430.9563660368116));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006142764911723028))/(0.0008150996427047062) -
                (41.96439418017167)*phi_mod*phi_mod - (-0.24790589626541587)*phi_mod - (-0.748591127121976) -
                (38.83285808436209)*eta*eta - (156.0544397187884)*eta - (156.0517378580209));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00043055085627791254))/(-0.0008147197525360114) -
                (50.10449682009645)*phi_mod*phi_mod - (-0.2299072532202156)*phi_mod - (-0.7858653487088898) -
                (-39.65170991701758)*eta*eta - (-183.3573970960068)*eta - (-211.48423739422094));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000866916017518939))/(0.0008268901908064144) -
                (40.942303286577236)*phi_mod*phi_mod - (0.048407908851202976)*phi_mod - (-0.7282213097815896) -
                (30.25343982339417)*eta*eta - (120.90705733016524)*eta - (120.14295964787108));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00044217021907667073))/(-0.000818186602558404) -
                (44.39751014696574)*phi_mod*phi_mod - (-0.5999087812783914)*phi_mod - (-0.7087667196628058) -
                (-28.569202624377752)*eta*eta - (-133.69423593431404)*eta - (-155.8925842934508));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008761945409258689))/(0.0008222345972600647) -
                (42.25202392466097)*phi_mod*phi_mod - (0.8862162703857647)*phi_mod - (-0.6851219721714112) -
                (46.130770118526094)*eta*eta - (189.60388471405082)*eta - (194.44670701587867));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001335222068852692))/(-0.0008611983119841303) -
                (484.0211989614426)*phi_mod*phi_mod - (22.897966509300097)*phi_mod - (-2.2670687570766144) -
                (148.96692089376663)*eta*eta - (-284.1300173906347)*eta - (135.18709790685267));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002951565937521365))/(0.0008601335754036524) -
                (471.6292380832081)*phi_mod*phi_mod - (-22.15606471590283)*phi_mod - (-2.55026953924434) -
                (-292.05757979183056)*eta*eta - (496.8016472146719)*eta - (-210.72342863753073));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011278265573897862))/(-0.0008532641455508318) -
                (438.40879998713115)*phi_mod*phi_mod - (28.878026494062702)*phi_mod - (-2.0172805609140965) -
                (94.49984843977099)*eta*eta - (-183.41157186823818)*eta - (88.63535539595563));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028424351487662705))/(0.00085367420571477) -
                (413.32716821958263)*phi_mod*phi_mod - (-15.093221264025134)*phi_mod - (-2.2800133466346995) -
                (-854.1055787511169)*eta*eta - (1500.9504800468014)*eta - (-659.1266517413222));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001334060771274848))/(-0.0008628301630929623) -
                (474.62935296034857)*phi_mod*phi_mod - (25.02735842526437)*phi_mod - (-2.1437774112721835) -
                (202.83325515895405)*eta*eta - (-383.61571868896124)*eta - (181.09690307576642));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00273698150918674))/(0.0008499749530635806) -
                (497.16744687818755)*phi_mod*phi_mod - (-19.16382314515572)*phi_mod - (-2.7390806522390285) -
                (-133.48008647342638)*eta*eta - (217.3450966787281)*eta - (-87.64653307722716));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013481463551580726))/(-0.000855339876587381) -
                (457.9473400414358)*phi_mod*phi_mod - (22.63810370076383)*phi_mod - (-2.038877386981663) -
                (165.39355560161718)*eta*eta - (-315.5043426623943)*eta - (150.1974893451552));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0029687028270727286))/(0.000856841693908501) -
                (504.86632825833743)*phi_mod*phi_mod - (-21.115955880961614)*phi_mod - (-2.758310800034823) -
                (-142.39438844745303)*eta*eta - (237.27928406668755)*eta - (-98.31085147215168));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001388850505683849))/(-0.0008609702265175243) -
                (393.91849312948546)*phi_mod*phi_mod - (18.197687712380105)*phi_mod - (-1.886998785697508) -
                (193.64026579998978)*eta*eta - (-366.48873932603124)*eta - (173.17740602344668));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0027570428339475928))/(0.0008590464987262021) -
                (455.26464112333883)*phi_mod*phi_mod - (-22.232648296158796)*phi_mod - (-2.7572188217112705) -
                (-54.26983961903333)*eta*eta - (84.20410676243385)*eta - (-31.880817941098364));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001469486472527095))/(-0.0008641310431912718) -
                (430.2287040446182)*phi_mod*phi_mod - (21.827965412943804)*phi_mod - (-1.904712160453466) -
                (257.39700208874393)*eta*eta - (-478.941063935982)*eta - (222.66293432963582));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0028321935753409595))/(0.0008665022775597692) -
                (429.81976941985647)*phi_mod*phi_mod - (-19.12311356592811)*phi_mod - (-2.750474339308131) -
                (-414.3505221533639)*eta*eta - (718.6615704043804)*eta - (-311.35058653628926));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011809853790549602))/(-0.000844601662497793) -
                (-66.85812580666446)*phi_mod*phi_mod - (1.3482821657491233)*phi_mod - (0.22641670442227133) -
                (91.3446025344382)*eta*eta - (365.8632761991325)*eta - (364.0521808279531));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-8.044508474209163e-05))/(0.0008405713502489794) -
                (-66.5300316240449)*phi_mod*phi_mod - (-1.834570316685471)*phi_mod - (0.15862352335442767) -
                (13.64281726389583)*eta*eta - (79.2327976308887)*eta - (98.67492746197688));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001240001211971135))/(-0.0008501801576802224) -
                (-88.76960668626495)*phi_mod*phi_mod - (1.714952181766838)*phi_mod - (0.3522541273984272) -
                (101.37300787449108)*eta*eta - (404.2606223119523)*eta - (400.74511938924286));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (4.557279829575577e-05))/(0.0008352484285874586) -
                (-95.40041882513071)*phi_mod*phi_mod - (-4.413053273380029)*phi_mod - (0.29526669428617497) -
                (16.734211057440213)*eta*eta - (91.71571032918014)*eta - (111.1284448413521));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011405709176480125))/(-0.0008443503958207211) -
                (-87.10287017614763)*phi_mod*phi_mod - (1.6260567815076774)*phi_mod - (0.35509396930936693) -
                (103.18583198176232)*eta*eta - (411.6032962163987)*eta - (408.09218087747064));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-5.297961306143505e-05))/(0.0008420293650198914) -
                (-81.3112470280667)*phi_mod*phi_mod - (-2.0057807888484684)*phi_mod - (0.2681391076823537) -
                (20.64742796352142)*eta*eta - (106.96771875571436)*eta - (125.91747825302511));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011911927820011056))/(-0.0008468615061922846) -
                (-81.5029842307988)*phi_mod*phi_mod - (2.3704449890103536)*phi_mod - (0.29236535519678614) -
                (74.23066541722939)*eta*eta - (304.1973648931581)*eta - (308.56883946002614));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-7.572270671452592e-05))/(0.000845691163785265) -
                (-72.32332663143075)*phi_mod*phi_mod - (-2.1854750814749537)*phi_mod - (0.2294315548531056) -
                (25.60161633193698)*eta*eta - (125.20324256539513)*eta - (142.66782517388432));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001147675172833141))/(-0.0008402033911764361) -
                (-79.7415177964736)*phi_mod*phi_mod - (2.0759742860137047)*phi_mod - (0.28151259014927926) -
                (112.21332527704618)*eta*eta - (444.17244204598717)*eta - (437.38392143579904));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-1.5867956873436517e-05))/(0.0008400062125481951) -
                (-81.17336616767975)*phi_mod*phi_mod - (-1.345557594846045)*phi_mod - (0.23969451086131927) -
                (11.436825724653039)*eta*eta - (72.65540965698543)*eta - (93.9260496565259));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010837522059399347))/(-0.0008365371468139768) -
                (-82.99945484618466)*phi_mod*phi_mod - (1.0993998430857534)*phi_mod - (0.28525804936227245) -
                (40.18129177101662)*eta*eta - (173.90482077535682)*eta - (184.17738661511606));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003343143637625942))/(0.0008180331429454866) -
                (-59.570363131305356)*phi_mod*phi_mod - (-1.9432838248177569)*phi_mod - (0.1953681394944563) -
                (29.26136707417625)*eta*eta - (133.44261580338377)*eta - (146.070003284505));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011728883924571442))/(-0.0008454740756750841) -
                (-70.83529481992952)*phi_mod*phi_mod - (2.7495465221608804)*phi_mod - (0.21188297219211938) -
                (69.34238606459223)*eta*eta - (282.86803985190676)*eta - (285.7165049698666));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (3.368617738042406e-05))/(0.0008390457788030292) -
                (-72.5980423297561)*phi_mod*phi_mod - (-1.5811315422191947)*phi_mod - (0.13508695111066119) -
                (17.82487428571347)*eta*eta - (93.66142189730459)*eta - (110.94154874976839));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001261237202829655))/(-0.0008484942378979707) -
                (-80.04791431441615)*phi_mod*phi_mod - (1.5471236194070255)*phi_mod - (0.3109801470561913) -
                (116.0749293635643)*eta*eta - (458.419566892168)*eta - (450.54230943981275));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-7.314202165582072e-05))/(0.0008410870419867673) -
                (-81.43130055334065)*phi_mod*phi_mod - (-1.460704831464706)*phi_mod - (0.27954985146816014) -
                (16.281117626003144)*eta*eta - (90.37977899653902)*eta - (110.14133330289711));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.02032179280469576))/(0.0060204101737347014) -
                (56.01002445289922)*phi_mod*phi_mod - (-29.808764277653626)*phi_mod - (3.0610802752882704) -
                (315.45653172158427)*eta*eta - (309.2773596508979)*eta - (75.72258453448953));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01683349606303468))/(0.005733283961571317) -
                (-146.51466819592204)*phi_mod*phi_mod - (0.4975754379761473)*phi_mod - (0.7439541180830003) -
                (-233.70090361542893)*eta*eta - (-208.77168036822673)*eta - (-46.410639795035365));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010834881927612778))/(-0.003170079016327038) -
                (-25.566587125505126)*phi_mod*phi_mod - (13.703302585707533)*phi_mod - (2.370075288724645) -
                (-72.56889426520715)*eta*eta - (-50.58457340252851)*eta - (-8.33890970150851));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00874143099035788))/(0.003167559173495888) -
                (-117.56240473288145)*phi_mod*phi_mod - (2.441174366175183)*phi_mod - (1.411154123588055) -
                (-68.24347046412436)*eta*eta - (-47.931364790194245)*eta - (-7.912739434835003));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010399595751080423))/(-0.00318756880919992) -
                (-114.40764650668686)*phi_mod*phi_mod - (-1.5076562663311546)*phi_mod - (1.3243156253686326) -
                (-28.8832449471419)*eta*eta - (-15.1106133920162)*eta - (-1.1744660227818018));}

    else if (seg_combination_id == 50313 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009062524842261646))/(0.0032093490570465834) -
                (1.0911814713294055)*phi_mod*phi_mod - (-18.6480181894919)*phi_mod - (2.6415810619251716) -
                (90.07499173374384)*eta*eta - (84.3628736042615)*eta - (19.672696756387573));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00927525193162982))/(-0.0032828760224148496) -
                (-26.522970895383054)*phi_mod*phi_mod - (12.23485120766693)*phi_mod - (2.064006650230361) -
                (8.077158032649143)*eta*eta - (-8.843219645698081)*eta - (2.147257690070936));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010807997390812238))/(0.0032765396451185035) -
                (-108.24211542383144)*phi_mod*phi_mod - (6.234840489652616)*phi_mod - (1.3747321626329494) -
                (-26.156559823355206)*eta*eta - (12.481581545929822)*eta - (-1.14372171321845));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008356681992396484))/(-0.0032534843108133556) -
                (-84.9188338504127)*phi_mod*phi_mod - (-7.127630236747161)*phi_mod - (1.2814221131963806) -
                (12.038069478660708)*eta*eta - (-11.435014188056437)*eta - (2.576466076405901));}

    else if (seg_combination_id == 50313 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01074469760970859))/(0.0032770386482351968) -
                (-18.668607808630473)*phi_mod*phi_mod - (-12.199270691153044)*phi_mod - (1.8702844294513126) -
                (-38.90386191545053)*eta*eta - (22.81343252237484)*eta - (-3.0567873177719287));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005577010905705331))/(-0.0022976261179882993) -
                (-83.85062335793351)*phi_mod*phi_mod - (-4.990491080463166)*phi_mod - (1.1512580071828182) -
                (522.0180048095181)*eta*eta - (-730.0455766587684)*eta - (254.95317684357974));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007579575332946282))/(0.002267299758217516) -
                (-99.99936446741766)*phi_mod*phi_mod - (5.382169316612804)*phi_mod - (1.279055283962488) -
                (603.0403741639966)*eta*eta - (-834.5503109412615)*eta - (288.484553031577));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005613946874166255))/(-0.002313299779054019) -
                (-82.59874114332635)*phi_mod*phi_mod - (-3.831528838660593)*phi_mod - (1.1002772172790682) -
                (455.5112254981995)*eta*eta - (-639.1443870680789)*eta - (223.9189901864774));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007593087503904923))/(0.002277590154755415) -
                (-99.46281870648961)*phi_mod*phi_mod - (5.43149588143745)*phi_mod - (1.2029164785829298) -
                (569.1282286130506)*eta*eta - (-790.4596689813947)*eta - (274.173074599274));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005185478985827662))/(-0.0022726005431480253) -
                (-85.77218402215041)*phi_mod*phi_mod - (-4.884921724504064)*phi_mod - (1.2043279990716218) -
                (352.51997186588085)*eta*eta - (-494.8089774223687)*eta - (173.49223716157968));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007584624244771065))/(0.0022653810593861647) -
                (-103.21777602694952)*phi_mod*phi_mod - (5.327906667730427)*phi_mod - (1.3642827595720637) -
                (381.43711176477126)*eta*eta - (-526.7221370661505)*eta - (181.7610229448927));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005214551468271715))/(-0.0022687990570497557) -
                (-92.20619294433331)*phi_mod*phi_mod - (-5.983031346602696)*phi_mod - (1.2821585990791213) -
                (571.1814979883043)*eta*eta - (-795.448500012677)*eta - (276.70953947771807));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007676427606265283))/(0.0022696076971659676) -
                (-103.93241086899894)*phi_mod*phi_mod - (4.819211578490175)*phi_mod - (1.4378810768518444) -
                (731.8889338191096)*eta*eta - (-1003.9146748223357)*eta - (344.0976693616139));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006147460607002507))/(-0.0023123203161188595) -
                (-93.57814856696515)*phi_mod*phi_mod - (-5.426153855080284)*phi_mod - (1.332826329656768) -
                (453.1341604121101)*eta*eta - (-636.9844133600135)*eta - (223.52117188472454));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00804670462340173))/(0.002281555311392527) -
                (-103.70036464103299)*phi_mod*phi_mod - (5.60220547747796)*phi_mod - (1.3397875555738976) -
                (618.6167593645272)*eta*eta - (-856.3731097313786)*eta - (296.09239620422966));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007076297054013022))/(-0.0024698197073061384) -
                (-74.81800577196947)*phi_mod*phi_mod - (-3.752207623445871)*phi_mod - (1.1292075802230706) -
                (-192.90602694339884)*eta*eta - (239.82953904247444)*eta - (-74.31596144768416));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00907146887662486))/(0.0024785860100628374) -
                (-89.74711977846442)*phi_mod*phi_mod - (4.619279476087426)*phi_mod - (1.031549465645903) -
                (-184.5593995008228)*eta*eta - (230.13014027474875)*eta - (-71.60652512836764));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007102559140537513))/(-0.0024966134087086845) -
                (-44.52820945592651)*phi_mod*phi_mod - (-3.1252716401876888)*phi_mod - (0.7638208871342136) -
                (-168.4603945047421)*eta*eta - (146.7385579449361)*eta - (-31.577440814137447));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006731418249586224))/(-0.0025061738939884037) -
                (-45.55349268610086)*phi_mod*phi_mod - (-3.4787327781012203)*phi_mod - (0.6689842465872166) -
                (-880.0296008435934)*eta*eta - (836.1045127233414)*eta - (-198.4032472694482));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006312069691463909))/(-0.002499400700445765) -
                (-60.97624901080603)*phi_mod*phi_mod - (-4.23547671422323)*phi_mod - (0.8857640261971204) -
                (-142.1447356875073)*eta*eta - (123.74960969141254)*eta - (-26.639855511415043));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007941113122413957))/(-0.00258107751892882) -
                (-52.434434351835975)*phi_mod*phi_mod - (-5.979007121675405)*phi_mod - (0.7015382695877268) -
                (-258.05501485112984)*eta*eta - (238.80766346270664)*eta - (-55.128548091789305));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006271062403051489))/(-0.0024362912734556047) -
                (-54.64641890599573)*phi_mod*phi_mod - (-3.8795151320340984)*phi_mod - (0.9972023274922577) -
                (197.0772965905864)*eta*eta - (-201.00230077639034)*eta - (51.08301755614764));}

    else if (seg_combination_id == 110902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003902493985880206))/(-0.0010337171370775045) -
                (284.82036758843174)*phi_mod*phi_mod - (18.85015963263083)*phi_mod - (-1.816978840388423) -
                (-255.9414810191021)*eta*eta - (-296.66377080220093)*eta - (-85.7561184413088));}

    else if (seg_combination_id == 110902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002272861697198304))/(0.001034425741986729) -
                (415.2357444488961)*phi_mod*phi_mod - (-16.979125620425485)*phi_mod - (-3.060107692942587) -
                (-226.0171827697618)*eta*eta - (-248.7382164122735)*eta - (-67.92037633444225));}

    else if (seg_combination_id == 110902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004004227492092281))/(-0.00103225591557264) -
                (328.33434078362734)*phi_mod*phi_mod - (14.40174675405545)*phi_mod - (-2.1683418981412066) -
                (-56.03005606258947)*eta*eta - (-62.06511301559643)*eta - (-17.05956346237428));}

    else if (seg_combination_id == 110902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022249634957195404))/(0.001021872460210285) -
                (424.2942841359707)*phi_mod*phi_mod - (-23.325024961203326)*phi_mod - (-2.8035843435165364) -
                (-86.24287520236764)*eta*eta - (-90.63508640417142)*eta - (-23.3997847217496));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0014314279010496623))/(-0.0008975624319357208) -
                (487.1761275524929)*phi_mod*phi_mod - (21.5092756914016)*phi_mod - (-2.317414498260966) -
                (125.35690873646583)*eta*eta - (-221.4976835682799)*eta - (97.61125755816012));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0035623782861362646))/(0.0009121753698030663) -
                (381.5367172111511)*phi_mod*phi_mod - (-20.46569254764335)*phi_mod - (-1.9578710347072228) -
                (79.96538895318275)*eta*eta - (-146.83513985395402)*eta - (66.79617448285833));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001426267364554869))/(-0.0009057234550124255) -
                (471.7871769656664)*phi_mod*phi_mod - (25.54358158990794)*phi_mod - (-2.3165625730949992) -
                (174.38573391140181)*eta*eta - (-305.3084969607942)*eta - (133.35589290341647));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0035467707029763463))/(0.0009184533130586895) -
                (410.37675902789573)*phi_mod*phi_mod - (-19.996685648542844)*phi_mod - (-2.212303899615751) -
                (194.8675896165759)*eta*eta - (-335.38040537550484)*eta - (144.00183243623306));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015879551963461718))/(-0.0009134902902622044) -
                (480.93926964927323)*phi_mod*phi_mod - (23.86348018451538)*phi_mod - (-2.362137936726328) -
                (185.68709541342054)*eta*eta - (-323.9601493342754)*eta - (141.05892523216303));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0035973721654206673))/(0.0009201352081278058) -
                (432.0967934751431)*phi_mod*phi_mod - (-19.727948352805797)*phi_mod - (-2.403782868152823) -
                (131.06654317042583)*eta*eta - (-232.3323702523192)*eta - (102.48500256358345));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00158563079416595))/(-0.000904502048037991) -
                (487.70536027448884)*phi_mod*phi_mod - (23.676163927923408)*phi_mod - (-2.338037542052811) -
                (169.48892650911378)*eta*eta - (-297.37977185951115)*eta - (130.27872684343868));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033585630906960715))/(0.0008940393357842229) -
                (445.22621954062515)*phi_mod*phi_mod - (-20.6321764702173)*phi_mod - (-2.3222926547052736) -
                (77.97858215512314)*eta*eta - (-144.20331006716773)*eta - (66.15411168726577));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0015650324876990104))/(-0.0009051241278593947) -
                (471.6716297584381)*phi_mod*phi_mod - (19.764185592408307)*phi_mod - (-2.418010894533958) -
                (171.93607952367756)*eta*eta - (-300.3861168858973)*eta - (131.07854187991637));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0033690303171167993))/(0.0009011917636561516) -
                (382.3045868570777)*phi_mod*phi_mod - (-20.736461956565485)*phi_mod - (-2.1767349982719724) -
                (109.09694154865444)*eta*eta - (-196.0636108904469)*eta - (87.75795681814371));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013694244068684644))/(-0.0008911694741478713) -
                (450.85806817017993)*phi_mod*phi_mod - (22.17335182414332)*phi_mod - (-2.15835802911225) -
                (200.78022631490293)*eta*eta - (-351.5956129822794)*eta - (153.7279970720663));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0034953079823836324))/(0.0009096483666647554) -
                (379.55901594031843)*phi_mod*phi_mod - (-19.488189249745623)*phi_mod - (-2.253988490958861) -
                (147.3305386330709)*eta*eta - (-259.1524280729486)*eta - (113.7476598931513));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005665810701864535))/(-0.0018897946574842595) -
                (-129.1277259137747)*phi_mod*phi_mod - (-5.914892042692745)*phi_mod - (1.6444164502476568) -
                (233.77511049102085)*eta*eta - (477.44373612877644)*eta - (243.34057794058745));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003072216498321957))/(0.001879092596955426) -
                (-130.6664847125197)*phi_mod*phi_mod - (6.099378379901954)*phi_mod - (1.9041734405535145) -
                (-494.61417131512036)*eta*eta - (-989.1786266997523)*eta - (-494.42800763748005));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00583425941916442))/(-0.0019002408934589228) -
                (-129.39914580289687)*phi_mod*phi_mod - (-5.387176090376132)*phi_mod - (1.637859825785105) -
                (251.96400229195032)*eta*eta - (511.6923369107306)*eta - (259.44009664500334));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00274610856588015))/(0.0018688810275937562) -
                (-126.06340784832324)*phi_mod*phi_mod - (6.056245837868641)*phi_mod - (1.8161458743890722) -
                (-515.0990679225786)*eta*eta - (-1031.369298904685)*eta - (-516.1245533589663));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006047213085525795))/(-0.001923175531062528) -
                (-130.27865421096425)*phi_mod*phi_mod - (-5.440927874307278)*phi_mod - (1.5191704327777669) -
                (391.27678144035553)*eta*eta - (787.6336221420595)*eta - (396.05230477992757));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002837826561656259))/(0.0018731312640874246) -
                (-125.76232627993421)*phi_mod*phi_mod - (5.04526346313379)*phi_mod - (1.7470898415022211) -
                (-381.1593732451917)*eta*eta - (-764.2015658848971)*eta - (-382.91906843208784));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005848150900630684))/(-0.0018783240576028593) -
                (-138.06154721267197)*phi_mod*phi_mod - (-6.578670508286068)*phi_mod - (2.0171512669175735) -
                (107.21719617180821)*eta*eta - (234.5540677217405)*eta - (126.97818826291825));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002852759750352687))/(0.0018220327251013341) -
                (-137.42955460172064)*phi_mod*phi_mod - (5.62918853481184)*phi_mod - (2.6173408806845377) -
                (-353.04258371543784)*eta*eta - (-702.5725997983914)*eta - (-349.38366968868377));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006289393554632571))/(-0.0019080439760714842) -
                (-134.80569542371174)*phi_mod*phi_mod - (-5.584019079573775)*phi_mod - (1.7929172867103884) -
                (365.97268976655687)*eta*eta - (739.7885635276103)*eta - (373.4976611194294));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003219988632342585))/(0.0018721119479444338) -
                (-129.3072126366095)*phi_mod*phi_mod - (5.746787574744685)*phi_mod - (1.9510893718914075) -
                (-634.0697818016755)*eta*eta - (-1264.801606461418)*eta - (-630.5812056193288));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006175043567101751))/(-0.0020489134941107175) -
                (-88.17816466353091)*phi_mod*phi_mod - (-6.229340624929949)*phi_mod - (1.0853393893236718) -
                (-94.95123902232599)*eta*eta - (-165.09223408479124)*eta - (-71.30626493409544));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003821511978386215))/(0.0020371192143625876) -
                (-104.40552512468156)*phi_mod*phi_mod - (6.609869565451499)*phi_mod - (1.8819166061685746) -
                (-770.0586415010415)*eta*eta - (-1274.09790576471)*eta - (-526.9072681876492));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0060207029994940875))/(-0.0020480081865259475) -
                (-92.37447210582243)*phi_mod*phi_mod - (-5.0899293300344075)*phi_mod - (1.1215290146786414) -
                (-165.44570303004247)*eta*eta - (-278.4073212309458)*eta - (-116.82552272149246));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030947470051934066))/(0.0020163379988633033) -
                (-102.58934994048646)*phi_mod*phi_mod - (5.224617733068015)*phi_mod - (1.8293125299221007) -
                (-474.5740774745133)*eta*eta - (-775.9311042504852)*eta - (-317.0795478424256));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0058679797140054725))/(-0.0020490172571896057) -
                (-84.50973060694022)*phi_mod*phi_mod - (-5.293746995837117)*phi_mod - (1.033336316063247) -
                (-119.04907608873319)*eta*eta - (-203.16560946246815)*eta - (-86.33473185424027));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022339712203345774))/(0.002000519063339423) -
                (-106.78543776675541)*phi_mod*phi_mod - (5.690371799031715)*phi_mod - (1.8491214331641634) -
                (-806.1345197327051)*eta*eta - (-1325.1448610090922)*eta - (-544.4752944789024));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006452761230277432))/(-0.0020731909217438426) -
                (-92.9094097655619)*phi_mod*phi_mod - (-6.579677751418988)*phi_mod - (1.0810500239666363) -
                (-100.94946750514782)*eta*eta - (-173.59260883569934)*eta - (-74.2689063633267));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0030532382049923367))/(0.002009278284032372) -
                (-111.50009050644357)*phi_mod*phi_mod - (5.526773459927534)*phi_mod - (2.0244679298272192) -
                (-1295.5817983448474)*eta*eta - (-2131.134999456773)*eta - (-876.2591541224971));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006809853556819838))/(-0.0021018777889398824) -
                (-96.10825397297023)*phi_mod*phi_mod - (-5.285582529988969)*phi_mod - (1.286517728141191) -
                (-177.08226798695546)*eta*eta - (-291.5868843225797)*eta - (-119.89078618036133));}

    else if (seg_combination_id == 50301 && eta_inner == -4 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00381618958384093))/(0.0020479170370684002) -
                (-103.78472439420658)*phi_mod*phi_mod - (5.543146979265944)*phi_mod - (1.9583392203963168) -
                (-552.6852649372705)*eta*eta - (-915.2944669936293)*eta - (-378.8391303176694));}

    else if (seg_combination_id == 110902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008161914703250794))/(-0.0005300725718262253) -
                (125.51581987416414)*phi_mod*phi_mod - (6.757089855726748)*phi_mod - (-0.4730021622661967) -
                (-992.114124217553)*eta*eta - (-1819.9149151457611)*eta - (-833.7651086111634));}

    else if (seg_combination_id == 110902 && eta_inner == -5 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004212455249964189))/(-7.14214410888715e-05) -
                (-416.1043998429611)*phi_mod*phi_mod - (-44.085433847295285)*phi_mod - (0.492317197552039) -
                (-73.81400152369967)*eta*eta - (-180.4675611466388)*eta - (-102.00715552717458));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0489727416188519))/(-0.005660036421187054) -
                (-34.29802003649036)*phi_mod*phi_mod - (-5.520887300821343)*phi_mod - (0.390085695825639) -
                (2519.6835922644464)*eta*eta - (-4752.092223389117)*eta - (2238.9455150385093));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.026057930851801775))/(0.00039832331305017315) -
                (-392.7974166345396)*phi_mod*phi_mod - (-85.46934687529931)*phi_mod - (1.6137275725355036) -
                (7338.0420102065345)*eta*eta - (-14097.823851382598)*eta - (6769.930332444487));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004653332461842336))/(-0.002215396289262885) -
                (-79.03906713374182)*phi_mod*phi_mod - (-7.256441807480033)*phi_mod - (0.41662293464521966) -
                (1691.2796301962048)*eta*eta - (-3281.6681039314512)*eta - (1591.7319778188955));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.019389526857069687))/(-4.258914459956719e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00425016477155821))/(-0.0019796913530293956) -
                (-106.14224015952176)*phi_mod*phi_mod - (-5.121652557757242)*phi_mod - (1.8700485301884564) -
                (311.22206753202113)*eta*eta - (-626.6924630968188)*eta - (315.0542028023371));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005013758696648742))/(0.0019172365887627346) -
                (-135.43662750891417)*phi_mod*phi_mod - (5.052439666326952)*phi_mod - (2.6657297238669635) -
                (326.40765376324896)*eta*eta - (-609.4483700784746)*eta - (284.44980905701675));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006329759610169929))/(-0.0019730284723887695) -
                (-170.19868134521715)*phi_mod*phi_mod - (-8.380650610417737)*phi_mod - (3.5412598338440495) -
                (-1471.9593108730453)*eta*eta - (-2805.9458847668006)*eta - (-1337.145451155241));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004668750546511911))/(0.002019004387982759) -
                (-105.20610087093893)*phi_mod*phi_mod - (6.40859167283756)*phi_mod - (1.737363972955284) -
                (2.7435829223157273)*eta*eta - (13.588443694261748)*eta - (10.653123656552333));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006098731956960584))/(-0.0016392111536269816) -
                (-155.66570068250098)*phi_mod*phi_mod - (-2.302415091246847)*phi_mod - (1.7165394757543062) -
                (-4072.385620521269)*eta*eta - (-7788.599969269242)*eta - (-3723.5820373545184));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004886622954235729))/(0.002029907993576873) -
                (-104.7646369067658)*phi_mod*phi_mod - (6.481880454912797)*phi_mod - (1.7378755708152835) -
                (47.402681145738406)*eta*eta - (100.29048248920064)*eta - (52.715725470591394));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004965793567593977))/(-0.0017501935589356974) -
                (-185.6287133875357)*phi_mod*phi_mod - (-4.92988662834833)*phi_mod - (4.260126308270003) -
                (3907.095101992058)*eta*eta - (7385.537542350482)*eta - (3490.0324288658603));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004765790524938635))/(0.0020381579680139386) -
                (-106.98526017616886)*phi_mod*phi_mod - (6.496148233444946)*phi_mod - (1.672027437213802) -
                (-107.32103351624298)*eta*eta - (-199.85247447334757)*eta - (-92.80663422221387));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0278231770193738))/(-0.0030668585752055113) -
                (-111.86541778083944)*phi_mod*phi_mod - (-7.034360170398655)*phi_mod - (-0.9847443203321493) -
                (-1675.6552385516907)*eta*eta - (-3343.9467920614848)*eta - (-1664.7910009571613));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0048557976169896055))/(0.00202704757368832) -
                (-113.24984116921146)*phi_mod*phi_mod - (5.638632111441598)*phi_mod - (1.9807645160560858) -
                (89.90456615526595)*eta*eta - (186.05737530204027)*eta - (95.92743117159557));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005265271508365357))/(0.0020391671092093873) -
                (-120.45685896389692)*phi_mod*phi_mod - (7.235381644303897)*phi_mod - (2.1035268842641526) -
                (-23.73943289341088)*eta*eta - (-38.505851612200445)*eta - (-14.956927159990432));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.021464643586419866))/(-0.0005279624125732934) -
                (-39.75233076209917)*phi_mod*phi_mod - (-2.791555672056361)*phi_mod - (-2.0868240888257095) -
                (-45.63351563160817)*eta*eta - (57.32810595691704)*eta - (-17.93721223379277));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003283984626892563))/(-0.0011726268568414508) -
                (354.30733119645396)*phi_mod*phi_mod - (24.222398246288247)*phi_mod - (-1.7821257208275765) -
                (7.149594345647049)*eta*eta - (-6.351042525305155)*eta - (1.3697700109034816));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004349990981827597))/(0.0011808073853410241) -
                (333.32133384915016)*phi_mod*phi_mod - (-19.790299121322782)*phi_mod - (-1.5650559597082123) -
                (-14.960583916646534)*eta*eta - (6.038131911159931)*eta - (-0.32941327231827106));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0032203578740740233))/(-0.0011575151388735646) -
                (417.18418478828255)*phi_mod*phi_mod - (25.15995052747979)*phi_mod - (-1.7270221781251558) -
                (-16.423338800277566)*eta*eta - (8.612616103547607)*eta - (-0.9430486580467883));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004206680559174991))/(0.0011596553378314127) -
                (394.7601676186962)*phi_mod*phi_mod - (-22.095932984170908)*phi_mod - (-1.7267335332658984) -
                (-22.163858412106624)*eta*eta - (10.644645267491205)*eta - (-1.0384274833259513));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003351705661081136))/(-0.001167938075826957) -
                (411.56572903438456)*phi_mod*phi_mod - (24.091339460228856)*phi_mod - (-1.846020825459956) -
                (1.7131176673478827)*eta*eta - (-4.308132650152323)*eta - (1.299709636665239));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004171212028506724))/(0.0011702994263069419) -
                (413.7973316544615)*phi_mod*phi_mod - (-21.510159307441917)*phi_mod - (-1.9581092334390724) -
                (-5.347292125737561)*eta*eta - (-1.6839621544139864)*eta - (1.1504828034922925));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003250474813224893))/(-0.0011652973858982008) -
                (417.7019636412713)*phi_mod*phi_mod - (23.822298102515553)*phi_mod - (-1.9197858629717637) -
                (2.6076276807856447)*eta*eta - (-5.174140831868041)*eta - (1.5038998923516995));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00441140663314915))/(0.0011792517495807955) -
                (403.3449303562544)*phi_mod*phi_mod - (-21.27984153724517)*phi_mod - (-1.9651431615283304) -
                (4.772833910965822)*eta*eta - (-7.812114236705966)*eta - (2.0716345189690206));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0033830964607551614))/(-0.0011798598916084237) -
                (375.0605119700228)*phi_mod*phi_mod - (19.40219858599546)*phi_mod - (-1.9456019930638988) -
                (-3.6615873895772393)*eta*eta - (-0.6538645706124545)*eta - (0.7077715742634165));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004284803069692109))/(0.0011838665400237057) -
                (384.7253768908348)*phi_mod*phi_mod - (-23.212737579667454)*phi_mod - (-2.0076209317032254) -
                (-14.468913563293256)*eta*eta - (4.95241781097874)*eta - (0.008936834579505348));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034189017586764565))/(-0.0011861621109286653) -
                (388.8030502771445)*phi_mod*phi_mod - (22.13118764125478)*phi_mod - (-1.9912231161892566) -
                (-5.8039944278048)*eta*eta - (1.0695982169786507)*eta - (0.37590338392972444));}

    else if (seg_combination_id == 60402 && eta_inner == 2 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00425283558727698))/(0.0011873556979842238) -
                (367.2646230600418)*phi_mod*phi_mod - (-21.693183683265534)*phi_mod - (-1.9659996283085812) -
                (-0.8924931642324132)*eta*eta - (-3.387488670882822)*eta - (1.2377490220171394));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0033652028921720093))/(-0.0008747858164266214) -
                (675.5632873262697)*phi_mod*phi_mod - (25.587849064668806)*phi_mod - (-3.9956406457404796) -
                (454.2247500304895)*eta*eta - (-575.3290011066716)*eta - (182.01512715946183));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004105536278720117))/(0.0010380995497756313) -
                (295.9671481246913)*phi_mod*phi_mod - (-21.311868695540454)*phi_mod - (-1.2727960777936649) -
                (-364.97666776170166)*eta*eta - (430.9223614353358)*eta - (-127.05011669421529));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0017591368847887717))/(-0.0010524314013684538) -
                (524.4156079418145)*phi_mod*phi_mod - (22.530918201969573)*phi_mod - (-3.1941623176784986) -
                (443.69392593012503)*eta*eta - (-557.0445842266022)*eta - (174.64091819715009));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004100016795407424))/(0.0010334954811621617) -
                (294.7053717751993)*phi_mod*phi_mod - (-17.424979124124953)*phi_mod - (-1.310129968392362) -
                (-373.4065743022052)*eta*eta - (444.7506485879232)*eta - (-132.26149698569122));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0046390063106347594))/(-0.0008012792340649277) -
                (606.9987837925621)*phi_mod*phi_mod - (22.97737695852317)*phi_mod - (-2.9584146827219113) -
                (-3230.9077601785284)*eta*eta - (3894.451734252026)*eta - (-1173.5685711546794));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0038137699455148256))/(0.0010063213134252629) -
                (318.33324577361765)*phi_mod*phi_mod - (-23.74937554600587)*phi_mod - (-1.11965678339674) -
                (-509.16708009449303)*eta*eta - (597.7668380041858)*eta - (-175.29066489729044));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004968177867557195))/(-0.000766813256837688) -
                (612.0049287563731)*phi_mod*phi_mod - (19.024943466546123)*phi_mod - (-3.4795023239912224) -
                (-34092.29889117234)*eta*eta - (41599.37387015746)*eta - (-12688.752874293928));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00373497026792448))/(0.0010150686273919338) -
                (302.2137349169422)*phi_mod*phi_mod - (-20.531503939705736)*phi_mod - (-1.415920580308539) -
                (-268.1859708179135)*eta*eta - (317.4600387420859)*eta - (-93.76863018368041));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-2.3982919723563705e-05))/(-0.0009833412370574088) -
                (592.3006858946342)*phi_mod*phi_mod - (19.439182109745712)*phi_mod - (-3.9457638615903727) -
                (-5106.907988151376)*eta*eta - (6135.697839277646)*eta - (-1842.4560677936158));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004206886546720125))/(0.0010436340713342789) -
                (289.24953045384103)*phi_mod*phi_mod - (-21.566503737065535)*phi_mod - (-1.3720089789961416) -
                (-357.957480173029)*eta*eta - (425.97729716911897)*eta - (-126.5915681271229));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002027469264187032))/(-0.0008857331111166945) -
                (622.5048280228389)*phi_mod*phi_mod - (23.978546451012807)*phi_mod - (-3.408359717517135) -
                (5538.048389019977)*eta*eta - (-6761.951861587184)*eta - (2063.970561709988));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003799561838629047))/(0.0010276761473709544) -
                (288.7154359704888)*phi_mod*phi_mod - (-17.716752666791038)*phi_mod - (-1.4905244215503122) -
                (-112.8370332739993)*eta*eta - (144.118299655094)*eta - (-45.663654421039354));}

    else if (seg_combination_id == 50302 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001415999359982588))/(-0.0011332323488088515) -
                (183.0335047320052)*phi_mod*phi_mod - (11.931128537814836)*phi_mod - (-9.482153093525485) -
                (-215.71786652333213)*eta*eta - (385.2892575840811)*eta - (-171.70695545051674));}

    else if (seg_combination_id == 50302 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0040514793916316605))/(-0.0014132905811308249) -
                (-3.0185424172312656)*phi_mod*phi_mod - (4.1038775137557595)*phi_mod - (1.474546896425037) -
                (75.0109029802813)*eta*eta - (-140.7418581996851)*eta - (65.86999872541267));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0017344149580314128))/(0.0007422632634132623) -
                (-73.4875136637304)*phi_mod*phi_mod - (9.43680759385183)*phi_mod - (1.9291453808825108) -
                (-836.36901480981)*eta*eta - (2266.3772891560866)*eta - (-1534.7447868106783));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003589579453779862))/(0.0003008207854190116) -
                (-141.78423174885538)*phi_mod*phi_mod - (12.883415426522607)*phi_mod - (4.690138148141714) -
                (-244.50470982008457)*eta*eta - (717.9511210951657)*eta - (-523.7409877975725));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014270107174764307))/(0.0006913347084636217) -
                (325.94209547188854)*phi_mod*phi_mod - (-29.410375801775142)*phi_mod - (-9.14317368123537) -
                (519.3951535330845)*eta*eta - (-1426.2940258625972)*eta - (978.5217964639189));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003365948903883216))/(0.00024763656023678743) -
                (689.6624167455506)*phi_mod*phi_mod - (-61.77457657171193)*phi_mod - (-19.60946040579939) -
                (333.25726986912076)*eta*eta - (-955.6607538033986)*eta - (683.1838928846739));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006839039364056561))/(0.0012042589706396586) -
                (-60.496479031943515)*phi_mod*phi_mod - (4.194932653558764)*phi_mod - (1.7937567334651143) -
                (-161.93952398155477)*eta*eta - (431.78696662285745)*eta - (-287.9836061095412));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01316636163221663))/(0.0016549830903509876) -
                (167.63150489437933)*phi_mod*phi_mod - (-10.377082317348393)*phi_mod - (-5.323979955239592) -
                (22.77428645140843)*eta*eta - (-58.9891605233134)*eta - (38.6636656778475));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00459388765227465))/(0.00015933155204528242) -
                (37.492873608093916)*phi_mod*phi_mod - (-4.587431454215482)*phi_mod - (-2.599758683610419) -
                (632.2453971328093)*eta*eta - (-1614.4052385153618)*eta - (1026.386640868123));}

    else if (seg_combination_id == 232015 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0003788809477957801))/(0.0006039618851737315) -
                (55.708220541781344)*phi_mod*phi_mod - (-5.553763450038722)*phi_mod - (-2.2773573266201614) -
                (-1142.8072922314748)*eta*eta - (3120.0531098683336)*eta - (-2128.68450490755));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007890868894979064))/(-0.003008304276083091) -
                (-21.306031940418926)*phi_mod*phi_mod - (11.763175891736331)*phi_mod - (1.8520267928354992) -
                (94.86473429386403)*eta*eta - (-111.24281346999031)*eta - (32.50227684671996));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010357699132271695))/(0.003006397715709918) -
                (-115.03986568421116)*phi_mod*phi_mod - (2.7929398142445154)*phi_mod - (1.1124285251853587) -
                (13.193152637378857)*eta*eta - (-22.087873146427366)*eta - (8.141044192126955));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008395860877046926))/(-0.0030411093306743488) -
                (-102.35269604069894)*phi_mod*phi_mod - (-1.5202577056625082)*phi_mod - (0.934531225933673) -
                (72.65470677404849)*eta*eta - (-88.16628146986443)*eta - (26.512773284107148));}

    else if (seg_combination_id == 50313 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01027309068084394))/(0.002991935501839498) -
                (-8.246486455482422)*phi_mod*phi_mod - (-15.533011644033346)*phi_mod - (2.13072517667017) -
                (71.12727240025653)*eta*eta - (-83.18253009532512)*eta - (24.231732621555704));}

    else if (seg_combination_id == 110902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0024528620550837753))/(-0.0010367563995376838) -
                (415.8049711133481)*phi_mod*phi_mod - (21.83657624806642)*phi_mod - (-2.8095564231363284) -
                (67.90742657597922)*eta*eta - (-91.34497876631298)*eta - (30.4185768109536));}

    else if (seg_combination_id == 110902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003993615615082476))/(0.0010261282023689463) -
                (345.9651331537273)*phi_mod*phi_mod - (-16.254137366226015)*phi_mod - (-2.2086729188197967) -
                (-4.40338776295289)*eta*eta - (8.416315368240035)*eta - (-3.271101781792234));}

    else if (seg_combination_id == 110902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0027074933650514193))/(-0.0010250228203105604) -
                (423.49851831470176)*phi_mod*phi_mod - (17.232299127125497)*phi_mod - (-2.53084381181295) -
                (-150.52454041382254)*eta*eta - (161.5740903951853)*eta - (-42.763046203564315));}

    else if (seg_combination_id == 110902 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003992390110043125))/(0.0010164055453739732) -
                (328.99102672947737)*phi_mod*phi_mod - (-22.991580185162796)*phi_mod - (-1.7044102868296782) -
                (-128.197780022895)*eta*eta - (147.28904328296565)*eta - (-42.15816445308751));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007347281832932428))/(-0.0007347727994400422) -
                (-15.50477761787406)*phi_mod*phi_mod - (0.6205151828214651)*phi_mod - (0.09286950677669689) -
                (-51.504996192179014)*eta*eta - (-210.90360993282874)*eta - (-215.84544588713473));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013420720263953155))/(0.0010299250338860846) -
                (313.654440792317)*phi_mod*phi_mod - (2.9563866347617425)*phi_mod - (-1.407578715035202) -
                (-745.2010949106149)*eta*eta - (-3024.5066384907323)*eta - (-3066.8227222253986));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004049937764534723))/(-0.0007191859215266695) -
                (-108.59160232623283)*phi_mod*phi_mod - (3.9693452253804637)*phi_mod - (0.743668023984658) -
                (-1699.614176409678)*eta*eta - (-6863.827847744192)*eta - (-6929.568264378857));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00010323707858684905))/(-0.0007096524216410335) -
                (-20.620532078053323)*phi_mod*phi_mod - (-1.30274772708042)*phi_mod - (0.17812421524493077) -
                (-164.19248469298927)*eta*eta - (-647.7605772639763)*eta - (-638.5170713083884));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009548427553220174))/(0.0009443000147634154) -
                (90.99323216172952)*phi_mod*phi_mod - (1.4638169937282217)*phi_mod - (1.148935808608316) -
                (866.2143120094405)*eta*eta - (3386.260733687168)*eta - (3308.6845973507175));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005695307275720769))/(-0.0007221769000266545) -
                (-0.8608666346731121)*phi_mod*phi_mod - (-3.729458102063518)*phi_mod - (0.07557733228441241) -
                (501.5224794703868)*eta*eta - (2019.2405175758115)*eta - (2032.490805269052));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012109147624397826))/(0.0010504416718632938) -
                (154.80986359078625)*phi_mod*phi_mod - (-1.7110153562691688)*phi_mod - (-0.5287594293428716) -
                (-160.1369648492321)*eta*eta - (-646.4050327643334)*eta - (-651.8043570919368));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-6.168189416697654e-05))/(-0.0007013740386719564) -
                (-29.658848749349676)*phi_mod*phi_mod - (0.07640828399439992)*phi_mod - (0.1789174229139401) -
                (-936.4467102699276)*eta*eta - (-3781.660546647495)*eta - (-3817.755578195624));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006189407025442259))/(0.0008746533273461987) -
                (87.88336724527619)*phi_mod*phi_mod - (1.3596833676193627)*phi_mod - (-0.3982978885258014) -
                (-691.1685351545262)*eta*eta - (-2788.977979878838)*eta - (-2812.568207166391));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00023218639659397012))/(-0.0006999481869808214) -
                (-15.987737144393522)*phi_mod*phi_mod - (-1.8950049978913552)*phi_mod - (0.09470613253313542) -
                (-436.0847264975387)*eta*eta - (-1754.8414961151593)*eta - (-1765.417426921335));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010952071807135274))/(0.0009709453130937283) -
                (183.95205046345222)*phi_mod*phi_mod - (2.033455047376663)*phi_mod - (0.3060240203395317) -
                (-136.01781675544353)*eta*eta - (-570.3944941027189)*eta - (-595.4784117368625));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00020733408117181234))/(-0.000702230302601629) -
                (-16.455473679423537)*phi_mod*phi_mod - (1.9028554470106736)*phi_mod - (0.0402472495099837) -
                (405.0657628174589)*eta*eta - (1643.403324615048)*eta - (1666.8127134102958));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01714578657449623))/(0.0012006848831688417) -
                (47.22472231980985)*phi_mod*phi_mod - (4.9728973606484415)*phi_mod - (-0.015476412167956682) -
                (-189.79798908474856)*eta*eta - (-803.6680332074227)*eta - (-847.5740530073184));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004842686553695605))/(-0.0007210648399522642) -
                (-28.302735737684344)*phi_mod*phi_mod - (2.1439723394132093)*phi_mod - (0.1602197476590112) -
                (143.1817631702186)*eta*eta - (574.5510730265623)*eta - (576.3505307215385));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012205702486646153))/(0.0010289197011147657) -
                (68.68205150905)*phi_mod*phi_mod - (2.3291979379692016)*phi_mod - (0.02694680953360548) -
                (-19.071731928824885)*eta*eta - (-102.66426367380883)*eta - (-127.8860439755345));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004920334399752173))/(-0.0018025313693523146) -
                (-136.68628754687182)*phi_mod*phi_mod - (-5.777643078188822)*phi_mod - (2.9551806783351986) -
                (389.09983690778046)*eta*eta - (719.8327829976453)*eta - (332.75601970162364));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00197741041298716))/(0.001824164830262683) -
                (-97.50134795062641)*phi_mod*phi_mod - (5.6828062256993235)*phi_mod - (1.7870269425390004) -
                (-669.904819527174)*eta*eta - (-1280.2876646599223)*eta - (-611.6421884526058));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0045958834807032735))/(-0.0017996553281438845) -
                (-143.60709445773327)*phi_mod*phi_mod - (-6.188745872061138)*phi_mod - (2.998518405937542) -
                (-306.0294209288212)*eta*eta - (-593.3145813551268)*eta - (-287.36178750465115));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0026053396534038466))/(0.0018550360487956366) -
                (-95.83419188867973)*phi_mod*phi_mod - (5.7322619139899285)*phi_mod - (1.7177761040661106) -
                (-460.8964513209969)*eta*eta - (-882.8465968393174)*eta - (-422.72609133051566));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004599797878268407))/(-0.0017952484875710076) -
                (-144.14004547648716)*phi_mod*phi_mod - (-5.821196049804797)*phi_mod - (3.0948786473832914) -
                (-59.26561180027691)*eta*eta - (-127.49960958382755)*eta - (-67.51465927891385));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00231955486597238))/(0.0018391319446514033) -
                (-99.94153409322658)*phi_mod*phi_mod - (4.3724935263364575)*phi_mod - (1.8294200777835643) -
                (-301.4982587617092)*eta*eta - (-579.2621761718871)*eta - (-278.1694870779043));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034088025769510957))/(-0.0017654354182133427) -
                (-145.0985753773541)*phi_mod*phi_mod - (-3.9391249221850106)*phi_mod - (3.0269735250020307) -
                (-636.4798860777655)*eta*eta - (-1219.4434475123776)*eta - (-583.9724864056893));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002835533415672601))/(0.0018659753526257983) -
                (-102.85426851905844)*phi_mod*phi_mod - (2.2681127904222724)*phi_mod - (1.8890793217421868) -
                (-16.006678567357497)*eta*eta - (-29.58494353545801)*eta - (-13.637369985687544));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005087872104271612))/(-0.0018205935859915976) -
                (-138.41187522387992)*phi_mod*phi_mod - (-6.671065917255978)*phi_mod - (2.9376942700965216) -
                (-783.7544418154215)*eta*eta - (-1497.9463447072735)*eta - (-715.5877876226546));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003007742692395824))/(0.001885197513155723) -
                (-107.11846593749422)*phi_mod*phi_mod - (6.352047810341213)*phi_mod - (1.9769113077292781) -
                (-236.62821168938083)*eta*eta - (-450.8333123081399)*eta - (-214.67520353039123));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.02036076931799571))/(1.719573776459797e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (1.9966255238239227e-05))/(0.0007037557213486099) -
                (299.55658974289923)*phi_mod*phi_mod - (-14.690650937115038)*phi_mod - (-5.966747801277631) -
                (-56.04250188240197)*eta*eta - (233.85405907962243)*eta - (-243.51474965204605));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.015293161696974557))/(-0.0014783829940412992) -
                (-173.2231715373253)*phi_mod*phi_mod - (7.57452287100878)*phi_mod - (3.0583385223713506) -
                (354.40891328962374)*eta*eta - (-1528.4371983050316)*eta - (1646.5668912215838));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.007239662583279584))/(0.0006456049860305193) -
                (-461.21508593413773)*phi_mod*phi_mod - (-10.689045961139595)*phi_mod - (7.3670963785050025) -
                (8903.152639289447)*eta*eta - (-37476.30244056527)*eta - (39436.2510174665));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007012714899819175))/(-0.001052021513577013) -
                (-70.29097494823253)*phi_mod*phi_mod - (-1.449384786206108)*phi_mod - (1.1335708228018933) -
                (-147.06689411516922)*eta*eta - (644.2285011617525)*eta - (-703.6083302974723));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0063478289897800156))/(0.0006026901735508736) -
                (-209.3741561492118)*phi_mod*phi_mod - (5.750911361601558)*phi_mod - (5.588622381223898) -
                (-588.7869791929468)*eta*eta - (2519.7957700776537)*eta - (-2695.736954088674));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0047067124509911976))/(-0.00114030725522288) -
                (-10.307594079137539)*phi_mod*phi_mod - (11.952104492428854)*phi_mod - (-2.1607985841214576) -
                (-171.26758732558233)*eta*eta - (751.0638801375347)*eta - (-822.0319313392877));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003152418371687864))/(0.0009319224974905901) -
                (20.88444083652191)*phi_mod*phi_mod - (-12.073275696624751)*phi_mod - (-4.011226711744304) -
                (345.1945682136144)*eta*eta - (-1478.8867674701692)*eta - (1582.2514036296986));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013797509652728826))/(-0.0006098933765460251) -
                (-89.82068924052602)*phi_mod*phi_mod - (-1.7010932647580823)*phi_mod - (-0.1632914308746061) -
                (38.290748178789016)*eta*eta - (-170.35737840169713)*eta - (187.86702394479238));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002665830432533121))/(0.0007387512177572608) -
                (252.67459243068163)*phi_mod*phi_mod - (-34.029424380472605)*phi_mod - (-5.545710551963797) -
                (69.3276250436237)*eta*eta - (-287.67895403620645)*eta - (297.2206670186269));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00826433147181018))/(-0.0010631979761069879) -
                (-39.86336343789072)*phi_mod*phi_mod - (-8.886313149450395)*phi_mod - (-0.9704386793011046) -
                (-92.7719109942555)*eta*eta - (408.8597499969527)*eta - (-449.99145495007355));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006267384671970713))/(-0.00016768635646422124) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.001840612119353717))/(0.0007928311107302707) -
                (-19.918667786267438)*phi_mod*phi_mod - (-10.967735357028658)*phi_mod - (-3.047131587911549) -
                (-92.61266653359974)*eta*eta - (406.12430554550457)*eta - (-444.3753029954692));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012119070424449774))/(-0.0007154947157583223) -
                (-142.3026406938488)*phi_mod*phi_mod - (0.28602834024075685)*phi_mod - (0.33476915696912835) -
                (24.08399980649317)*eta*eta - (-99.78967582918592)*eta - (101.90942754784469));}

    else if (seg_combination_id == 232034 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.017254655664309986))/(9.337990511413967e-05) -
                (1536.3828123094136)*phi_mod*phi_mod - (18.87397170893008)*phi_mod - (-16.674877192328132) -
                (-71.26352994213931)*eta*eta - (297.09845529902265)*eta - (-309.4017819229114));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010365756782394703))/(-0.0028836806200750248) -
                (-27.5968739016787)*phi_mod*phi_mod - (15.200892610574595)*phi_mod - (2.686619521300296) -
                (601.7399914812095)*eta*eta - (722.4520793044037)*eta - (216.8668451843162));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007180738224301685))/(0.0028686186613052075) -
                (-103.38495063185299)*phi_mod*phi_mod - (1.5663178482829576)*phi_mod - (1.1412538997076227) -
                (-149.68631173491622)*eta*eta - (-175.43053870986873)*eta - (-51.13640797784805));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009708034907873978))/(-0.0028932033624215242) -
                (-96.21994519429576)*phi_mod*phi_mod - (-4.724112548503947)*phi_mod - (1.3284198354780077) -
                (243.86837893995187)*eta*eta - (294.35716478893806)*eta - (88.84954711790142));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007329009261493255))/(0.0028920118475610564) -
                (15.462311231906602)*phi_mod*phi_mod - (-22.435288078183913)*phi_mod - (2.83437695018913) -
                (3.483781802066261)*eta*eta - (5.629400209885516)*eta - (2.242022415083739));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01749677583589207))/(-0.001597959450321671) -
                (-362.0593917068379)*phi_mod*phi_mod - (-7.958612459787192)*phi_mod - (-0.5734756893402979) -
                (9.058981090917444)*eta*eta - (-37.07359092811184)*eta - (34.807051240053326));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01787056719704329))/(0.0017873212637374359) -
                (-272.2455884259886)*phi_mod*phi_mod - (8.71442778969438)*phi_mod - (-0.45437438798890256) -
                (-1.7085690811849834)*eta*eta - (15.000368811671969)*eta - (-19.718320965940347));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.018606349138560845))/(-0.0016179652875353738) -
                (-405.1417451155015)*phi_mod*phi_mod - (-13.27970411255144)*phi_mod - (-0.023006124040297567) -
                (-32.46789729517726)*eta*eta - (94.005670120509)*eta - (-68.60732498389268));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019976677221279045))/(0.0017704079077897005) -
                (-286.17893800276323)*phi_mod*phi_mod - (4.691457921328363)*phi_mod - (-0.3009839766693299) -
                (131.4249563645931)*eta*eta - (-395.0279504427146)*eta - (295.9615043320345));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.014200794191966848))/(-0.0016751487163825301) -
                (-392.8404366833774)*phi_mod*phi_mod - (-11.813287027271299)*phi_mod - (-0.390851689241388) -
                (-268.84315110680546)*eta*eta - (829.2119331238856)*eta - (-640.2738682564593));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014307856267098911))/(0.001930287721928642) -
                (-308.77139477346145)*phi_mod*phi_mod - (9.207523887623742)*phi_mod - (-0.4427076395547387) -
                (-396.6545089869474)*eta*eta - (1233.1605029230152)*eta - (-959.089391798085));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01717196952132744))/(-0.0016493922125069215) -
                (-371.52374002560197)*phi_mod*phi_mod - (-11.3050677614944)*phi_mod - (-0.6039947544899064) -
                (7.3778552449072174)*eta*eta - (-32.47688853046242)*eta - (31.81577685957658));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.012714666210491839))/(0.0020210499961143616) -
                (-312.6583691755515)*phi_mod*phi_mod - (8.01313935518618)*phi_mod - (-0.48414256665547656) -
                (-2.8340753691624903)*eta*eta - (24.691001849995484)*eta - (-32.117879777634144));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.017997035355922487))/(-0.0015986465729846489) -
                (-423.951340187542)*phi_mod*phi_mod - (-10.373811977050583)*phi_mod - (-0.12014688657176326) -
                (125.21519844379385)*eta*eta - (-402.8103472766027)*eta - (322.5728069620296));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01842474329942957))/(0.0017370818199394567) -
                (-302.96458390347397)*phi_mod*phi_mod - (6.161652287674412)*phi_mod - (-0.14431396258951923) -
                (274.6934644212049)*eta*eta - (-837.7344131523154)*eta - (637.9118462223138));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01876267590525872))/(-0.0015737477420830928) -
                (-263.11252311034514)*phi_mod*phi_mod - (-7.5179916915065865)*phi_mod - (-0.9836379080389122) -
                (65.36272868217848)*eta*eta - (-206.0018127698508)*eta - (161.47254946241986));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01744663575902659))/(0.001790755754268037) -
                (-231.1908998231185)*phi_mod*phi_mod - (6.481923843980528)*phi_mod - (-0.8036072957271014) -
                (81.39436526861854)*eta*eta - (-232.96053042675914)*eta - (165.03833989152952));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.017735225556357228))/(-0.0015561126430372891) -
                (-288.2918556076302)*phi_mod*phi_mod - (-6.117364089133652)*phi_mod - (-0.5642489832273486) -
                (-117.05192319114893)*eta*eta - (360.14274780392435)*eta - (-277.71358767085866));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.018398319233723388))/(0.0017623619219221535) -
                (-207.86244824391798)*phi_mod*phi_mod - (9.705595745305319)*phi_mod - (-0.6603242313268882) -
                (-107.82372891079184)*eta*eta - (345.06495904261226)*eta - (-276.2236907705185));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.016128126947534856))/(-0.0016436092677203215) -
                (-432.9086127896094)*phi_mod*phi_mod - (-11.426505460217179)*phi_mod - (-0.048014843095788844) -
                (1.1698178877905419)*eta*eta - (-14.073287306903893)*eta - (17.972407537995164));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.019738771124126142))/(0.0017356276773865123) -
                (-296.20262565673124)*phi_mod*phi_mod - (10.791022776974787)*phi_mod - (-0.19030607696950405) -
                (281.2954054839444)*eta*eta - (-858.673141980875)*eta - (654.6024412796813));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00020031366979829046))/(-0.0006512791138049897) -
                (-36.298459218965256)*phi_mod*phi_mod - (1.6088079179237955)*phi_mod - (0.5369541742812002) -
                (-108.58805719277157)*eta*eta - (-426.37222834130836)*eta - (-418.1630293346956));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01816827551757234))/(-0.0004541840948935319) -
                (-257.13468341567136)*phi_mod*phi_mod - (23.040304044007154)*phi_mod - (4.164670456379153) -
                (-21.707727658894832)*eta*eta - (-37.912508694156706)*eta - (9.518136784595677));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00032274204696623325))/(-0.0006822577483012789) -
                (-30.901092753830564)*phi_mod*phi_mod - (-0.7085821887778108)*phi_mod - (0.4593891947732442) -
                (-30.06774009039286)*eta*eta - (-116.49293935720672)*eta - (-112.42737179700516));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0043206538220435554))/(2.2480437801051964e-05) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00012319000785702142))/(-0.0006493019297270563) -
                (-30.54259167828489)*phi_mod*phi_mod - (2.619179976526605)*phi_mod - (0.7712329510703722) -
                (-123.06224132586176)*eta*eta - (-480.89076972069023)*eta - (-469.18687822486055));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.009227884216446085))/(-0.00018619892042259263) -
                (-731.9952921053954)*phi_mod*phi_mod - (110.72383480920188)*phi_mod - (3.9399605312940595) -
                (402.0186022382286)*eta*eta - (1679.0229129854617)*eta - (1745.9801119758713));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007239080886433069))/(-0.0007076918306215155) -
                (-69.92375557704104)*phi_mod*phi_mod - (2.0586471582357193)*phi_mod - (0.787469123888595) -
                (-41.94016570445604)*eta*eta - (-165.14939047924264)*eta - (-162.30048712644518));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.006717941742347531))/(-0.00012780775717314134) -
                (-1397.4160812890534)*phi_mod*phi_mod - (-27.35970319891384)*phi_mod - (8.134520673624733) -
                (-134.29884133344552)*eta*eta - (-574.4471057036127)*eta - (-609.0863166205285));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0011505192579712574))/(-0.0005910072956699802) -
                (-52.70360007121609)*phi_mod*phi_mod - (2.9691011798378404)*phi_mod - (0.5054439182698849) -
                (-130.72027106932828)*eta*eta - (-499.2110162816803)*eta - (-475.07686752489366));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00948263624354264))/(-0.00025733878932756324) -
                (-487.03478393322007)*phi_mod*phi_mod - (16.164686325823965)*phi_mod - (2.597481983185484) -
                (-14902.314352060766)*eta*eta - (-58175.84275458734)*eta - (-56774.85416944147));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0028699629126486114))/(-0.0005370141467121297) -
                (-72.30030870770861)*phi_mod*phi_mod - (5.731866259546128)*phi_mod - (-0.9482963432067838) -
                (639.5263621235426)*eta*eta - (2628.723468408757)*eta - (2699.727731783282));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.012102468501213161))/(-0.000233524648470615) -
                (1990.5882352941314)*phi_mod*phi_mod - (53.3529411764713)*phi_mod - (-9.95215441176473) -
                (21199.486960491042)*eta*eta - (82878.84124925091)*eta - (81003.27878907986));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00017292886804935983))/(-0.0006456640359203047) -
                (-36.08936777318335)*phi_mod*phi_mod - (2.245580811826293)*phi_mod - (0.4361772125446826) -
                (-69.37744337033304)*eta*eta - (-273.8197258523545)*eta - (-269.91678268474266));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.011844511594621247))/(-0.00021882743157659634) -
                (-239.80249561845625)*phi_mod*phi_mod - (54.93578116876976)*phi_mod - (2.2484109571375837) -
                (-7673.6849533022605)*eta*eta - (-29601.63443633682)*eta - (-28545.22728729806));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-1.965922417940611e-05))/(-0.0006662582492778473) -
                (-17.48064713893847)*phi_mod*phi_mod - (1.3069171016243897)*phi_mod - (0.152450120011612) -
                (52.83464679912691)*eta*eta - (220.10617376290313)*eta - (229.03011958869808));}

    else if (seg_combination_id == 232033 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.01679521641816922))/(-0.0004248835977475155) -
                (-355.01990580205205)*phi_mod*phi_mod - (45.33135653756276)*phi_mod - (2.5968805409269384) -
                (-26399.816575456414)*eta*eta - (-103097.28382841786)*eta - (-100652.63094314099));}

    else if (seg_combination_id == 110902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004209319173778628))/(-0.00032496169982764947) -
                (64.54731571698468)*phi_mod*phi_mod - (-31.091059060137326)*phi_mod - (-3.8480893550626667) -
                (-3582.3804480506233)*eta*eta - (-1762.084067759747)*eta - (-216.05260424330166));}

    else if (seg_combination_id == 110902 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004627207313521089))/(-0.00033071707795967454) -
                (337.70428084025696)*phi_mod*phi_mod - (40.494618455795994)*phi_mod - (-1.5476110015034796) -
                (182.59097376774122)*eta*eta - (99.72567447327336)*eta - (13.484360497908556));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0013766148124091265))/(-0.0018406345058916214) -
                (-59.95047717491765)*phi_mod*phi_mod - (-1.359666457827126)*phi_mod - (1.3081675592558004) -
                (-870.5227110251752)*eta*eta - (1455.613763823051)*eta - (-608.4250218669225));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005873291462859702))/(0.0019858536520930914) -
                (-77.6975920866235)*phi_mod*phi_mod - (5.194714023451186)*phi_mod - (1.1669115237864724) -
                (24.64982112936726)*eta*eta - (-31.454722609718285)*eta - (9.182490724645294));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0018758596037963073))/(-0.001864720776245145) -
                (-61.668746826808245)*phi_mod*phi_mod - (-3.3773967034062355)*phi_mod - (1.6166430266381766) -
                (-531.0965703206733)*eta*eta - (884.3695813119693)*eta - (-368.085285631883));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005276394568837083))/(0.0019498920540787132) -
                (-79.97928875766988)*phi_mod*phi_mod - (4.821803686838382)*phi_mod - (1.360491723729827) -
                (-718.6925753660289)*eta*eta - (1200.270306112715)*eta - (-500.98753483622545));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009277548792048904))/(-0.001860408941981321) -
                (-53.3486588219014)*phi_mod*phi_mod - (-2.272112669517151)*phi_mod - (1.104384892161117) -
                (-1224.1193845028981)*eta*eta - (2041.5727813407118)*eta - (-851.1028775188196));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00470009546571037))/(0.0019312563733957914) -
                (-70.97441769425077)*phi_mod*phi_mod - (4.056798393019948)*phi_mod - (1.2684493539087542) -
                (-721.4926954785393)*eta*eta - (1203.406242267499)*eta - (-501.6481974955395));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012167314908369785))/(-0.0018436908572815572) -
                (-61.68106206952061)*phi_mod*phi_mod - (-3.2835144509560696)*phi_mod - (1.5324802440740646) -
                (-24.261763514230523)*eta*eta - (33.89232039429103)*eta - (-11.36565780341374));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005544246421179766))/(0.001970007160270188) -
                (-84.56198773394931)*phi_mod*phi_mod - (3.9030881043676042)*phi_mod - (1.443000515250563) -
                (-337.8575576592163)*eta*eta - (573.7029710392782)*eta - (-243.3088966272613));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006403544746470283))/(-0.0017984146660775606) -
                (-79.60657956182084)*phi_mod*phi_mod - (-3.4718264849412255)*phi_mod - (2.2818367986766015) -
                (-669.8100345408674)*eta*eta - (1101.976601244612)*eta - (-453.0743027818795));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005503606432304318))/(0.001937560688020245) -
                (-79.11983933709936)*phi_mod*phi_mod - (4.584204939365072)*phi_mod - (1.5135378456910793) -
                (121.35342219679863)*eta*eta - (-192.4004699612657)*eta - (76.14922046919182));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.021301953646689232))/(-0.0052697118489843835) -
                (-129.1993287727158)*phi_mod*phi_mod - (0.8898607193066514)*phi_mod - (1.1952469582215912) -
                (294.20173015022334)*eta*eta - (397.19989135484684)*eta - (133.86014148098695));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013655167759250046))/(0.005106775547440751) -
                (35.844423331175356)*phi_mod*phi_mod - (-30.934185854625294)*phi_mod - (3.6419355339758686) -
                (-60.507951117507695)*eta*eta - (-76.53745095177318)*eta - (-24.01550836330076));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.020726256461044236))/(-0.005207291575607905) -
                (36.737242092410405)*phi_mod*phi_mod - (31.797813290637333)*phi_mod - (3.542156546759633) -
                (98.64223074526514)*eta*eta - (138.90954298729386)*eta - (48.80899233204451));}

    else if (seg_combination_id == 50308 && eta_inner == -4 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.015017885813399369))/(0.0051402413340117924) -
                (-97.5672577279038)*phi_mod*phi_mod - (5.887882738824791)*phi_mod - (1.4778558705316378) -
                (-10.980184953520654)*eta*eta - (-2.566986579354623)*eta - (3.371730882610905));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0021754232132304633))/(-0.0010106463635139243) -
                (164.40588966918392)*phi_mod*phi_mod - (10.680881386480284)*phi_mod - (-0.8210184947288268) -
                (-2220.1967100150964)*eta*eta - (2750.5652100369043)*eta - (-851.7345783271413));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0012565126745665558))/(-0.0007501376582242673) -
                (387.1553057491646)*phi_mod*phi_mod - (40.44864724091013)*phi_mod - (-1.1090718032405584) -
                (-80.31464409943004)*eta*eta - (19.153808161249685)*eta - (18.79238242028539));}

    else if (seg_combination_id == 60402 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010316336617882638))/(-0.0008649071272877331) -
                (204.3773016387781)*phi_mod*phi_mod - (16.53729599297908)*phi_mod - (-0.5840848043068845) -
                (-3209.9380675044863)*eta*eta - (3911.6677454245014)*eta - (-1191.1926579375227));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01362867136403772))/(-0.0052969327144977915) -
                (-193.62208287424673)*phi_mod*phi_mod - (8.076972871859937)*phi_mod - (0.7945906526624932) -
                (19.613700975090886)*eta*eta - (-33.8073750811928)*eta - (12.813376313075926));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018809061142951628))/(0.0053604430454233165) -
                (-15.402448591523806)*phi_mod*phi_mod - (-18.113981875515595)*phi_mod - (2.6038322179773625) -
                (-41.85985885802976)*eta*eta - (36.82338408863803)*eta - (-7.4209630554112795));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01150432616512287))/(-0.005233830409278245) -
                (-33.96650265546449)*phi_mod*phi_mod - (13.91417953469065)*phi_mod - (2.4786047633825015) -
                (78.1761256014748)*eta*eta - (-94.04333091627845)*eta - (28.20696098707331));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.018178465783075685))/(0.005311205084269819) -
                (-202.14577315660893)*phi_mod*phi_mod - (-7.291487161668979)*phi_mod - (0.7812734630694086) -
                (-27.059570162945516)*eta*eta - (20.25139708389159)*eta - (-2.847903535123171));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004517530146058622))/(-0.002168656002727832) -
                (-92.01358451522425)*phi_mod*phi_mod - (-5.357317252050088)*phi_mod - (1.3848487740684532) -
                (-17.908750614997153)*eta*eta - (18.791351077815566)*eta - (-3.954259553721685));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006681272532655072))/(0.0021616971501252896) -
                (-100.45989967825665)*phi_mod*phi_mod - (4.909959801080308)*phi_mod - (1.403909014020875) -
                (-70.64389646606746)*eta*eta - (96.86382896689449)*eta - (-32.969274212905795));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004733303984619383))/(-0.0021799225927604565) -
                (-88.66593439817879)*phi_mod*phi_mod - (-4.865531122865059)*phi_mod - (1.330312012954778) -
                (13.336372100884839)*eta*eta - (-26.917266675783345)*eta - (12.745581824836705));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0067945270824918335))/(0.002167802015361254) -
                (-101.75596618546919)*phi_mod*phi_mod - (5.647662312398424)*phi_mod - (1.3664741882737592) -
                (-57.68257718050101)*eta*eta - (77.79931357837964)*eta - (-25.936384211717993));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004507453635637398))/(-0.002175358457524207) -
                (-87.0758317520858)*phi_mod*phi_mod - (-5.207952505526132)*phi_mod - (1.294664847247579) -
                (13.808398529055008)*eta*eta - (-27.556588999479573)*eta - (12.969988314985693));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006702073373561734))/(0.0021731869472058746) -
                (-99.57149475095784)*phi_mod*phi_mod - (4.909626331540979)*phi_mod - (1.3485721264196386) -
                (-49.63037544880664)*eta*eta - (65.09117438672006)*eta - (-20.958553317054967));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004733398124856808))/(-0.0021764415026729487) -
                (-93.45211506591099)*phi_mod*phi_mod - (-6.094852771466774)*phi_mod - (1.3558619888142138) -
                (22.346024404833855)*eta*eta - (-40.4316764998703)*eta - (17.797825616364694));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007013956465125748))/(0.002182763936173523) -
                (-104.30870394720147)*phi_mod*phi_mod - (4.750170692737884)*phi_mod - (1.4550616559691578) -
                (-66.34811987185638)*eta*eta - (89.76674915423808)*eta - (-30.060646733395743));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0052335043348019925))/(-0.002191478315652652) -
                (-95.7007168240388)*phi_mod*phi_mod - (-4.760528491554349)*phi_mod - (1.5114896078205733) -
                (17.943647813758176)*eta*eta - (-34.41725525609144)*eta - (15.792890806354565));}

    else if (seg_combination_id == 50301 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007000750322207889))/(0.0021572087834590835) -
                (-101.65262393840212)*phi_mod*phi_mod - (5.17466989568338)*phi_mod - (1.4574388771793667) -
                (-61.69535523479026)*eta*eta - (81.53761905709499)*eta - (-26.51354186926447));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001526061831452515))/(-0.0006649091706975402) -
                (-101.58074352219275)*phi_mod*phi_mod - (4.369325835802655)*phi_mod - (4.368862280430058) -
                (-267.88493929308095)*eta*eta - (-838.5759512084531)*eta - (-656.2275541082481));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.001060681565684446))/(-0.0006836053545590939) -
                (7.509140878311996)*phi_mod*phi_mod - (-0.9334928093961418)*phi_mod - (-0.7511681432241238) -
                (-891.8569400703336)*eta*eta - (-2842.648903809644)*eta - (-2265.1146969685174));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011690757348067824))/(-0.0007787286975199419) -
                (66.26309753843555)*phi_mod*phi_mod - (-2.2351877616728992)*phi_mod - (-3.0785848451099707) -
                (-265.499471531432)*eta*eta - (-833.0888081965255)*eta - (-653.5759061192932));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003981972754970918))/(-0.0006081357788421361) -
                (-35.38769790126745)*phi_mod*phi_mod - (0.7119176320636941)*phi_mod - (-0.2717028259506478) -
                (-993.1547964616591)*eta*eta - (-3074.6718789645465)*eta - (-2379.067852721418));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0033118218267310616))/(-0.000889909944225423) -
                (8.126266616166879)*phi_mod*phi_mod - (-0.15592851819099254)*phi_mod - (-1.0911649179106584) -
                (2426.921552419949)*eta*eta - (7595.234891965472)*eta - (5941.9296615525955));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004240374722551409))/(-0.0007133549184246309) -
                (12.389484310129719)*phi_mod*phi_mod - (-5.169246923232864)*phi_mod - (-0.4602764271240404) -
                (-1780.3316445556102)*eta*eta - (-5605.21438893178)*eta - (-4411.449165421404));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (3.751182909649143e-05))/(-0.000727802257481369) -
                (-47.47990030314314)*phi_mod*phi_mod - (2.587178665579329)*phi_mod - (2.0870661411156743) -
                (-26.05203988156933)*eta*eta - (-72.4875380588922)*eta - (-49.451322608199575));}

    else if (seg_combination_id == 221924 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00021785915232030157))/(-0.0007284076609345966) -
                (-47.31653267502434)*phi_mod*phi_mod - (3.354555275746839)*phi_mod - (1.9651065248762853) -
                (271.66046489400975)*eta*eta - (797.9865147262452)*eta - (582.550124674251));}

    else if (seg_combination_id == 110902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028964511193647624))/(-0.0009544944573986928) -
                (203.21981172617677)*phi_mod*phi_mod - (14.89460397292146)*phi_mod - (-0.7420322291965249) -
                (-247.20705102053336)*eta*eta - (395.46571110749284)*eta - (-157.65705045334786));}

    else if (seg_combination_id == 110902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0033813350178629013))/(-0.000991119294615804) -
                (144.11455604967475)*phi_mod*phi_mod - (12.86648229515436)*phi_mod - (-0.6801047916679887) -
                (-500.7104234115436)*eta*eta - (837.552163344631)*eta - (-350.0490861893815));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002860651293008474))/(-0.0008059640247170237) -
                (493.4193557789984)*phi_mod*phi_mod - (19.93732356327338)*phi_mod - (-2.5897529230740153) -
                (-147.73303514339528)*eta*eta - (-256.59128353312946)*eta - (-110.5840065082272));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012174976481421876))/(0.0008226929378903181) -
                (554.7305272191558)*phi_mod*phi_mod - (-25.907913960070474)*phi_mod - (-2.614971937351614) -
                (342.98007778391445)*eta*eta - (669.9998678793715)*eta - (326.9853209941762));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00305305161464672))/(-0.0008137172240412188) -
                (500.2693595473103)*phi_mod*phi_mod - (24.254271534622063)*phi_mod - (-2.4487797477744597) -
                (-146.93832004126938)*eta*eta - (-253.10920307336514)*eta - (-108.050285003135));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000904936319464125))/(0.0008179037228269618) -
                (563.4385009127302)*phi_mod*phi_mod - (-22.662317152665956)*phi_mod - (-2.8719123387932353) -
                (465.86706467342873)*eta*eta - (899.3020117812096)*eta - (433.8774100051029));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028260059763417604))/(-0.0008056642765073806) -
                (529.2507342084409)*phi_mod*phi_mod - (26.28672864274457)*phi_mod - (-2.63257152245185) -
                (-0.6873104611533618)*eta*eta - (17.7825844615524)*eta - (17.37794370496665));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009547709461171744))/(0.0008148677870469762) -
                (572.1778604740399)*phi_mod*phi_mod - (-21.93305487376631)*phi_mod - (-2.8536608909519163) -
                (694.7119318246354)*eta*eta - (1336.5491672882545)*eta - (642.720612010361));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002552887078171311))/(-0.0007657119695857304) -
                (660.9638379468045)*phi_mod*phi_mod - (25.726945200361587)*phi_mod - (-2.5205576871752844) -
                (695.3379627470581)*eta*eta - (1340.8266863111846)*eta - (646.3821082420676));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009706385299678951))/(0.0008032004545815561) -
                (549.2233918144053)*phi_mod*phi_mod - (-23.88452164265085)*phi_mod - (-2.455307800955382) -
                (332.5315099335575)*eta*eta - (651.9730762099364)*eta - (319.48443015161274));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0019375940418133362))/(-0.0007469878191502605) -
                (577.256053632788)*phi_mod*phi_mod - (18.399524420775652)*phi_mod - (-2.336678649224096) -
                (241.9550925332378)*eta*eta - (513.8128620144296)*eta - (269.9880503911081));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006995748069336645))/(0.0007886338839359128) -
                (546.5013824998488)*phi_mod*phi_mod - (-27.103100415537792)*phi_mod - (-2.439689148484675) -
                (-30.04258915200563)*eta*eta - (-40.42854658223463)*eta - (-11.0480085112204));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028922022786563115))/(-0.0007832444445287361) -
                (562.4897924847763)*phi_mod*phi_mod - (23.161901034785455)*phi_mod - (-2.380881308772371) -
                (-385.8151107934979)*eta*eta - (-704.8120095882215)*eta - (-321.1583340988422));}

    else if (seg_combination_id == 60402 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009823633276471691))/(0.0008072983690938506) -
                (509.866276391661)*phi_mod*phi_mod - (-25.425541772038827)*phi_mod - (-2.3689554796040215) -
                (244.50129593380146)*eta*eta - (477.1020438631359)*eta - (232.73685122077083));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0057859691767650585))/(-0.001987959472906028) -
                (-128.042334021773)*phi_mod*phi_mod - (-3.9885661051256966)*phi_mod - (2.2325526948504932) -
                (-1687.9339139646893)*eta*eta - (-3139.3927952200693)*eta - (-1459.5029496643785));}

    else if (seg_combination_id == 50301 && eta_inner == -6 &&
        eta_middle == -4 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0037494196714933587))/(0.002076780829856453) -
                (-87.70942456778094)*phi_mod*phi_mod - (4.1422493050311875)*phi_mod - (1.299871991594519) -
                (-33.775580688864196)*eta*eta - (-64.48170342264496)*eta - (-30.725622165643134));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0013227247851849324))/(0.0005971862091164295) -
                (-41.99261352887048)*phi_mod*phi_mod - (0.6701459635640721)*phi_mod - (0.5028949080523867) -
                (60.15655763032947)*eta*eta - (-200.75197295051785)*eta - (163.44242910072546));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0005191445029253344))/(0.0006474954051477423) -
                (-62.61033091655728)*phi_mod*phi_mod - (1.699457563840475)*phi_mod - (0.5281043672264016) -
                (-8.367723832245169)*eta*eta - (42.49633477524283)*eta - (-50.739295263793146));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002595661588404458))/(0.00048555373063524036) -
                (7.079375255082886)*phi_mod*phi_mod - (-1.2506695204511793)*phi_mod - (0.752583698816352) -
                (818.3586577810227)*eta*eta - (-3094.0246775168653)*eta - (2922.8041432467176));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003194110565617884))/(0.0004084432934053023) -
                (30.911608338413995)*phi_mod*phi_mod - (1.4775842174299838)*phi_mod - (-0.11607230631002673) -
                (-1010.1668491771682)*eta*eta - (3968.077890655385)*eta - (-3896.1151500847095));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0023477962130379255))/(0.0005107955738956766) -
                (6.401207884478287)*phi_mod*phi_mod - (-0.7763031537437471)*phi_mod - (0.2832632775441485) -
                (277.2466974340087)*eta*eta - (-1016.3459433206)*eta - (928.8235145268695));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0010580553374027206))/(0.0005983075290350026) -
                (-49.624598109158505)*phi_mod*phi_mod - (-1.0670428014859106)*phi_mod - (0.6090934783034447) -
                (64.65883810042811)*eta*eta - (-213.61585769264445)*eta - (171.62237210853107));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0009884182857259024))/(0.0006143744663237759) -
                (-49.14668490945829)*phi_mod*phi_mod - (0.6800236205646053)*phi_mod - (0.49300685800827443) -
                (47.98562721361847)*eta*eta - (-158.63341451302543)*eta - (127.49652270620686));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00011986252969831503))/(0.0006854146942932299) -
                (-74.5317670488403)*phi_mod*phi_mod - (3.0907163661953425)*phi_mod - (0.4152369483940789) -
                (-41.19057205057647)*eta*eta - (166.49140179208365)*eta - (-167.79559402754836));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004266205262235089))/(-0.0019863943536341548) -
                (-97.1177863126338)*phi_mod*phi_mod - (-6.133457387522888)*phi_mod - (1.6601329658965531) -
                (18.853438980443816)*eta*eta - (-49.689394708865954)*eta - (30.558952406706677));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013710271208731237))/(0.0022011722968817253) -
                (-157.30988015905896)*phi_mod*phi_mod - (5.429385840700568)*phi_mod - (3.0574202120364093) -
                (4701.112123268248)*eta*eta - (-8902.149480802702)*eta - (4213.9592086099265));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004958859237086366))/(-0.002044548722646532) -
                (-99.7242898235872)*phi_mod*phi_mod - (-5.554450775316165)*phi_mod - (1.6452710933742458) -
                (41.901897224164415)*eta*eta - (-91.44203171009393)*eta - (49.35035990864926));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.025674910117232545))/(0.0010656355668834442) -
                (-224.03557190104087)*phi_mod*phi_mod - (6.942834477943066)*phi_mod - (1.0786706946232116) -
                (616.384397862048)*eta*eta - (-1178.0380910550107)*eta - (563.0029229109764));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004978863050216466))/(-0.0020549661533123065) -
                (-98.16110856127112)*phi_mod*phi_mod - (-6.735314492717421)*phi_mod - (1.5271088104035435) -
                (92.42223363143346)*eta*eta - (-184.8219431935591)*eta - (92.35420367920852));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.013825518848882463))/(0.002373899620608483) -
                (-114.91169491532045)*phi_mod*phi_mod - (-0.2385752032841673)*phi_mod - (1.6123972005089526) -
                (-941.4777335918005)*eta*eta - (1815.553423773999)*eta - (-875.1444941644435));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004503140980119532))/(-0.0020087474300418185) -
                (-113.33674819218571)*phi_mod*phi_mod - (-7.331806446260328)*phi_mod - (1.8739493847773387) -
                (60.86693508804707)*eta*eta - (-130.40869139183866)*eta - (69.29209358474785));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.013765093448687024))/(0.0013818043335021243) -
                (-184.73334290953903)*phi_mod*phi_mod - (4.218817963951087)*phi_mod - (2.8325388699532676) -
                (-7724.405135772892)*eta*eta - (14686.024320525277)*eta - (-6979.895973512823));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.005423544823498694))/(-0.002039224217695946) -
                (-108.81570269244783)*phi_mod*phi_mod - (-6.432027563127395)*phi_mod - (1.9980178277153926) -
                (158.5795419855492)*eta*eta - (-313.55077735039254)*eta - (154.94887438731368));}

    else if (seg_combination_id == 50301 && eta_inner == 6 &&
        eta_middle == 6 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004870208783212971))/(0.0017145364545843335) -
                (-193.42984581338857)*phi_mod*phi_mod - (1.928086454884195)*phi_mod - (2.8535783850736944) -
                (302.4653993651717)*eta*eta - (-544.935656027754)*eta - (244.83892743536643));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.017720423308611365))/(-0.005760441226991028) -
                (-184.93614908295334)*phi_mod*phi_mod - (8.918802903981366)*phi_mod - (0.41900703425298474) -
                (-243.25511170546923)*eta*eta - (217.73844258190863)*eta - (-48.45090317220015));}

    else if (seg_combination_id == 50308 && eta_inner == 3 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.02619788966067826))/(-0.006470361646903438) -
                (63.8412247353586)*phi_mod*phi_mod - (31.39015786243197)*phi_mod - (2.972016372213858) -
                (1295.4299150242266)*eta*eta - (-1245.0681980391814)*eta - (299.0233960554723));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011005472338763964))/(-0.0006793933010503252) -
                (226.7428801256491)*phi_mod*phi_mod - (7.3298465000473785)*phi_mod - (-3.4792353191446233) -
                (154.86477407456778)*eta*eta - (-538.0344401378114)*eta - (467.31994449487553));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0009858070186616423))/(0.000727308754630777) -
                (233.21582215789556)*phi_mod*phi_mod - (-3.9563797607124926)*phi_mod - (-6.895199956778104) -
                (-1009.1786716326748)*eta*eta - (3430.9888386887387)*eta - (-2915.998391264106));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011418720755192718))/(-0.0006849899544071037) -
                (226.19500565819865)*phi_mod*phi_mod - (6.159923271679243)*phi_mod - (-3.5883659806314157) -
                (145.41523722598478)*eta*eta - (-505.49454486280075)*eta - (439.3207073740293));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0006977004624158985))/(0.0007309900176098209) -
                (248.7544847504938)*phi_mod*phi_mod - (-6.1018823117206775)*phi_mod - (-7.069253441328631) -
                (-406.9883445671626)*eta*eta - (1408.1284604112832)*eta - (-1217.2954539089842));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.001067783497793611))/(-0.0006832231846224283) -
                (239.86011218230786)*phi_mod*phi_mod - (5.792441643223501)*phi_mod - (-3.892028812996605) -
                (226.93325788204672)*eta*eta - (-791.698536602742)*eta - (690.4844170383582));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00047958714932006506))/(0.0007406586819285715) -
                (237.92546948676113)*phi_mod*phi_mod - (-5.434799501743826)*phi_mod - (-7.012147577818358) -
                (-698.0747772020594)*eta*eta - (2374.352880974115)*eta - (-2018.8445919168219));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011161621240543674))/(-0.0006828471774567576) -
                (237.0321332743238)*phi_mod*phi_mod - (7.132428478619473)*phi_mod - (-3.7543908154213748) -
                (232.3467473855814)*eta*eta - (-807.2589057551769)*eta - (701.1371405908285));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00041419178718367095))/(0.0007298981100509832) -
                (251.7475428025108)*phi_mod*phi_mod - (-4.904223927571318)*phi_mod - (-7.071289124306733) -
                (-857.8765933279572)*eta*eta - (2915.2595766072704)*eta - (-2476.4992510252123));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008282268925269187))/(-0.000670038771264441) -
                (244.03482040138064)*phi_mod*phi_mod - (4.715535462281082)*phi_mod - (-3.981117815413294) -
                (229.45305011159363)*eta*eta - (-805.609696066113)*eta - (707.1077265797934));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.001339208718701523))/(0.0006965688515822364) -
                (258.17199864814575)*phi_mod*phi_mod - (-7.2536991886704305)*phi_mod - (-7.294929931399679) -
                (-689.8486668087203)*eta*eta - (2365.9744340829516)*eta - (-2028.1445165880493));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010657125560137241))/(-0.0006723269266274636) -
                (232.52528759275546)*phi_mod*phi_mod - (4.169458405248414)*phi_mod - (-3.5338684958235773) -
                (161.908368104076)*eta*eta - (-564.5729351466392)*eta - (492.1886518072637));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0010138346309469153))/(0.0007220281299270069) -
                (242.2674582237009)*phi_mod*phi_mod - (-5.19909454769132)*phi_mod - (-7.21179803157843) -
                (-721.4148731777827)*eta*eta - (2454.426347772751)*eta - (-2087.5011944568146));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0010306018053198498))/(-0.0006729059646200996) -
                (232.1720430854005)*phi_mod*phi_mod - (7.353746227584305)*phi_mod - (-3.5660946013140786) -
                (198.48369446570226)*eta*eta - (-690.057733651473)*eta - (599.7555545699007));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0014939552724266792))/(0.0007055029982277965) -
                (237.20107494625154)*phi_mod*phi_mod - (-5.7170437605893305)*phi_mod - (-7.073743927887784) -
                (-617.5783203568595)*eta*eta - (2124.563388513803)*eta - (-1826.636792739981));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0011438204373294856))/(-0.0006820154059743672) -
                (218.51757627518114)*phi_mod*phi_mod - (6.6253041075801775)*phi_mod - (-3.410021844182153) -
                (193.60003152258568)*eta*eta - (-673.1636510306324)*eta - (585.1614552535775));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0004646414974510093))/(0.0007528201600809154) -
                (241.79099909753458)*phi_mod*phi_mod - (-5.928548632581631)*phi_mod - (-7.408501673871691) -
                (-249.45152106157826)*eta*eta - (855.6799090607282)*eta - (-733.6019682708653));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003030742494895988))/(-0.0010596703322681257) -
                (536.189697526261)*phi_mod*phi_mod - (22.55157778756866)*phi_mod - (-2.618073471389755) -
                (549.2462107787321)*eta*eta - (-680.1547451527234)*eta - (210.61499401767938));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004412008007510026))/(0.00105435074646625) -
                (302.1463189318372)*phi_mod*phi_mod - (-19.57323033050112)*phi_mod - (-1.4921518739182063) -
                (-234.32397631453955)*eta*eta - (285.8046614909264)*eta - (-87.05178731421717));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036422187323309606))/(-0.0010889971506633876) -
                (511.016585683153)*phi_mod*phi_mod - (24.95846944251516)*phi_mod - (-2.604074712176713) -
                (44.9114282324116)*eta*eta - (-46.01732387658578)*eta - (11.329130843419643));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004015663111662227))/(0.0010350979520007866) -
                (327.8146512139727)*phi_mod*phi_mod - (-17.84643846806678)*phi_mod - (-1.6971214770500074) -
                (-759.0449587411046)*eta*eta - (925.0329209339295)*eta - (-281.6453514784049));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003074568800914059))/(-0.001062642354631639) -
                (503.24027691398385)*phi_mod*phi_mod - (22.915106193999073)*phi_mod - (-2.350804443617358) -
                (-993.9219520621925)*eta*eta - (1213.5844011169388)*eta - (-370.2652082546478));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004001558530509487))/(0.00103333641455721) -
                (320.71100820340615)*phi_mod*phi_mod - (-17.437430960091064)*phi_mod - (-1.7003830514238905) -
                (-221.2755068522333)*eta*eta - (265.30359743515237)*eta - (-79.37980702726664));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0036808737132570887))/(0.000997981769573432) -
                (226.57106135599375)*phi_mod*phi_mod - (-17.00384107320939)*phi_mod - (-0.9237422480808128) -
                (-928.8037466840157)*eta*eta - (1128.1356444307112)*eta - (-342.4136051443792));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0042012465041506445))/(0.0010481617338607015) -
                (235.81165569486777)*phi_mod*phi_mod - (-20.630881712790785)*phi_mod - (-1.3445025888075612) -
                (-869.5029306191475)*eta*eta - (1056.9148583134636)*eta - (-320.9634638428428));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004039707198100694))/(0.001029073103907262) -
                (230.48830914056583)*phi_mod*phi_mod - (-16.79005008811678)*phi_mod - (-1.140470711272193) -
                (-656.8253583758002)*eta*eta - (803.1217802727858)*eta - (-245.3400003808493));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0001655965738593049))/(-0.0007895371061574891) -
                (-146.67119362759118)*phi_mod*phi_mod - (-6.56366671665559)*phi_mod - (2.8844042007555957) -
                (-143.2023783963025)*eta*eta - (398.161065051195)*eta - (-276.3285153967036));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003445587363448522))/(0.000724090349045082) -
                (-134.37240673731125)*phi_mod*phi_mod - (3.18484698926829)*phi_mod - (4.483323434616035) -
                (-36.22668532694793)*eta*eta - (152.44922595006543)*eta - (-142.62219782080044));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0001484906405741098))/(-0.0008066811293907466) -
                (-151.64711889325656)*phi_mod*phi_mod - (-6.407901929685609)*phi_mod - (3.018091620031093) -
                (-658.9927434367663)*eta*eta - (1905.2189368094862)*eta - (-1376.8690689588675));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.001647621044595034))/(0.0006626413079051804) -
                (-161.4257975051008)*phi_mod*phi_mod - (4.331946258693401)*phi_mod - (5.040326460692801) -
                (507.7534744237754)*eta*eta - (-1346.246851644857)*eta - (889.069703269787));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (2.1011543159914984e-05))/(-0.0008100276522949363) -
                (-157.2719749301404)*phi_mod*phi_mod - (-6.431058254747253)*phi_mod - (2.8401434833884482) -
                (-738.723456042233)*eta*eta - (2134.1292131407263)*eta - (-1541.2236902913655));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00032512450945451063))/(0.0007234493179024512) -
                (-179.52927449769746)*phi_mod*phi_mod - (5.942966392537234)*phi_mod - (5.8515019635574905) -
                (209.15441640134287)*eta*eta - (-537.7760340380007)*eta - (342.78064013370886));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0001320940067575472))/(-0.0007876184901078214) -
                (-153.24308894263393)*phi_mod*phi_mod - (-6.763610818521456)*phi_mod - (3.0125473170068933) -
                (-769.6237709462786)*eta*eta - (2221.1611519666694)*eta - (-1602.371770602801));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0003114590910092049))/(0.0007294285499923948) -
                (-172.57260795949045)*phi_mod*phi_mod - (4.834253577365216)*phi_mod - (5.466903731375202) -
                (326.823121113151)*eta*eta - (-873.3029632630378)*eta - (581.8630682663401));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00044366892089088393))/(-0.0008147207322245744) -
                (-181.4462184064554)*phi_mod*phi_mod - (-5.63727759729852)*phi_mod - (3.838533232236792) -
                (-438.8461418553871)*eta*eta - (1262.2122044389798)*eta - (-907.4968081978046));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0009136327958413767))/(0.0006843366740221749) -
                (-158.5894433299885)*phi_mod*phi_mod - (5.617342423429421)*phi_mod - (4.974270742501562) -
                (-188.67426929942735)*eta*eta - (588.0467972069031)*eta - (-453.74327849476396));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000270752723257824))/(-0.000801378283611056) -
                (-158.59784119588673)*phi_mod*phi_mod - (-6.061618046013603)*phi_mod - (3.0987896882864505) -
                (-539.2145891776194)*eta*eta - (1550.89333999199)*eta - (-1115.0681881588475));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-4.89363174934825e-05))/(0.0007125576153435281) -
                (-185.04557609859413)*phi_mod*phi_mod - (7.884651919834571)*phi_mod - (6.06041513603827) -
                (-928.0237215239941)*eta*eta - (2670.805291126427)*eta - (-1920.519550348849));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (2.7913029465002295e-05))/(-0.0007914679569407817) -
                (-151.58814764371562)*phi_mod*phi_mod - (-5.844312874541251)*phi_mod - (3.0053256282759824) -
                (-542.6290425976431)*eta*eta - (1559.6094900166768)*eta - (-1120.5053123934645));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00013372828920309396))/(0.0007080502855448493) -
                (-157.7486274374572)*phi_mod*phi_mod - (4.252789809347177)*phi_mod - (5.335138040781366) -
                (-357.12518024614764)*eta*eta - (1040.1082143419412)*eta - (-756.4304415445202));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0001892752330901916))/(-0.0007860732165629153) -
                (-145.51579989153663)*phi_mod*phi_mod - (-5.572799026256508)*phi_mod - (2.7111952047256866) -
                (-526.856379338252)*eta*eta - (1510.0978602607718)*eta - (-1081.8916800881336));}

    else if (seg_combination_id == 221915 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0006446869601501211))/(0.0006890964911235155) -
                (-156.49002765270575)*phi_mod*phi_mod - (4.747174660723806)*phi_mod - (5.293499371465686) -
                (-660.9102141542712)*eta*eta - (1900.5061797400956)*eta - (-1365.6011234465548));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00918705438455966))/(-0.0027512610251177708) -
                (-55.69271529259665)*phi_mod*phi_mod - (4.258971903999743)*phi_mod - (1.5264698969588983) -
                (120.6751663316855)*eta*eta - (181.22702406390061)*eta - (67.94858698618157));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005799088798618271))/(0.0027229030866731093) -
                (-105.77223814220106)*phi_mod*phi_mod - (3.852142158317297)*phi_mod - (1.2435070517601745) -
                (125.7254232077695)*eta*eta - (187.7681824580658)*eta - (70.11169358552547));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009100911815037412))/(-0.0027227842358489547) -
                (-111.0924064908554)*phi_mod*phi_mod - (-1.630449396418233)*phi_mod - (1.1624646214799568) -
                (103.77349312879468)*eta*eta - (153.83386102780256)*eta - (56.9816089843801));}

    else if (seg_combination_id == 50313 && eta_inner == -3 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005982078495592357))/(0.0027414395478429572) -
                (-32.385684407819056)*phi_mod*phi_mod - (-9.933353685465065)*phi_mod - (1.9510315957582365) -
                (119.03150482519565)*eta*eta - (176.4331888149855)*eta - (65.40198479641658));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01832025833802259))/(-0.005568094487616046) -
                (-126.84326793514198)*phi_mod*phi_mod - (3.55847542281143)*phi_mod - (1.3888330990671525) -
                (-84.13217396289853)*eta*eta - (69.51040090782095)*eta - (-10.462792586641365));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.03557201290215631))/(0.00619809386688103) -
                (-73.26004144509652)*phi_mod*phi_mod - (48.63563499620664)*phi_mod - (-6.944049377330625) -
                (-3200.1673703917113)*eta*eta - (3844.4476741529693)*eta - (-1154.2006712297398));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01785023650449245))/(-0.005537044277174822) -
                (-23.427572954190374)*phi_mod*phi_mod - (13.641858159919932)*phi_mod - (3.0825433946634306) -
                (718.93948487164)*eta*eta - (-936.5147617600551)*eta - (304.5977953624537));}

    else if (seg_combination_id == 50308 && eta_inner == 4 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.031238857029407027))/(0.006019337930121984) -
                (622.3981253229393)*phi_mod*phi_mod - (193.48150490023346)*phi_mod - (14.728500003468259) -
                (2140.134703701929)*eta*eta - (-2564.8500256118655)*eta - (768.2644841820915));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007848818587185358))/(-0.00440273503425408) -
                (-109.54951067578067)*phi_mod*phi_mod - (-4.545609006473925)*phi_mod - (1.7391608193613577) -
                (989.866665518151)*eta*eta - (-1706.7651106473365)*eta - (735.3843588633135));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.016473431023020565))/(0.004495999453419065) -
                (16.888238248850264)*phi_mod*phi_mod - (-30.81275166582497)*phi_mod - (4.004609690018859) -
                (750.7235502263535)*eta*eta - (-1279.591313917678)*eta - (545.0306954014401));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007280132428503402))/(-0.004406307555579468) -
                (5.178625779366622)*phi_mod*phi_mod - (27.391402674724564)*phi_mod - (3.6650769110222035) -
                (1325.0985979686327)*eta*eta - (-2278.9613659866905)*eta - (979.4691908045378));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.015836153608804762))/(0.004480155058180162) -
                (-126.76653199511937)*phi_mod*phi_mod - (3.291106519380505)*phi_mod - (1.4374336958993992) -
                (423.1810248969877)*eta*eta - (-725.9671418727913)*eta - (311.2123819399833));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0004536175265485049))/(-0.0003476087538920449) -
                (-68.68305274357229)*phi_mod*phi_mod - (-6.124083780744364)*phi_mod - (6.137190792717909) -
                (-138.95623155330924)*eta*eta - (386.0837304528822)*eta - (-267.8968559068373));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0024583488565369676))/(-0.0006439632757910996) -
                (-44.381910856411196)*phi_mod*phi_mod - (-2.1706435696941004)*phi_mod - (3.9355503377378307) -
                (10.642631654359471)*eta*eta - (-22.210047114906672)*eta - (10.139374767724696));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003501413122134476))/(-0.00042069926855982473) -
                (-79.86786417755651)*phi_mod*phi_mod - (-5.001759677622443)*phi_mod - (6.978368353972926) -
                (-79.01347994822119)*eta*eta - (214.15563192630307)*eta - (-144.8293414986161));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.006805158346158575))/(0.00020042388239691105) -
                (46.86528795003145)*phi_mod*phi_mod - (4.226483625564849)*phi_mod - (-4.640863242764928) -
                (68.57582896249909)*eta*eta - (-215.2421949935251)*eta - (167.21511778482483));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003524176796442916))/(-5.6285094610795605e-05) -
                (-31.164386928984065)*phi_mod*phi_mod - (-0.4492825958886862)*phi_mod - (3.0063947613001583) -
                (-504.2630925072486)*eta*eta - (1358.0358129925983)*eta - (-913.6117910774572));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00149334828389671))/(-0.0002620972856432078) -
                (-138.68612192562716)*phi_mod*phi_mod - (-8.87179097866488)*phi_mod - (11.984609143426642) -
                (-173.35103745049298)*eta*eta - (510.4056634523951)*eta - (-375.26789956294147));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004448819461925841))/(1.391907404747038e-05) -
                (-33.94980249057644)*phi_mod*phi_mod - (-13.471923622578275)*phi_mod - (3.294469068271544) -
                (-6089.159541181667)*eta*eta - (17438.27913973281)*eta - (-12479.773837822127));}

    else if (seg_combination_id == 222024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0018985736285763522))/(-0.0005738656980397783) -
                (-41.71294864582863)*phi_mod*phi_mod - (-1.7663932683066232)*phi_mod - (3.2687791578306546) -
                (99.91250785768693)*eta*eta - (-264.3969801743445)*eta - (173.99725879257224));}

    else if (seg_combination_id == 100902 && eta_inner == -4 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0030212128583534804))/(-0.0009762344022636408) -
                (419.6334335993479)*phi_mod*phi_mod - (20.072590034961937)*phi_mod - (-2.690086043774466) -
                (-586.5113412614227)*eta*eta - (-761.4448901302542)*eta - (-247.03697753025247));}

    else if (seg_combination_id == 100902 && eta_inner == -4 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024298043886563972))/(0.0010001482980240338) -
                (433.20068545427046)*phi_mod*phi_mod - (-16.05202028772648)*phi_mod - (-2.5324808117789797) -
                (107.26768259467138)*eta*eta - (129.44297456179132)*eta - (38.76194306784046));}

    else if (seg_combination_id == 100902 && eta_inner == -4 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0036302579578314864))/(-0.0009918507996084934) -
                (401.36646842112367)*phi_mod*phi_mod - (18.32072513233743)*phi_mod - (-2.6137858792316186) -
                (-1078.2064001908657)*eta*eta - (-1392.362460231146)*eta - (-449.3482051519367));}

    else if (seg_combination_id == 100902 && eta_inner == -4 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009483504850068639))/(0.0009497016973952604) -
                (500.68769328256235)*phi_mod*phi_mod - (-24.335254260428947)*phi_mod - (-3.224612202100096) -
                (123.22501004185987)*eta*eta - (159.45856823496018)*eta - (51.63291713247592));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037251471414578518))/(-0.0021822679311806737) -
                (-55.57063480749735)*phi_mod*phi_mod - (-2.4823922255567332)*phi_mod - (0.5838421247508393) -
                (-217.51218804806425)*eta*eta - (351.53884189844774)*eta - (-141.80497609693253));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0032305668776345235))/(-0.0021577257511906332) -
                (-87.92116280493033)*phi_mod*phi_mod - (-4.636149900905518)*phi_mod - (1.2071689457135935) -
                (291.0788799821314)*eta*eta - (-505.6479209812001)*eta - (219.28580248895324));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0023225541090934857))/(-0.0021109243195123616) -
                (-79.58907592209131)*phi_mod*phi_mod - (-5.931840095525499)*phi_mod - (1.1540801538763967) -
                (865.2855942009767)*eta*eta - (-1470.145988693743)*eta - (624.2491827319077));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0016787746959078258))/(-0.0019933092222855996) -
                (-62.33840167027547)*phi_mod*phi_mod - (-4.509041639665953)*phi_mod - (1.03662129562314) -
                (199.3190210213124)*eta*eta - (-358.4209934442564)*eta - (160.2917562388043));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002865680127588699))/(-0.0020753795935048746) -
                (-83.40923400068644)*phi_mod*phi_mod - (-4.9362371752208665)*phi_mod - (1.5815729148882014) -
                (-824.4373396566791)*eta*eta - (1336.4881854182013)*eta - (-541.0269340819767));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034822132330642078))/(-0.001982471247779134) -
                (-91.1593414081307)*phi_mod*phi_mod - (-4.134783098498556)*phi_mod - (1.3141695834547793) -
                (-89.15537847762636)*eta*eta - (140.6233464538042)*eta - (-54.56577794943325));}

    else if (seg_combination_id == 50301 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006124997177911472))/(0.0019718761553303484) -
                (-104.01960429507093)*phi_mod*phi_mod - (5.127784554082788)*phi_mod - (1.312465746286489) -
                (-153.0084752285388)*eta*eta - (251.80382094873409)*eta - (-103.02621840731959));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007955069695762838))/(-0.003166825626922825) -
                (-67.40911123606944)*phi_mod*phi_mod - (3.694536436191123)*phi_mod - (2.5128202837160325) -
                (-81.03905358536969)*eta*eta - (-43.25876348636661)*eta - (-5.4606008243261));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008842618013372681))/(0.0032545249454719134) -
                (-100.69484540938262)*phi_mod*phi_mod - (3.4791182509940883)*phi_mod - (1.61860024212953) -
                (-395.5128473129783)*eta*eta - (-171.5546029842651)*eta - (-18.286430025193162));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012791637963456377))/(-0.003360032638220866) -
                (-152.80448537256405)*phi_mod*phi_mod - (3.6587673378696524)*phi_mod - (2.3594086809535737) -
                (693.9650652810635)*eta*eta - (302.4485832883094)*eta - (32.83072701193903));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009152481244394623))/(0.0032671879545831937) -
                (-22.89019667478403)*phi_mod*phi_mod - (-10.341475712097242)*phi_mod - (2.2311284759519303) -
                (-184.83617779960352)*eta*eta - (-89.15851717759773)*eta - (-10.543838016041683));}

    else if (seg_combination_id == 50301 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.019119936582968445))/(0.0006931411321460971) -
                (29.854216082337263)*phi_mod*phi_mod - (6.01673924418138)*phi_mod - (-0.4696276100983431) -
                (-2325.1817764795187)*eta*eta - (-4241.709812674318)*eta - (-1934.1939655712054));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028376461083114263))/(-0.001087653422252669) -
                (422.0915263765388)*phi_mod*phi_mod - (21.666626610369143)*phi_mod - (-2.0528644366127544) -
                (8.158688355820091)*eta*eta - (-17.913721540608393)*eta - (7.331569137988439));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0043339637006787795))/(0.0011062961149996729) -
                (374.80590892950715)*phi_mod*phi_mod - (-22.379158765648427)*phi_mod - (-1.9868079038334154) -
                (-32.64258433545592)*eta*eta - (23.282146025494654)*eta - (-3.221817417392913));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0027564174456292737))/(-0.0010836430824131933) -
                (430.30411866602566)*phi_mod*phi_mod - (24.403895489767176)*phi_mod - (-2.025945097378315) -
                (17.81019867729844)*eta*eta - (-28.738793322730668)*eta - (10.335215370777883));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004213540668908789))/(0.0010996327847718527) -
                (384.98095263909676)*phi_mod*phi_mod - (-19.797096769266393)*phi_mod - (-2.0500628966104646) -
                (-22.04986494791447)*eta*eta - (11.812328222327945)*eta - (-0.1174098274924458));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0027426718714046107))/(-0.0010839359908120046) -
                (440.5102670283911)*phi_mod*phi_mod - (24.979214988321782)*phi_mod - (-2.0670919884887393) -
                (-10.11774796170093)*eta*eta - (0.7325556910841494)*eta - (2.5875915998438));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004106130188734423))/(0.0010966606070688893) -
                (408.795497065725)*phi_mod*phi_mod - (-20.405393227555663)*phi_mod - (-2.2059219148147355) -
                (-27.161254688876948)*eta*eta - (17.209504091371496)*eta - (-1.5594332277656293));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0029831914958350077))/(-0.0010964793118450056) -
                (439.0414571150849)*phi_mod*phi_mod - (22.782801427806596)*phi_mod - (-2.1964156677001867) -
                (7.962122071454956)*eta*eta - (-18.02430192137763)*eta - (7.399032500993483));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00408628217805311))/(0.0010948508857620712) -
                (414.74252928708233)*phi_mod*phi_mod - (-21.389888922521866)*phi_mod - (-2.242045366867526) -
                (-17.652610529880253)*eta*eta - (7.4754002047556725)*eta - (0.9412993364216176));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0029422945594195105))/(-0.0010963269687061122) -
                (386.55106488912537)*phi_mod*phi_mod - (17.28032824510586)*phi_mod - (-2.127033016465967) -
                (9.943171476662853)*eta*eta - (-20.70826186484699)*eta - (8.307321707928839));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0040886545092667145))/(0.0011019698009278257) -
                (368.27086929979737)*phi_mod*phi_mod - (-24.73460331166167)*phi_mod - (-2.2038139722421515) -
                (-59.49919410878779)*eta*eta - (52.61060433215663)*eta - (-11.148470095209497));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002834673103783676))/(-0.0010926360232450978) -
                (400.4929704306435)*phi_mod*phi_mod - (21.879441958935196)*phi_mod - (-2.0460113376805613) -
                (9.665795423745251)*eta*eta - (-19.66703771948872)*eta - (7.799231700174885));}

    else if (seg_combination_id == 60402 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004050823794931191))/(0.0011031032321139754) -
                (367.8923614801747)*phi_mod*phi_mod - (-19.971776021131532)*phi_mod - (-2.2114614153846306) -
                (-25.97991852057264)*eta*eta - (16.4975446954879)*eta - (-1.5338221495348943));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008414415154421649))/(0.0008348841240410979) -
                (-38.39005657682954)*phi_mod*phi_mod - (-0.27515442703334847)*phi_mod - (0.6278889558650752) -
                (891.1320280760489)*eta*eta - (-3464.518380471297)*eta - (3367.039875273439));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-2.5796184646142307e-05))/(0.0007914038982704703) -
                (8.760327967919999)*phi_mod*phi_mod - (-3.9895908136916884)*phi_mod - (0.05834288757909033) -
                (1089.8129237961984)*eta*eta - (-4244.482379238936)*eta - (4132.45467911951));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007817132479501695))/(0.0008370212587671809) -
                (-67.39551362098632)*phi_mod*phi_mod - (-5.003098066722345)*phi_mod - (0.9060250161373551) -
                (-215.36828113288857)*eta*eta - (861.0302939879787)*eta - (-860.0222432327613));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000726107013736194))/(0.0008265223625041552) -
                (122.8435843887048)*phi_mod*phi_mod - (-8.209561342723383)*phi_mod - (-1.6799227320705226) -
                (-172.82568141416786)*eta*eta - (695.3919631162933)*eta - (-699.0361571939013));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001271814479249478))/(0.0008469523239397844) -
                (-76.61521094824454)*phi_mod*phi_mod - (-0.7725280561493711)*phi_mod - (1.182165137311861) -
                (-316.97472549361953)*eta*eta - (1250.4071265231091)*eta - (-1233.0230745032566));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011902929710080057))/(0.0008395497091177631) -
                (61.83549113424502)*phi_mod*phi_mod - (-2.2374693931683236)*phi_mod - (-0.8900831199317351) -
                (1610.4242861679022)*eta*eta - (-6286.098997744491)*eta - (6134.20747137387));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006097568567035873))/(0.0008195282332162463) -
                (58.146325399495524)*phi_mod*phi_mod - (-3.175431212051978)*phi_mod - (-0.6353263259820124) -
                (67.54711179610263)*eta*eta - (-249.5977084105418)*eta - (229.78751956346642));}

    else if (seg_combination_id == 232015 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007608542370471198))/(0.0008290405592113915) -
                (-49.01701376890304)*phi_mod*phi_mod - (2.2042949461181265)*phi_mod - (0.6165898229067617) -
                (473.925365231043)*eta*eta - (-1858.3402299966244)*eta - (1821.6775170016906));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013191969739309625))/(0.0008141862292468048) -
                (94.88547779947648)*phi_mod*phi_mod - (4.4155445526872565)*phi_mod - (-1.3820358857066806) -
                (-68.43178329449809)*eta*eta - (-192.68205521025564)*eta - (-133.971747816842));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0015149557420066147))/(0.000828309135483206) -
                (91.98303703737189)*phi_mod*phi_mod - (3.237061836205312)*phi_mod - (-1.3669147375661777) -
                (-108.44751733299054)*eta*eta - (-318.231014908695)*eta - (-232.4334422723498));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001268277650319137))/(0.0008128660570366) -
                (99.62214720389727)*phi_mod*phi_mod - (4.024931825224587)*phi_mod - (-1.5210747620001057) -
                (-5.375963614054951)*eta*eta - (3.6116213087572264)*eta - (18.81855256595013));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014097302054062112))/(0.0008120673841918708) -
                (105.69885399668442)*phi_mod*phi_mod - (4.491925237583564)*phi_mod - (-1.530105226955814) -
                (-159.59009273391078)*eta*eta - (-476.0481238068871)*eta - (-354.1372387155103));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0012970084097298435))/(0.0008024548898389748) -
                (104.96188177526074)*phi_mod*phi_mod - (3.1622287030693474)*phi_mod - (-1.6783211425791713) -
                (-39.129838829453654)*eta*eta - (-109.30344934285202)*eta - (-75.16097888373947));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011406617065873364))/(0.0007725913712360662) -
                (65.23943357423728)*phi_mod*phi_mod - (-4.409804101225522)*phi_mod - (-1.149173632667441) -
                (154.8037604063234)*eta*eta - (492.66625510525085)*eta - (391.8186163404089));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013023581252273517))/(0.000803351335604685) -
                (99.32594019893362)*phi_mod*phi_mod - (3.339076643725767)*phi_mod - (-1.4463021623384196) -
                (-85.58258637845253)*eta*eta - (-248.92757509730532)*eta - (-179.98713746968602));}

    else if (seg_combination_id == 221915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001121299620288863))/(0.0007814420201165357) -
                (67.2892911896305)*phi_mod*phi_mod - (7.655421318159356)*phi_mod - (-0.9830187642285534) -
                (-127.34135017354623)*eta*eta - (-377.61679955576824)*eta - (-279.13800070737227));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0004867495271062986))/(0.0008125759993711283) -
                (36.48097774417643)*phi_mod*phi_mod - (-16.781932758294094)*phi_mod - (1.0193739226545409) -
                (185.97367663103424)*eta*eta - (-823.3118864785624)*eta - (911.0940825168497));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003583376894415124))/(-0.001058872801903885) -
                (-398.79515316785813)*phi_mod*phi_mod - (-7.853373529822768)*phi_mod - (11.292359586155436) -
                (1848.263964963363)*eta*eta - (-8451.92656783931)*eta - (9661.834832470066));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01091340565965107))/(0.0013423184037083663) -
                (318.16741071697083)*phi_mod*phi_mod - (-8.595072160670144)*phi_mod - (-8.856803565260538) -
                (-390.6529571155804)*eta*eta - (1649.5587292950668)*eta - (-1738.5738434474974));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00032224986302899087))/(0.0008739258528105795) -
                (-157.9842119639395)*phi_mod*phi_mod - (-8.701894645393347)*phi_mod - (5.355461680830875) -
                (246.65584224827938)*eta*eta - (-1089.9263174497514)*eta - (1203.6967357878657));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0025790068268877653))/(0.0009444475385196356) -
                (139.5064874337237)*phi_mod*phi_mod - (1.8647853027281465)*phi_mod - (-4.638792368781713) -
                (512.7008029039956)*eta*eta - (-2222.4517280307964)*eta - (2408.18703865899));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0019635578702526142))/(0.0006794931596253569) -
                (57.50259356606441)*phi_mod*phi_mod - (-17.144121502275873)*phi_mod - (0.22915822441715106) -
                (554.0975856294945)*eta*eta - (-2396.346550529423)*eta - (2590.331708499933));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.005632581212936017))/(0.0010740631734270786) -
                (-52.453968809401324)*phi_mod*phi_mod - (-19.994133630903423)*phi_mod - (3.644918613224386) -
                (262.0560769488759)*eta*eta - (-1174.4988861671513)*eta - (1315.3735426658059));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0002983394624108034))/(0.0008056895270995721) -
                (-29.056498753098868)*phi_mod*phi_mod - (-8.894173813432118)*phi_mod - (2.1431486470228585) -
                (732.957578563045)*eta*eta - (-3174.696480509549)*eta - (3436.623391868417));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011168055240341488))/(-0.0013792206351650447) -
                (-202.5994233444904)*phi_mod*phi_mod - (-31.663446356825176)*phi_mod - (11.13759849980597) -
                (291.17096607670953)*eta*eta - (-1275.4976339752004)*eta - (1394.2370180373257));}

    else if (seg_combination_id == 231934 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00209539828228127))/(0.0008749493126245135) -
                (2003.7846069268894)*phi_mod*phi_mod - (-654.4285739251737)*phi_mod - (52.66969376618376) -
                (278.01775264934577)*eta*eta - (-1215.5714401381344)*eta - (1328.2529796061267));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.002554530354053918))/(-0.00012150723582423799) -
                (670.6326613034133)*phi_mod*phi_mod - (46.10535107035496)*phi_mod - (-1.8826037416478294) -
                (-1202.103156041315)*eta*eta - (-2051.7171708418377)*eta - (-874.8155742037068));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.004258671308179563))/(4.8405762696768157e-05) -
                (564.9066318788282)*phi_mod*phi_mod - (79.90031637267538)*phi_mod - (-2.1409915734289466) -
                (-2451.2234633695566)*eta*eta - (-4169.632881261271)*eta - (-1773.435491746554));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002776880037876424))/(-0.0008483787092464674) -
                (98.59613175352129)*phi_mod*phi_mod - (-0.30637520190791834)*phi_mod - (-1.5328836222583266) -
                (-31.79132878954505)*eta*eta - (-156.98169482231697)*eta - (-193.34013436569342));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007549138744873423))/(0.0008520527233751724) -
                (73.15980852572116)*phi_mod*phi_mod - (1.6731460447608146)*phi_mod - (-1.121438954002433) -
                (1.3201047717837036)*eta*eta - (0.7614266310253347)*eta - (-5.2455950000779366));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003905931745837093))/(-0.0008515769779278144) -
                (103.35229839119474)*phi_mod*phi_mod - (-0.5120881015973969)*phi_mod - (-1.5664041070175814) -
                (-12.59317893504093)*eta*eta - (-65.03864665423288)*eta - (-83.29740111274266));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008282794538648281))/(0.0008604833632375777) -
                (69.35671074444565)*phi_mod*phi_mod - (1.4453466468781428)*phi_mod - (-1.0469329979394686) -
                (-10.637541006298155)*eta*eta - (-53.56528003824794)*eta - (-66.90293352039367));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00045486454879588534))/(-0.000853341958997531) -
                (98.34938011329427)*phi_mod*phi_mod - (-0.9433441934823825)*phi_mod - (-1.4906899944500807) -
                (-52.154424404261135)*eta*eta - (-252.55733901857153)*eta - (-305.4743029773659));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008041082523328705))/(0.000857541734982105) -
                (69.83512595509059)*phi_mod*phi_mod - (1.1426375378518685)*phi_mod - (-1.070089666937031) -
                (-10.253951652114113)*eta*eta - (-51.92324465501855)*eta - (-65.16060314375869));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003403055279760116))/(-0.0008491386683492587) -
                (102.15160939725581)*phi_mod*phi_mod - (-0.06976936239429322)*phi_mod - (-1.5223301942880356) -
                (-60.041777907310916)*eta*eta - (-289.6427663158265)*eta - (-349.0634290722618));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008575726296002859))/(0.0008601389870527108) -
                (72.39888698585152)*phi_mod*phi_mod - (-0.049290947122950506)*phi_mod - (-1.0869938959123744) -
                (-4.647348281661134)*eta*eta - (-25.943334408266026)*eta - (-35.083788376149535));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004226238410484446))/(-0.0008494263056007532) -
                (102.6086905910945)*phi_mod*phi_mod - (-2.73649157804252)*phi_mod - (-1.5508862799531378) -
                (-71.919536915551)*eta*eta - (-344.9904709487059)*eta - (-413.52096060609585));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006892353100707404))/(0.0008564034494533995) -
                (72.13515843032275)*phi_mod*phi_mod - (0.9777174891207441)*phi_mod - (-1.1009765274520096) -
                (-19.669533148769148)*eta*eta - (-96.28202571578663)*eta - (-117.37905739228374));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00040840008994494185))/(-0.0008437858370360855) -
                (101.38335577385692)*phi_mod*phi_mod - (-1.0159543345242164)*phi_mod - (-1.4698124569069364) -
                (-3.8401336908458967)*eta*eta - (-23.644777830216754)*eta - (-34.353001837898596));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0006754858829118122))/(0.0008484851319032235) -
                (78.41308562881096)*phi_mod*phi_mod - (-0.3621541636072628)*phi_mod - (-1.1914718665165713) -
                (-4.760332176922815)*eta*eta - (-27.20957744379835)*eta - (-37.43832086357424));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0001178390473380774))/(-0.0008335558887626129) -
                (108.44657961799088)*phi_mod*phi_mod - (-1.2820487627193504)*phi_mod - (-1.6355079791575122) -
                (9.972238722362073)*eta*eta - (40.995016650830884)*eta - (41.25397989479573));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008170669314476463))/(0.0008547358396047627) -
                (73.96328665545465)*phi_mod*phi_mod - (0.9055483599512936)*phi_mod - (-1.1296244093046197) -
                (-3.321767373588902)*eta*eta - (-20.555424930959006)*eta - (-29.706817253183694));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00014676086583666326))/(-0.0008381143084555545) -
                (103.76115257628531)*phi_mod*phi_mod - (-0.9163686664050894)*phi_mod - (-1.5282242804554267) -
                (-10.729018207123662)*eta*eta - (-56.7622158426403)*eta - (-74.14087427149208));}

    else if (seg_combination_id == 221934 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -1 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000820644662032179))/(0.0008537852855339501) -
                (74.08845688393502)*phi_mod*phi_mod - (1.4312752184970832)*phi_mod - (-1.0932658328130422) -
                (-5.490928213122022)*eta*eta - (-30.408240149952523)*eta - (-40.879818611042936));}

    else if (seg_combination_id == 110902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005176304143838224))/(-8.438223951496185e-06) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 110902 && eta_inner == 5 &&
        eta_middle == 3 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0005595921960589042))/(0.0005015739489222453) -
                (197.4165116016766)*phi_mod*phi_mod - (-21.204721937340686)*phi_mod - (-0.2184081387221139) -
                (-902.5172416945652)*eta*eta - (1652.3255798888954)*eta - (-755.3587595427701));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00017322964395976876))/(-0.0008638800803149241) -
                (411.2966376577567)*phi_mod*phi_mod - (12.561509343776766)*phi_mod - (-1.9542481901444715) -
                (-242.04516524186192)*eta*eta - (805.4977952714113)*eta - (-662.1813814863514));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002355957165823356))/(0.0008681255574260584) -
                (424.35686943417494)*phi_mod*phi_mod - (-15.992774694006776)*phi_mod - (-2.5345894132789053) -
                (424.0961922160067)*eta*eta - (-1177.6375684065733)*eta - (814.7695407813477));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0003025897675861352))/(-0.0008689086959857694) -
                (439.073326595759)*phi_mod*phi_mod - (15.123750904099781)*phi_mod - (-2.063267679912509) -
                (414.67487371179266)*eta*eta - (-1136.6495170649468)*eta - (773.6604341024716));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0019269549698522524))/(0.0008547243646601908) -
                (458.0011292051658)*phi_mod*phi_mod - (-18.147186039564797)*phi_mod - (-2.6796459866987035) -
                (596.7996891161357)*eta*eta - (-1675.5081409849486)*eta - (1173.327208192479));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0005505326654481529))/(-0.0008595970134990793) -
                (446.90700191797083)*phi_mod*phi_mod - (12.334834398931614)*phi_mod - (-2.2699981952399746) -
                (559.780548983573)*eta*eta - (-1570.4270310449506)*eta - (1097.7552353886897));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0022045213920021257))/(0.0008678775499807325) -
                (469.01590196552894)*phi_mod*phi_mod - (-16.085253388759615)*phi_mod - (-2.719614846548417) -
                (719.5123004975424)*eta*eta - (-2034.1608060255196)*eta - (1435.2998557698934));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00017614202625128314))/(-0.0008322856613747998) -
                (519.9681994470259)*phi_mod*phi_mod - (11.24599282855489)*phi_mod - (-2.3985483880998517) -
                (293.1252298044081)*eta*eta - (-786.066135134346)*eta - (521.1578390992321));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0023671404445651236))/(0.0008393524496099331) -
                (433.9178679531903)*phi_mod*phi_mod - (-16.290198437682964)*phi_mod - (-2.4299763458190986) -
                (170.50620275788876)*eta*eta - (-439.765739352822)*eta - (278.23535938957355));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (8.454533078717699e-05))/(-0.0008465295797985066) -
                (500.4919821655706)*phi_mod*phi_mod - (12.661016171859648)*phi_mod - (-2.3696757349383786) -
                (-552.0877868264425)*eta*eta - (1707.8041168365053)*eta - (-1318.291124817137));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0020949153819923056))/(0.0008250033090512595) -
                (414.7269660255359)*phi_mod*phi_mod - (-17.511549091496168)*phi_mod - (-2.334289254148497) -
                (481.61442227704674)*eta*eta - (-1340.0452109251355)*eta - (929.3825364612788));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0008211396652124616))/(-0.0008312107657469759) -
                (384.3192417488804)*phi_mod*phi_mod - (14.280892114577192)*phi_mod - (-2.5572284694869056) -
                (1148.8015689806107)*eta*eta - (-3342.7699482290877)*eta - (2430.6659286105787));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00234819470005524))/(0.0008417293040077535) -
                (341.01721254337485)*phi_mod*phi_mod - (-11.021646791782542)*phi_mod - (-2.4816660555883914) -
                (339.5504042027615)*eta*eta - (-945.7131149254087)*eta - (656.4813055584451));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0004221814229130194))/(-0.0008531666579110584) -
                (331.247987657286)*phi_mod*phi_mod - (6.510068667870824)*phi_mod - (-2.572520592337575) -
                (801.6724524590156)*eta*eta - (-2317.3368709224583)*eta - (1673.4419204284013));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0024747697418995374))/(0.0008510818914473395) -
                (369.85806536174516)*phi_mod*phi_mod - (-15.810339473893443)*phi_mod - (-2.6119996186976415) -
                (240.56013299929543)*eta*eta - (-658.7616761374076)*eta - (448.6499432966273));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0004731813894069986))/(-0.0008486147433957273) -
                (480.3189472529877)*phi_mod*phi_mod - (16.931508247134634)*phi_mod - (-2.2375190470959794) -
                (-94.08332862814856)*eta*eta - (363.2611853251106)*eta - (-331.67822245767064));}

    else if (seg_combination_id == 232024 && eta_inner == 2 &&
        eta_middle == 3 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00217862677510122))/(0.0008537283792798899) -
                (398.57481698355167)*phi_mod*phi_mod - (-15.507412080957517)*phi_mod - (-2.3231903967515346) -
                (558.187876847015)*eta*eta - (-1567.0596997406403)*eta - (1097.4568533752904));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003960938184852965))/(-0.0015277487910571633) -
                (-224.86608154745934)*phi_mod*phi_mod - (-7.4358336880128055)*phi_mod - (-0.6294944323584979) -
                (290.78954073206654)*eta*eta - (-1032.1991199964968)*eta - (914.0903517503962));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0029096673123336285))/(0.0015241487730740118) -
                (-346.54739563905713)*phi_mod*phi_mod - (11.314577853999058)*phi_mod - (-0.8798696795220778) -
                (-302.7390320424443)*eta*eta - (950.002712723506)*eta - (-742.7204714650579));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004136376785869658))/(-0.001538297121413591) -
                (-251.44158212759447)*phi_mod*phi_mod - (-10.596501477662684)*phi_mod - (-0.4691567470283045) -
                (301.959019986892)*eta*eta - (-1072.5453058241917)*eta - (950.3733993962253));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0036214725529157147))/(0.00145670968820426) -
                (-341.9167381530735)*phi_mod*phi_mod - (7.308111519786911)*phi_mod - (-0.8442762116591066) -
                (-236.45491662270052)*eta*eta - (729.544638365809)*eta - (-559.3891899719198));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004184102293064024))/(-0.001542212570850978) -
                (-256.8323947809337)*phi_mod*phi_mod - (-9.790234882988713)*phi_mod - (-0.587494735620608) -
                (261.5045006852505)*eta*eta - (-933.0622708798625)*eta - (830.1482727297712));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003599838396033516))/(0.0014659221264025294) -
                (-319.5612404412524)*phi_mod*phi_mod - (8.880270037470508)*phi_mod - (-1.1974308590720804) -
                (64.1473503132233)*eta*eta - (-273.07490029312135)*eta - (276.4555623435618));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003900146040394021))/(-0.0015394171354402599) -
                (-268.42091448202814)*phi_mod*phi_mod - (-9.027301729706023)*phi_mod - (-0.7000674273407937) -
                (334.5682694839602)*eta*eta - (-1182.2566102314406)*eta - (1042.464149993487));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0029649933801140075))/(0.0015176528388440634) -
                (-331.7581252966814)*phi_mod*phi_mod - (11.479705903099939)*phi_mod - (-1.2228433411500104) -
                (-131.86946860397757)*eta*eta - (381.8695376160202)*eta - (-270.56663050884066));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003897615587236327))/(-0.001519684236854934) -
                (-267.8119365679007)*phi_mod*phi_mod - (-6.822561155868521)*phi_mod - (-0.5469307334347933) -
                (283.49076837099676)*eta*eta - (-1009.5406757443998)*eta - (896.5780522069053));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0028980295396674946))/(0.0014709333332909348) -
                (-346.85300416271747)*phi_mod*phi_mod - (12.075830803428996)*phi_mod - (-1.0718149883616799) -
                (-316.9861760066649)*eta*eta - (996.5618798601356)*eta - (-780.69074976141));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0041654067477623355))/(-0.0014993570101002273) -
                (-254.22832525166308)*phi_mod*phi_mod - (-9.659052709268442)*phi_mod - (-0.3759447935541769) -
                (241.71530208125148)*eta*eta - (-862.8271344773403)*eta - (767.9370471295995));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0023109989630592815))/(0.0014711103241279793) -
                (-332.54693118436904)*phi_mod*phi_mod - (11.378010883363025)*phi_mod - (-0.8877383675011734) -
                (-176.5518205623978)*eta*eta - (531.2942440905529)*eta - (-395.2997808238536));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0027255012599703026))/(-0.0013610438749016222) -
                (-253.22489244939663)*phi_mod*phi_mod - (-7.418449549145766)*phi_mod - (0.2129252072903397) -
                (6.061934896517612)*eta*eta - (-61.330227765530665)*eta - (87.00521855805938));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00015612437708871214))/(0.0013252474296678387) -
                (-425.18088161521126)*phi_mod*phi_mod - (11.508060064471383)*phi_mod - (1.0543037243582691) -
                (-494.965742469434)*eta*eta - (1606.8353578175113)*eta - (-1302.3276047710526));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037483125605614334))/(-0.0014833741945033698) -
                (-269.27852552421626)*phi_mod*phi_mod - (-9.46533885984876)*phi_mod - (-0.2569279893924041) -
                (328.9755881517393)*eta*eta - (-1165.417188075933)*eta - (1030.2699012458509));}

    else if (seg_combination_id == 232024 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002478136500930604))/(0.0014902999303507615) -
                (-355.657299080586)*phi_mod*phi_mod - (11.16076670773989)*phi_mod - (-0.7043722275594171) -
                (-202.27895430822645)*eta*eta - (612.9142511579262)*eta - (-459.887617278362));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.01238103146608099))/(-0.0004208219340731078) -
                (127.97777733776628)*phi_mod*phi_mod - (2.6412826399399743)*phi_mod - (-4.002880132971368) -
                (-4398.581138757632)*eta*eta - (-17053.54670152398)*eta - (-16523.658780550802));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008738002608680149))/(0.0007887180203913276) -
                (55.39564145666397)*phi_mod*phi_mod - (1.4719051081620107)*phi_mod - (-0.8266146761204564) -
                (9.890872657059687)*eta*eta - (29.658316713104355)*eta - (20.343065766609982));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.005372113488380575))/(-0.0006337350113512162) -
                (-65.03177532042592)*phi_mod*phi_mod - (2.1582946507739633)*phi_mod - (3.2674835177759314) -
                (3367.2345081015187)*eta*eta - (13408.438236631833)*eta - (13347.04781426779));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010613244035993642))/(0.0007968059689749226) -
                (49.58741610011057)*phi_mod*phi_mod - (1.080726278953548)*phi_mod - (-0.7219439336987479) -
                (-5.864301526373745)*eta*eta - (-30.57908290972448)*eta - (-37.21137421209569));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011441125100994506))/(-0.0011127563908103295) -
                (35.701755606343504)*phi_mod*phi_mod - (3.4685062930580144)*phi_mod - (-1.2494854766594239) -
                (451.63736885198324)*eta*eta - (1738.0612155041536)*eta - (1671.4530898467872));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008901886269245282))/(0.000796777428737715) -
                (50.416607843047366)*phi_mod*phi_mod - (1.392263586908433)*phi_mod - (-0.8731586176893259) -
                (43.03777062612798)*eta*eta - (157.9458689830179)*eta - (144.40484863638034));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0109526745039111))/(-0.0005148893882759436) -
                (-90.69525946538428)*phi_mod*phi_mod - (3.5676811140606945)*phi_mod - (1.6273189938793167) -
                (-5247.360949222271)*eta*eta - (-20620.23299894871)*eta - (-20256.70574005138));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010129843854407372))/(0.0007973236644760007) -
                (52.39741333674874)*phi_mod*phi_mod - (1.263652984081059)*phi_mod - (-0.7557378380157924) -
                (17.13306914587457)*eta*eta - (56.35653129188918)*eta - (44.86304223763812));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.019372480571811027))/(-0.0013533114593178557) -
                (201.84089388022883)*phi_mod*phi_mod - (-2.6085086165261218)*phi_mod - (-7.116767525701233) -
                (958.2534414073292)*eta*eta - (3617.8264849340712)*eta - (3408.06682253359));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001014617530303513))/(0.0007956256760811943) -
                (57.06636484847503)*phi_mod*phi_mod - (0.5017351651554766)*phi_mod - (-0.8539939645594348) -
                (38.67679417772132)*eta*eta - (139.76784508948418)*eta - (125.58358619259388));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003325005440918545))/(-0.0009007848524831027) -
                (-110.68716470274592)*phi_mod*phi_mod - (3.054601869451022)*phi_mod - (5.872036721465657) -
                (298.46805605890563)*eta*eta - (1207.8644470372876)*eta - (1220.9398030766959));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001067003690251775))/(0.0007894821164898529) -
                (53.00237037972918)*phi_mod*phi_mod - (0.4725285578386658)*phi_mod - (-0.7729940957092317) -
                (24.50934169325414)*eta*eta - (86.48371939763737)*eta - (75.57022079322014));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011281923835741314))/(-0.0011034655706698112) -
                (101.7976707724393)*phi_mod*phi_mod - (2.8502510431274075)*phi_mod - (-2.908920605669677) -
                (29.41823142221471)*eta*eta - (107.0459384226069)*eta - (96.82838605305486));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009632812014646571))/(0.0007866543262843736) -
                (54.59130151631735)*phi_mod*phi_mod - (0.9768164529885845)*phi_mod - (-0.7980247051511833) -
                (15.537969180061719)*eta*eta - (50.8431853771625)*eta - (40.178152589298826));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002479289149544055))/(-0.0008662182856606095) -
                (34.0018169685098)*phi_mod*phi_mod - (1.5864587420392908)*phi_mod - (-1.0095375686659933) -
                (-192.029009134793)*eta*eta - (-708.2805050873426)*eta - (-650.0955013382322));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010284787153955594))/(0.0007875306341693112) -
                (54.809791704465425)*phi_mod*phi_mod - (1.256967172436443)*phi_mod - (-0.7992322923266536) -
                (2.228809281070149)*eta*eta - (1.0509708695285447)*eta - (-6.299889231423534));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006563003738535879))/(-0.00271353772468374) -
                (-12.487936998490023)*phi_mod*phi_mod - (10.212634916446595)*phi_mod - (1.5090507253598822) -
                (-33.95605662053277)*eta*eta - (54.969803669386465)*eta - (-22.110891484364096));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00808935796293536))/(0.002629376630102831) -
                (-121.68847291632137)*phi_mod*phi_mod - (4.743129202749465)*phi_mod - (1.2985919453240091) -
                (314.2331002312858)*eta*eta - (-500.35769130157)*eta - (199.05729153523697));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0061882404329365705))/(-0.002679260891263055) -
                (-74.48980728710485)*phi_mod*phi_mod - (-3.989701208514647)*phi_mod - (1.0664855012891692) -
                (-47.97509956861721)*eta*eta - (67.20009679195954)*eta - (-23.10123689993421));}

    else if (seg_combination_id == 50313 && eta_inner == 4 &&
        eta_middle == 4 && eta_outer == 4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008809116347791857))/(0.002668288745535442) -
                (-25.483041997228327)*phi_mod*phi_mod - (-11.5799672105456)*phi_mod - (1.9782188400889993) -
                (58.98207572169337)*eta*eta - (-98.96102296246201)*eta - (41.28783762820862));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003906408281129408))/(-0.00014846484474143905) -
                (99.79461550185738)*phi_mod*phi_mod - (-8.196077403234717)*phi_mod - (-1.4312982992292345) -
                (-1404.125110621222)*eta*eta - (-1630.8765995912065)*eta - (-473.48356751599476));}

    else if (seg_combination_id == 100902 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0065960226174580396))/(0.0001189023306640233) -
                (-147.38573287603927)*phi_mod*phi_mod - (-29.05587087158425)*phi_mod - (0.56606614039163) -
                (-653.6823151101293)*eta*eta - (-770.909420043265)*eta - (-227.82521664044708));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0019142902709679411))/(-0.0007817670992688827) -
                (-33.75364536551736)*phi_mod*phi_mod - (0.4976109722545805)*phi_mod - (-0.0839901205049151) -
                (-106.12217283222756)*eta*eta - (456.34248228235543)*eta - (-488.7165945121462));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.014680039932157666))/(0.0010575271940353869) -
                (281.5024340942052)*phi_mod*phi_mod - (-1.434562911972913)*phi_mod - (-0.9068732636464318) -
                (12.736310316709831)*eta*eta - (-9.034338389727624)*eta - (-32.098894159078384));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009837740989622498))/(-0.0007483832617379614) -
                (-41.949319017272614)*phi_mod*phi_mod - (-0.17569860447433328)*phi_mod - (0.3268939272473646) -
                (-250.6673661503575)*eta*eta - (1011.8086229243105)*eta - (-1021.0058477879599));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01689624706115996))/(0.0011453842078170818) -
                (73.5129022482335)*phi_mod*phi_mod - (0.6763530711301987)*phi_mod - (0.669675553123505) -
                (-594.9608641090334)*eta*eta - (2409.068608548746)*eta - (-2437.567648456459));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006205831964712973))/(-0.0007286427198306756) -
                (-7.187720747001362)*phi_mod*phi_mod - (1.2120191347004368)*phi_mod - (0.061500298414438784) -
                (199.50837175197378)*eta*eta - (-798.2968276419127)*eta - (798.4521771519014));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008085876359840498))/(0.0007604868680584075) -
                (852.663494311165)*phi_mod*phi_mod - (-0.587418717757548)*phi_mod - (-1.444285247513246) -
                (-36853.64766062215)*eta*eta - (147196.30231117745)*eta - (-146976.45450301323));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0006617356395417302))/(-0.0007248704146777108) -
                (-20.55811363608695)*phi_mod*phi_mod - (0.7409517652604419)*phi_mod - (0.16908828182009047) -
                (-323.7404862898598)*eta*eta - (1318.0484928255585)*eta - (-1341.4092495908178));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012710969008663793))/(0.001009955809839975) -
                (154.51004578249106)*phi_mod*phi_mod - (2.334895613993301)*phi_mod - (0.5131004569670156) -
                (860.1207133862896)*eta*eta - (-3370.616149139677)*eta - (3301.8038331088214));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0006595916378106431))/(-0.0006913066453816222) -
                (-44.49488146982727)*phi_mod*phi_mod - (-0.988896500946093)*phi_mod - (-0.12244378110608904) -
                (-305.5190858929949)*eta*eta - (1215.2814126867627)*eta - (-1208.1859880292561));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008663729212559274))/(0.0009225202444851211) -
                (17.171211771538154)*phi_mod*phi_mod - (1.3952236342549154)*phi_mod - (1.4041606572140026) -
                (-244.53602149033094)*eta*eta - (1014.6656863362452)*eta - (-1050.530651906238));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0011507033539497956))/(-0.0006761237599252846) -
                (-42.001509989315224)*phi_mod*phi_mod - (0.9819791169432099)*phi_mod - (-0.043883708093407775) -
                (-924.3168184382816)*eta*eta - (3710.2838123556467)*eta - (-3723.0963316946745));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007577535682998358))/(0.0008953784394226181) -
                (79.09352338687974)*phi_mod*phi_mod - (-5.472959313420547)*phi_mod - (0.5753019708089823) -
                (-2246.2696073526754)*eta*eta - (8969.044433130208)*eta - (-8952.529612614264));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (6.184569915923241e-05))/(-0.0007066503103205872) -
                (-53.505786780030185)*phi_mod*phi_mod - (-2.8507030045860877)*phi_mod - (0.2835216012037662) -
                (569.8779670613961)*eta*eta - (-2312.7566111210017)*eta - (2346.4051086188183));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011892688506016437))/(0.0010246643785476104) -
                (101.53821555975664)*phi_mod*phi_mod - (2.080372587024674)*phi_mod - (0.10264551549719646) -
                (-136.47284643315018)*eta*eta - (563.2978163044944)*eta - (-580.2085239272253));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008242607613614229))/(-0.0007346330735747113) -
                (-28.46873558240249)*phi_mod*phi_mod - (0.20147575922833413)*phi_mod - (0.17554185080667892) -
                (-49.26743235157281)*eta*eta - (204.2864971634023)*eta - (-211.61685568612643));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006512704719724287))/(0.0008630330302591707) -
                (70.11306335828161)*phi_mod*phi_mod - (-4.02948738694794)*phi_mod - (1.0224518888808207) -
                (-625.1358688461629)*eta*eta - (2515.2642988729694)*eta - (-2529.632458751374));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003390415529681096))/(-0.0015010940337507961) -
                (-255.633333420173)*phi_mod*phi_mod - (7.97359664073686)*phi_mod - (-0.6062296773136452) -
                (214.41910940640167)*eta*eta - (771.3241284678244)*eta - (691.2205409139789));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0023127972770723222))/(0.0015202207407509264) -
                (-334.48779730645117)*phi_mod*phi_mod - (-8.813750279107463)*phi_mod - (-0.9446720534563543) -
                (-257.90447884700876)*eta*eta - (-798.3959932522661)*eta - (-614.5906242476518));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.002955871504174321))/(-0.0014679113447278818) -
                (-273.8271994402622)*phi_mod*phi_mod - (6.418377327753455)*phi_mod - (-0.3820460146160808) -
                (193.20928943237422)*eta*eta - (702.902473897358)*eta - (636.2450370588028));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0020175680111455033))/(0.0015026775993394023) -
                (-316.2034878785137)*phi_mod*phi_mod - (-12.925534743541212)*phi_mod - (-1.0259380689933237) -
                (-248.30564614250457)*eta*eta - (-766.2935016257439)*eta - (-587.6725501284027));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0037699277465091394))/(-0.00152055363558105) -
                (-253.24141929707983)*phi_mod*phi_mod - (3.550534409081145)*phi_mod - (-0.7643202057027392) -
                (303.31570206436044)*eta*eta - (1076.4741103328427)*eta - (953.0357354459907));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003526012202337699))/(0.0014837219596549368) -
                (-272.4419582431338)*phi_mod*phi_mod - (-10.889846700825755)*phi_mod - (-1.6547446408808104) -
                (-191.52960004698846)*eta*eta - (-581.1079035141782)*eta - (-436.82637807977426));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0039554430441577524))/(-0.0015451014046809818) -
                (-291.3518074595981)*phi_mod*phi_mod - (9.611635652793542)*phi_mod - (-0.6257518536732131) -
                (316.0823273730365)*eta*eta - (1121.3185268376828)*eta - (992.2626602429885));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0028126880804242643))/(0.0015301739018413617) -
                (-324.61945127181764)*phi_mod*phi_mod - (-10.050403994447208)*phi_mod - (-1.227661829861631) -
                (-265.71368493381476)*eta*eta - (-829.3301322151127)*eta - (-644.5320734926311));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003734155730236718))/(-0.0015284876410411902) -
                (-270.8517811423785)*phi_mod*phi_mod - (9.644369682125612)*phi_mod - (-0.8227665296624421) -
                (347.0302891166063)*eta*eta - (1224.8559798422903)*eta - (1078.7677474629857));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.003063933422093748))/(0.0015026555748992945) -
                (-327.1248395486915)*phi_mod*phi_mod - (-7.348510503377613)*phi_mod - (-1.153332980635252) -
                (-144.42946871586906)*eta*eta - (-422.360164433988)*eta - (-303.227054194355));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0028762263351090676))/(-0.0016620717132945799) -
                (-394.9494329373632)*phi_mod*phi_mod - (11.981018519219472)*phi_mod - (-0.07140435906495128) -
                (201.0654093916953)*eta*eta - (724.9320446706672)*eta - (649.9570030696252));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0017024678358591994))/(0.0016198555955453603) -
                (-402.98457648247046)*phi_mod*phi_mod - (-11.215416814957532)*phi_mod - (-0.36355660216037167) -
                (-511.00173775109255)*eta*eta - (-1640.165238052502)*eta - (-1314.917364865468));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0035171719006538453))/(-0.0015277047394029327) -
                (-255.1333392615083)*phi_mod*phi_mod - (9.258972344201526)*phi_mod - (-0.6316238794127518) -
                (265.20634134665124)*eta*eta - (944.4971810746611)*eta - (838.6896484847495));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0027142932522161278))/(0.0014877386573668842) -
                (-325.4309399385596)*phi_mod*phi_mod - (-10.312279718258466)*phi_mod - (-0.8722901556477984) -
                (-235.7059760884005)*eta*eta - (-728.4407574283083)*eta - (-559.67819687184));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0034571713971485157))/(-0.0014980299128370626) -
                (-269.3349705786389)*phi_mod*phi_mod - (8.56864296549327)*phi_mod - (-0.49123006711509987) -
                (301.9963349927125)*eta*eta - (1072.7473254666245)*eta - (950.470630674715));}

    else if (seg_combination_id == 232024 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.002988348787408687))/(0.0014632212621009412) -
                (-290.3824058047454)*phi_mod*phi_mod - (-8.853914307479076)*phi_mod - (-1.1036429612783978) -
                (-309.1056423206759)*eta*eta - (-973.8763734076207)*eta - (-764.8611399063024));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.016281498210658656))/(-0.0045401320327239005) -
                (-141.52232542356546)*phi_mod*phi_mod - (0.37294688011305843)*phi_mod - (1.4301047123507409) -
                (668.4533010810692)*eta*eta - (1141.1602421610396)*eta - (486.75856345895744));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007272009225778811))/(0.004407095292507137) -
                (9.87782562978488)*phi_mod*phi_mod - (-28.963194963015212)*phi_mod - (3.969922620508191) -
                (1153.767354842569)*eta*eta - (1983.3187137352468)*eta - (851.9972942903369));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.01680874176824013))/(-0.004558237503667222) -
                (-17.682661679752805)*phi_mod*phi_mod - (19.373966718436165)*phi_mod - (2.91101659553818) -
                (705.2316975213478)*eta*eta - (1200.9876456552636)*eta - (511.09210005201584));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007507089208680271))/(0.004448534697856544) -
                (-124.2804188158889)*phi_mod*phi_mod - (6.2176122090563)*phi_mod - (1.7803696106155904) -
                (967.6770698476704)*eta*eta - (1666.6916477129205)*eta - (717.3293214208609));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010822048653857294))/(-0.0010916458026880868) -
                (-27.544492504823598)*phi_mod*phi_mod - (-1.9445562296895644)*phi_mod - (1.7974725616984462) -
                (-320.46484676271285)*eta*eta - (1209.7513508576853)*eta - (-1139.2886517466045));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001026691871702285))/(0.0007951834491339748) -
                (53.604270960167845)*phi_mod*phi_mod - (-0.5959804444962472)*phi_mod - (-0.7818502085828901) -
                (27.11377656068898)*eta*eta - (-96.47097169752085)*eta - (85.1176744375162));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0009098299235273863))/(-0.0008105086340157577) -
                (129.47248046415066)*phi_mod*phi_mod - (2.842637484615749)*phi_mod - (-4.288063739341709) -
                (74.8304750105747)*eta*eta - (-276.5692976949168)*eta - (254.3852528622618));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001057435440898306))/(0.0007957940484656446) -
                (53.16768068275002)*phi_mod*phi_mod - (-1.1676841909859759)*phi_mod - (-0.753171552932355) -
                (-2.1031232830467363)*eta*eta - (16.291632383334775)*eta - (-23.671931877145806));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0799093936383022))/(0.0014551591958862325) -
                (35.90384431390171)*phi_mod*phi_mod - (2.4933950297799075)*phi_mod - (-0.932330666335866) -
                (-24621.31067688112)*eta*eta - (97553.15626191602)*eta - (-96629.95849815645));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009963095706171405))/(0.0007890969376193752) -
                (57.806718555136406)*phi_mod*phi_mod - (-1.70782790740775)*phi_mod - (-0.8628011104675741) -
                (21.696786717125388)*eta*eta - (-75.52445496602893)*eta - (64.84913780969467));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009001084040667707))/(-0.0010394517049637033) -
                (-99.08930441863878)*phi_mod*phi_mod - (2.4843157720199383)*phi_mod - (4.473421887266422) -
                (-282.32718034202946)*eta*eta - (1055.4889105077646)*eta - (-983.2019845832148));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010123098815394665))/(0.0007849015642458624) -
                (59.9974721797941)*phi_mod*phi_mod - (-1.3252695690685543)*phi_mod - (-0.8943760536422327) -
                (14.512444827681675)*eta*eta - (-48.94469498388816)*eta - (40.342701899819595));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.05555183899741129))/(-0.0027527554974489978) -
                (-193.70004058922933)*phi_mod*phi_mod - (-8.646783619408819)*phi_mod - (5.358453066603505) -
                (1489.40542468312)*eta*eta - (-5829.212333547634)*eta - (5702.380982336163));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008782852238480041))/(0.0007774000998595664) -
                (58.23145692077856)*phi_mod*phi_mod - (-1.9275025032184228)*phi_mod - (-0.8744177688957967) -
                (22.677837075186137)*eta*eta - (-77.8612744713964)*eta - (65.70142299214852));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010046991551664966))/(0.0007843022909909293) -
                (58.366692219809394)*phi_mod*phi_mod - (-1.5387043848721575)*phi_mod - (-0.8413976158502939) -
                (2.018166091599665)*eta*eta - (0.9254568820917674)*eta - (-9.371363497748346));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011802822279303654))/(-0.001118502344284385) -
                (25.696833611729673)*phi_mod*phi_mod - (-0.7186053905242121)*phi_mod - (-0.9303903394291332) -
                (-354.68422413399867)*eta*eta - (1371.9034068333208)*eta - (-1326.0677154743473));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009768770117097164))/(0.0007861564678231717) -
                (57.940773349276974)*phi_mod*phi_mod - (-1.5416429534382279)*phi_mod - (-0.86211929291343) -
                (22.945557801115434)*eta*eta - (-78.59288822838424)*eta - (66.11925396506552));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.017933892735894835))/(-0.0002934004973239655) -
                (12.62889410688566)*phi_mod*phi_mod - (9.219306481408983)*phi_mod - (2.2755724617632613) -
                (-5659.355526637523)*eta*eta - (22036.3504386051)*eta - (-21446.864309642362));}

    else if (seg_combination_id == 221915 && eta_inner == 1 &&
        eta_middle == 2 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0009955678844802327))/(0.0007873368959951057) -
                (59.53106998474784)*phi_mod*phi_mod - (-1.2504409336624296)*phi_mod - (-0.8616206413668674) -
                (-18.373004260319394)*eta*eta - (79.12922496264568)*eta - (-84.33081760735594));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0008019596769447992))/(-0.0006812864131071002) -
                (279.75341479444114)*phi_mod*phi_mod - (-7.785859164416264)*phi_mod - (-4.554838825488036) -
                (317.38274552686494)*eta*eta - (1059.5271343907618)*eta - (884.1837468074676));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (5.405712374571483e-05))/(0.0006967464489183765) -
                (297.4962360007667)*phi_mod*phi_mod - (9.039098168566762)*phi_mod - (-5.715552180741411) -
                (82.88976271766374)*eta*eta - (262.3714573187759)*eta - (207.40931137218112));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000636139227707927))/(-0.000673810540071405) -
                (283.3960809909496)*phi_mod*phi_mod - (-7.986591531831329)*phi_mod - (-4.616123691964057) -
                (271.6537211371961)*eta*eta - (910.63467733048)*eta - (763.0404837440881));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00024705362287495334))/(0.0006920016017139676) -
                (299.3796579394227)*phi_mod*phi_mod - (7.3095654597793045)*phi_mod - (-5.810278884101843) -
                (-267.47666439775537)*eta*eta - (-881.3506824917143)*eta - (-725.9614496474686));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007265414430570508))/(-0.0006770242980876027) -
                (287.6934930463808)*phi_mod*phi_mod - (-8.248734311767661)*phi_mod - (-4.6209592382210944) -
                (243.48753950884355)*eta*eta - (817.8715129204976)*eta - (686.6925581202684));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (6.655208110719448e-05))/(0.000698008079995075) -
                (298.1771755775194)*phi_mod*phi_mod - (8.192853005870056)*phi_mod - (-5.7485987248745145) -
                (-68.60471675559641)*eta*eta - (-233.4342241159022)*eta - (-198.24718654613173));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005916969742511924))/(-0.0006665655319201123) -
                (289.37757577498735)*phi_mod*phi_mod - (-6.640199730905729)*phi_mod - (-4.652350238293078) -
                (144.54482682391898)*eta*eta - (488.67458890551256)*eta - (412.92352627082437));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0002842886696956218))/(0.0006888249064314157) -
                (302.2971845472107)*phi_mod*phi_mod - (9.206927566926758)*phi_mod - (-5.809844540407744) -
                (-149.66360096829513)*eta*eta - (-497.19097061931217)*eta - (-412.7845140449568));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0005403040112702356))/(-0.0006718520547546168) -
                (291.95992521777544)*phi_mod*phi_mod - (-8.81674260346805)*phi_mod - (-4.91712967121638) -
                (78.65615223260778)*eta*eta - (271.80361770987406)*eta - (234.4492488782852));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (2.9238752099798087e-05))/(0.0006992131871424427) -
                (296.78229034185665)*phi_mod*phi_mod - (5.470444826422066)*phi_mod - (-5.841911918414567) -
                (99.99667299432033)*eta*eta - (318.54567516369804)*eta - (253.53633032089263));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007915492200244262))/(-0.0006783698432396533) -
                (278.193086933889)*phi_mod*phi_mod - (-11.830788989396138)*phi_mod - (-4.707355327451256) -
                (314.8389368812883)*eta*eta - (1046.872735507353)*eta - (870.1696543379218));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00037235787495635116))/(0.0006786872183983236) -
                (279.41320773263266)*phi_mod*phi_mod - (3.042124681344053)*phi_mod - (-5.649180603874126) -
                (285.2209663336796)*eta*eta - (926.744756278508)*eta - (752.754025577364));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007063510969264408))/(-0.0006712276834078058) -
                (287.30877370277955)*phi_mod*phi_mod - (-8.119201553683501)*phi_mod - (-4.653205214718294) -
                (255.46287852687743)*eta*eta - (854.8686710876096)*eta - (715.1033261789166));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00022986841694518648))/(0.0006925535913103045) -
                (292.7267625469985)*phi_mod*phi_mod - (6.9843480318705256)*phi_mod - (-5.825992425502096) -
                (60.753108072871036)*eta*eta - (193.77648781308446)*eta - (154.4329569823139));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007413211850891338))/(-0.0006787993447646228) -
                (270.8937255307124)*phi_mod*phi_mod - (-7.049154693913725)*phi_mod - (-4.566621077573819) -
                (275.492517670099)*eta*eta - (920.0229748595711)*eta - (768.0251778895295));}

    else if (seg_combination_id == 221915 && eta_inner == -1 &&
        eta_middle == -3 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-1.1299567967466654e-05))/(0.0006920964908882979) -
                (280.38055316277917)*phi_mod*phi_mod - (8.814693653630126)*phi_mod - (-5.650242565033967) -
                (-7.203202678109572)*eta*eta - (-28.02324090600661)*eta - (-26.576481435779137));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.021990290995442204))/(-0.005754443613668314) -
                (-260.3555209813958)*phi_mod*phi_mod - (11.199859838054342)*phi_mod - (1.0657049430709473) -
                (-715.8559428989544)*eta*eta - (-664.122104722022)*eta - (-153.83905364062122));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01753625909725288))/(0.005757753709239027) -
                (40.346895275805814)*phi_mod*phi_mod - (-32.636982112778)*phi_mod - (3.3409458666038025) -
                (-434.72979455719747)*eta*eta - (-423.50894226223005)*eta - (-103.03368838529234));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.02052375126355072))/(-0.005765105622580679) -
                (6.398833365820437)*phi_mod*phi_mod - (20.72175995528663)*phi_mod - (2.428586638548626) -
                (-197.77314181236753)*eta*eta - (-168.47697052034846)*eta - (-35.41337843849777));}

    else if (seg_combination_id == 50308 && eta_inner == -3 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01711352268876832))/(0.005740744034360944) -
                (-183.72790133664262)*phi_mod*phi_mod - (2.7101009451008804)*phi_mod - (1.320454184149711) -
                (-535.0420091593614)*eta*eta - (-503.84660318083047)*eta - (-118.47566115410233));}

    else if (seg_combination_id == 50302 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0021182317249698983))/(0.001547147749191784) -
                (-93.04817752128247)*phi_mod*phi_mod - (28.774941827828712)*phi_mod - (-3.314705655844954) -
                (5.483018313537369)*eta*eta - (2.161937635931662)*eta - (-1.1441441280876585));}

    else if (seg_combination_id == 50302 && eta_inner == -3 &&
        eta_middle == -3 && eta_outer == -3 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0013777594688000776))/(0.0014817279854572386) -
                (895.2425932160079)*phi_mod*phi_mod - (279.587228313835)*phi_mod - (20.487192158647485) -
                (-289.1753761076581)*eta*eta - (-316.8701454758565)*eta - (-86.35013481445694));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010250177557470952))/(-0.0033280630714644377) -
                (-6.142237000054535)*phi_mod*phi_mod - (16.174816424148172)*phi_mod - (1.9657659365154283) -
                (587.3603563636382)*eta*eta - (297.4712615411768)*eta - (37.68571894075022));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008275809492653214))/(0.0033690436632211095) -
                (-136.85291929226216)*phi_mod*phi_mod - (2.6883513091542013)*phi_mod - (1.3207849083071794) -
                (-232.44539731019591)*eta*eta - (-104.38585361222478)*eta - (-11.375792274549417));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012210257241968187))/(-0.0034260637760686803) -
                (-90.40619124589259)*phi_mod*phi_mod - (-6.051949972284663)*phi_mod - (1.1459328577729848) -
                (-134.84147493769348)*eta*eta - (-67.75130898891892)*eta - (-8.421803762270935));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -1 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009793923637103928))/(0.0034095670071430904) -
                (-80.48152899834284)*phi_mod*phi_mod - (-2.571711840611345)*phi_mod - (1.7364146236050766) -
                (-207.71885331651515)*eta*eta - (-98.96082376184992)*eta - (-11.568502252101098));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003636877746951051))/(-0.0007400454546075605) -
                (-18.972413438719812)*phi_mod*phi_mod - (-0.6458732088717187)*phi_mod - (0.09530112651053324) -
                (6.115766993007098)*eta*eta - (-19.133963777199728)*eta - (12.672090808605406));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007861157258444104))/(0.0007450901612906088) -
                (-20.426593408728337)*phi_mod*phi_mod - (-2.1664969536719956)*phi_mod - (0.13123292877125228) -
                (25.24384227710211)*eta*eta - (-101.26195732710914)*eta - (101.19769189606012));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003846035453516343))/(-0.0007433801348417605) -
                (-13.25085983443286)*phi_mod*phi_mod - (-1.1105086991735416)*phi_mod - (0.09236852929611558) -
                (4.4176762939085465)*eta*eta - (-11.590429347885491)*eta - (4.311358918436077));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007050968071978481))/(0.0007444633716839889) -
                (-23.215153991518886)*phi_mod*phi_mod - (-1.653437975841697)*phi_mod - (0.11986893585522308) -
                (24.939031440587506)*eta*eta - (-99.03599074671921)*eta - (97.84184022246616));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0004241911228767796))/(-0.0007401224263172167) -
                (-23.043924124146052)*phi_mod*phi_mod - (-1.620128246661531)*phi_mod - (0.10544068181586347) -
                (12.638455073767428)*eta*eta - (-47.17659943870043)*eta - (42.7944454988805));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007479638419219634))/(0.0007441762815293943) -
                (-28.75722303907778)*phi_mod*phi_mod - (-0.19119847393557107)*phi_mod - (0.18718068091847292) -
                (15.449766820544356)*eta*eta - (-59.372193974128855)*eta - (56.4330168479405));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00046506518810272537))/(-0.0007383968233042199) -
                (-16.938365013473106)*phi_mod*phi_mod - (-0.8410997834741336)*phi_mod - (0.12237254698876872) -
                (11.849776131098366)*eta*eta - (-43.27740590685529)*eta - (38.057140480986476));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000747210283714347))/(0.0007387156246537743) -
                (-20.07342415469001)*phi_mod*phi_mod - (-1.4551549899597316)*phi_mod - (0.1387567872380354) -
                (26.26780536893486)*eta*eta - (-105.74378527009377)*eta - (106.0976950140082));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00044267458956814213))/(-0.0007389144998269705) -
                (-20.287704898088485)*phi_mod*phi_mod - (-1.4782183479695092)*phi_mod - (0.07915033083474354) -
                (8.054908118132834)*eta*eta - (-26.802695874988704)*eta - (20.16181080620954));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0008102246020891975))/(0.0007406617200993011) -
                (-18.930658729685906)*phi_mod*phi_mod - (-0.8419449220348527)*phi_mod - (0.12334195890479474) -
                (20.778983955456358)*eta*eta - (-81.56217540729723)*eta - (79.4957319041233));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00040574520488829123))/(-0.0007372260847063611) -
                (-14.990532654983218)*phi_mod*phi_mod - (-0.6106449759261114)*phi_mod - (0.07669614170542798) -
                (10.646604184623058)*eta*eta - (-38.81282290543077)*eta - (34.03213570568081));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007876499335484763))/(0.0007431454817078445) -
                (-25.466920260621023)*phi_mod*phi_mod - (-2.0827831045395313)*phi_mod - (0.1336987765730627) -
                (19.336296800295873)*eta*eta - (-75.25421768167377)*eta - (72.620266045235));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0001699054351695605))/(-0.0007270342911147714) -
                (-23.010837194482516)*phi_mod*phi_mod - (-1.4700788743558597)*phi_mod - (0.10184708611269855) -
                (3.819196496818195)*eta*eta - (-8.75962658105417)*eta - (1.0128221582200767));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0007602932541802054))/(0.0007429809504916272) -
                (-23.308218334419536)*phi_mod*phi_mod - (-0.31063412012173786)*phi_mod - (0.15160600611410335) -
                (31.73067108556813)*eta*eta - (-128.29529892948798)*eta - (129.32519061824956));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0003493861676464292))/(-0.0007373913107817803) -
                (-26.02265569603839)*phi_mod*phi_mod - (-1.3910542222875775)*phi_mod - (0.15858447755843738) -
                (8.349534090635228)*eta*eta - (-28.940125344138927)*eta - (23.40577585586235));}

    else if (seg_combination_id == 232033 && eta_inner == 1 &&
        eta_middle == 1 && eta_outer == 2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.000851186556764028))/(0.0007491737220721542) -
                (-15.565416195332578)*phi_mod*phi_mod - (-1.1069306989827807)*phi_mod - (0.03937857715968049) -
                (23.791134916490325)*eta*eta - (-95.09148938480249)*eta - (94.6381797626788));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007561122237417315))/(-0.0023371300699591728) -
                (-33.07916110440422)*phi_mod*phi_mod - (16.728512595354392)*phi_mod - (2.802341239465068) -
                (-0.30367866647936104)*eta*eta - (6.914440095760029)*eta - (7.079447412313863));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0037194676721102105))/(0.0023105738578064264) -
                (-137.0405737229172)*phi_mod*phi_mod - (3.8453778405304644)*phi_mod - (1.921106289547091) -
                (-875.0729843832107)*eta*eta - (-1727.1517590716992)*eta - (-852.0180330961753));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007184055983186924))/(-0.0023346115897056596) -
                (-135.87026123849552)*phi_mod*phi_mod - (-1.3974940277504502)*phi_mod - (1.4280872248703653) -
                (-156.28103616164822)*eta*eta - (-310.75689056867293)*eta - (-154.36885003888892));}

    else if (seg_combination_id == 50313 && eta_inner == -5 &&
        eta_middle == -6 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.003838400448084941))/(0.0023451856735498947) -
                (-85.13193706408586)*phi_mod*phi_mod - (-4.914156229922074)*phi_mod - (2.379272357696681) -
                (-910.9136795353327)*eta*eta - (-1813.531457618167)*eta - (-902.4435949977076));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00840489838080744))/(-0.003916761292644229) -
                (-500.93590249377473)*phi_mod*phi_mod - (51.02445094488525)*phi_mod - (0.48848378899653366) -
                (-647.7424508469395)*eta*eta - (-1268.5792813703908)*eta - (-620.2498012802439));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008536843588201904))/(0.004276155766411945) -
                (24.223298271968464)*phi_mod*phi_mod - (-31.801803156360258)*phi_mod - (3.774020114929951) -
                (-490.28396145911876)*eta*eta - (-965.2107302756484)*eta - (-474.7565577722265));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.011392004715888856))/(-0.00405827675962729) -
                (-325.2919287018006)*phi_mod*phi_mod - (-44.98842852783421)*phi_mod - (0.2741070314159009) -
                (-809.3176086372432)*eta*eta - (-1559.566297893402)*eta - (-751.081253258537));}

    else if (seg_combination_id == 50308 && eta_inner == -6 &&
        eta_middle == -6 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009659647843348367))/(0.004366686130120386) -
                (-263.4066364049149)*phi_mod*phi_mod - (-11.858890646142212)*phi_mod - (0.9475994625063393) -
                (-838.0613840790007)*eta*eta - (-1620.9112228229058)*eta - (-783.5438978871111));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010956195388752523))/(-0.0032775805436293455) -
                (-30.52711432683087)*phi_mod*phi_mod - (11.774541024466977)*phi_mod - (2.0869200506884154) -
                (-1.354666297410653)*eta*eta - (3.1120355710115564)*eta - (1.2697289880328393));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.009476305026351437))/(0.003293888831993669) -
                (-105.51516610590727)*phi_mod*phi_mod - (5.56889731970688)*phi_mod - (1.380010608372559) -
                (2.1203179705000426)*eta*eta - (6.022911580707176)*eta - (1.8626256099933376));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.010758345258454368))/(-0.0032552513715746697) -
                (-100.86593698348324)*phi_mod*phi_mod - (-4.106649228586025)*phi_mod - (1.3128700836076383) -
                (-7.0398593389992765)*eta*eta - (0.16074782509505148)*eta - (0.9313708584159984));}

    else if (seg_combination_id == 50313 && eta_inner == -1 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00920027268681619))/(0.0032762556636662097) -
                (-18.515850218392412)*phi_mod*phi_mod - (-14.15842264991808)*phi_mod - (2.3101289421842233) -
                (4.48927989462452)*eta*eta - (6.486943812728859)*eta - (1.7825781764028414));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010238211327476572))/(0.0016818185942364602) -
                (110.54204764900064)*phi_mod*phi_mod - (10.57558363680707)*phi_mod - (-2.5943296980831088) -
                (34.71346518107531)*eta*eta - (81.71669474455337)*eta - (44.63535567116913));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002949808389363853))/(0.0012102745657595765) -
                (-23.044829348019952)*phi_mod*phi_mod - (-1.7176564743561848)*phi_mod - (0.5660174201699021) -
                (-218.2949049718878)*eta*eta - (-662.3223748986532)*eta - (-501.74533754866604));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.004226463853014969))/(0.001288768835839238) -
                (61.11532059326878)*phi_mod*phi_mod - (8.446314338985102)*phi_mod - (-1.1564301504089116) -
                (385.83123148359493)*eta*eta - (1101.0891085484006)*eta - (783.6729211806494));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011808302700464847))/(0.001752249015601088) -
                (26.98029225004389)*phi_mod*phi_mod - (-3.3043741763917773)*phi_mod - (-1.8475532477476049) -
                (334.71404645994755)*eta*eta - (964.7475430737967)*eta - (694.2787945382802));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0010024665634927868))/(0.0013042307186002867) -
                (-153.08365635102135)*phi_mod*phi_mod - (-3.20426597948817)*phi_mod - (2.168275201642567) -
                (-200.93014371377663)*eta*eta - (-593.7527450188494)*eta - (-438.8013436450508));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010665798598726638))/(0.0017912400409323766) -
                (1.3117283318404707)*phi_mod*phi_mod - (0.7807834044902424)*phi_mod - (-1.6507660035420355) -
                (135.56867505114616)*eta*eta - (395.72696268346834)*eta - (288.08670338325027));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0047586986099593205))/(0.0015465353962919425) -
                (-10.528405976729147)*phi_mod*phi_mod - (-4.092490140670037)*phi_mod - (-1.6520567475868135) -
                (-9.511217872960923)*eta*eta - (-36.29776634570846)*eta - (-33.461535704060935));}

    else if (seg_combination_id == 232015 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002162557224747728))/(0.0012300935880102876) -
                (-99.3246085834095)*phi_mod*phi_mod - (-0.8246922694087121)*phi_mod - (2.1692858592201127) -
                (328.5144353552081)*eta*eta - (936.7757220022428)*eta - (666.6190020654299));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006263064639479728))/(-0.0024225270690297926) -
                (-89.56592316490854)*phi_mod*phi_mod - (-4.735490021442776)*phi_mod - (1.105280885252687) -
                (-85.11617831000704)*eta*eta - (83.62951506647946)*eta - (-20.00055894234095));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008072778089644758))/(0.0023979468165648797) -
                (-91.34694125664225)*phi_mod*phi_mod - (5.5628154842462685)*phi_mod - (1.0472241384184235) -
                (-88.27126052362813)*eta*eta - (86.23056741671998)*eta - (-20.581192531116727));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006241478395267861))/(-0.002440629993517771) -
                (-94.95126254238443)*phi_mod*phi_mod - (-5.046677449585647)*phi_mod - (1.0298663820764138) -
                (-82.67616655519141)*eta*eta - (79.48586857965905)*eta - (-18.430204144592267));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007886299266695528))/(0.0024146568992860972) -
                (-100.1788320243504)*phi_mod*phi_mod - (6.211984514490091)*phi_mod - (1.0214795844057278) -
                (-82.48291041654954)*eta*eta - (80.33324145928492)*eta - (-19.082829354652954));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0060869694127953875))/(-0.002411443867329805) -
                (-89.6256193621066)*phi_mod*phi_mod - (-5.256579924665541)*phi_mod - (1.1512813325175328) -
                (9.5499237144103)*eta*eta - (-19.390783805829276)*eta - (7.96703824164381));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007729329772273017))/(0.002402196835676802) -
                (-98.00234977697959)*phi_mod*phi_mod - (5.375989321121732)*phi_mod - (1.2204215028400158) -
                (-32.34274819748737)*eta*eta - (26.34590664845015)*eta - (-4.630589028100492));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0061271625379395))/(-0.0024036315307321026) -
                (-97.99165009643289)*phi_mod*phi_mod - (-6.129612675534677)*phi_mod - (1.2845278272864658) -
                (-82.69554304880677)*eta*eta - (79.59714601420225)*eta - (-18.53720100681308));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008082637256582186))/(0.0024141442430911887) -
                (-101.48671539905281)*phi_mod*phi_mod - (4.123571641454593)*phi_mod - (1.303899021364236) -
                (-76.44460699345602)*eta*eta - (73.33031995953209)*eta - (-17.078067739820703));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006757718371539676))/(-0.00242083055432456) -
                (-97.25325324527766)*phi_mod*phi_mod - (-4.786945757836331)*phi_mod - (1.3626409245119737) -
                (-86.71360891837618)*eta*eta - (84.13987029517843)*eta - (-19.796070231433557));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.008438053670738289))/(0.0024035687703583184) -
                (-95.22513857249683)*phi_mod*phi_mod - (4.503844662573401)*phi_mod - (1.225253007342828) -
                (-55.7478279187623)*eta*eta - (49.51598565564384)*eta - (-10.26362654966806));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007206750610029739))/(-0.0024655411540220706) -
                (-86.32125148766525)*phi_mod*phi_mod - (-5.968960560352377)*phi_mod - (1.34267356197835) -
                (-283.33950839167056)*eta*eta - (282.6292238402107)*eta - (-70.29542849438477));}

    else if (seg_combination_id == 50301 && eta_inner == 3 &&
        eta_middle == 3 && eta_outer == 3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007193017954594196))/(0.002434101934724249) -
                (-102.39437651043903)*phi_mod*phi_mod - (5.499170055474103)*phi_mod - (1.0274375780303202) -
                (1122.136777849023)*eta*eta - (-1094.031578742912)*eta - (266.60480882833025));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008467197063312589))/(-0.002607579768752726) -
                (-95.63431580357704)*phi_mod*phi_mod - (-5.00914567641452)*phi_mod - (1.3187715975468934) -
                (-24.041585342458255)*eta*eta - (-10.519061645864257)*eta - (-0.5706184603245446));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006869490530728268))/(0.0025762917427549735) -
                (-93.87782432933108)*phi_mod*phi_mod - (5.579521253515335)*phi_mod - (1.326047531899212) -
                (-19.877059033909273)*eta*eta - (-8.572948668930668)*eta - (-0.3378877921959313));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008363950644457656))/(-0.0025869799125573384) -
                (-98.85947800445179)*phi_mod*phi_mod - (-5.392713889099366)*phi_mod - (1.3777431519594077) -
                (-15.937422265748058)*eta*eta - (-5.206313709468945)*eta - (0.2746556434424214));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0067959188076459525))/(0.002562793409678018) -
                (-96.40713632879739)*phi_mod*phi_mod - (5.774617016623494)*phi_mod - (1.3735787424834738) -
                (-11.166585169113615)*eta*eta - (-3.1588259909030905)*eta - (0.4539582071528144));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008318465473630826))/(-0.0025896261960525755) -
                (-102.11903632997692)*phi_mod*phi_mod - (-5.820700307842)*phi_mod - (1.3893989885866878) -
                (-38.51388429974696)*eta*eta - (-21.853665830464376)*eta - (-2.641088594850176));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0067806053626395845))/(0.002572346069751715) -
                (-99.11969551994031)*phi_mod*phi_mod - (5.5664747699763195)*phi_mod - (1.4062467083551728) -
                (-3.9530902201483142)*eta*eta - (4.11811991375016)*eta - (2.316509022164067));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008603218236604265))/(-0.0026056234138401558) -
                (-102.07134506385061)*phi_mod*phi_mod - (-6.431825566943551)*phi_mod - (1.4110926786190412) -
                (-22.130059605543693)*eta*eta - (-8.625312505663677)*eta - (-0.12816286148284087));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00700141468330124))/(0.002592564426816903) -
                (-100.77511685611579)*phi_mod*phi_mod - (4.741828440667434)*phi_mod - (1.478648711976923) -
                (-23.56661573810778)*eta*eta - (-11.328982541014003)*eta - (-0.8333300933746869));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008642013898803987))/(-0.002562753717937863) -
                (-107.54676882804978)*phi_mod*phi_mod - (-5.23294808680483)*phi_mod - (1.9069049253927515) -
                (-11.510728647697597)*eta*eta - (-0.38839774309905817)*eta - (1.4544553082104354));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.006904493773377153))/(0.002528372365073693) -
                (-96.58203144601231)*phi_mod*phi_mod - (5.329951707082068)*phi_mod - (1.7576169752409816) -
                (-15.238273544703095)*eta*eta - (-4.954800685598916)*eta - (0.3983715744983433));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008338936993284812))/(-0.0026026546305861226) -
                (-103.03159041816136)*phi_mod*phi_mod - (-5.3271191430185505)*phi_mod - (1.4690432433531078) -
                (-26.17637272778271)*eta*eta - (-12.635277154270975)*eta - (-1.2438810702880712));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -2 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.007021220336248706))/(0.0025901063319199134) -
                (-97.6075954176192)*phi_mod*phi_mod - (5.674343313396627)*phi_mod - (1.4424189001062004) -
                (-23.944573929294826)*eta*eta - (-11.26533328013785)*eta - (-0.9495844305266086));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0007202318597426916))/(-0.00043027137385717306) -
                (-3.9477104505008156)*phi_mod*phi_mod - (-0.044971861641602086)*phi_mod - (-0.8909632976345533) -
                (-148.6513108410775)*eta*eta - (-417.0161695179321)*eta - (-292.2029524239422));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002802336127452053))/(-0.00045994544060026424) -
                (-26.85453250784104)*phi_mod*phi_mod - (0.2895126575233447)*phi_mod - (2.0300432590194664) -
                (-206.93180736410048)*eta*eta - (-498.4044121591637)*eta - (-296.3695822549281));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-8.767594779412354e-05))/(-0.00042615726044933975) -
                (-75.46430336824699)*phi_mod*phi_mod - (2.6916550893124347)*phi_mod - (5.957182934432589) -
                (1919.6398765107467)*eta*eta - (5187.817527384869)*eta - (3504.196598970546));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (2.656665962577454e-05))/(-0.0004407999423895023) -
                (-27.31396355232594)*phi_mod*phi_mod - (1.721419808408707)*phi_mod - (2.1532188930755165) -
                (-516.5599014556723)*eta*eta - (-1374.6796155441148)*eta - (-914.5682419169076));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0010426286567128097))/(-0.0003878384772614059) -
                (124.96545196221922)*phi_mod*phi_mod - (-5.457339323883021)*phi_mod - (-10.315525637832518) -
                (155.05339400642566)*eta*eta - (443.32005485086626)*eta - (315.80378951724185));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0023360310879247193))/(-0.00038975555530114164) -
                (-8.880889051433241)*phi_mod*phi_mod - (-0.798343796216511)*phi_mod - (-2.5093955497115292) -
                (7035.637625527843)*eta*eta - (18958.325707624226)*eta - (12770.241359222224));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.00036253076857819226))/(-0.0004553818545219539) -
                (72.23599209039067)*phi_mod*phi_mod - (-6.555600928392428)*phi_mod - (-5.1879547698112916) -
                (-330.9694666866712)*eta*eta - (-828.327870224563)*eta - (-515.7030788252127));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -4 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.003579226134946699))/(-0.000336821944399594) -
                (-156.53030917269743)*phi_mod*phi_mod - (5.935477045691745)*phi_mod - (8.46372849213027) -
                (-1278.047891672063)*eta*eta - (-3356.5409063921397)*eta - (-2203.526168888242));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0054727169955911805))/(0.0013776952073837109) -
                (-28.854635629516856)*phi_mod*phi_mod - (-3.5207574772956236)*phi_mod - (1.205884086883943) -
                (63.69055018350457)*eta*eta - (167.47907631274666)*eta - (108.80876315694624));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.004441592588860485))/(0.0004493664085407154) -
                (-13.541736059270022)*phi_mod*phi_mod - (-2.431238997825324)*phi_mod - (0.6559322655687836) -
                (-40.27426366985399)*eta*eta - (-146.17397529640743)*eta - (-127.22466965131393));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.011338944902878356))/(0.0016664810285772062) -
                (156.8995819947446)*phi_mod*phi_mod - (11.891026406672228)*phi_mod - (-6.052286959856431) -
                (-251.47748458830813)*eta*eta - (-739.4344929654084)*eta - (-542.1221745727102));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.010034098175614656))/(0.0017777898529356814) -
                (8.145733907350138)*phi_mod*phi_mod - (-1.787425495595035)*phi_mod - (-1.1946420640350581) -
                (-277.0370632411038)*eta*eta - (-815.5839296707422)*eta - (-598.9887287257658));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01058686222967667))/(0.0016596690072672772) -
                (-5.165800596327879)*phi_mod*phi_mod - (-5.931372005792239)*phi_mod - (0.758168859279798) -
                (-123.5020236323776)*eta*eta - (-364.74506761093454)*eta - (-268.27027005814006));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.019938848679459328))/(0.002766804418969716) -
                (-24.720368387407497)*phi_mod*phi_mod - (1.1560447737049697)*phi_mod - (0.12488689512566162) -
                (38.443627623403174)*eta*eta - (106.1473720778376)*eta - (73.45411989100656));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0017095527927350348))/(0.0010634238259673186) -
                (-54.04565018155573)*phi_mod*phi_mod - (-4.183346756195673)*phi_mod - (1.7776182865908716) -
                (128.04411740888733)*eta*eta - (341.34062243062283)*eta - (225.86177349146288));}

    else if (seg_combination_id == 231915 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0021021463601847857))/(0.0008795329344767599) -
                (-37.290855760279044)*phi_mod*phi_mod - (-0.7105674301619417)*phi_mod - (-0.41087499816897965) -
                (-45.45831975928348)*eta*eta - (-167.00863694124016)*eta - (-146.48085729148823));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009737841600996805))/(-0.004494088086388471) -
                (-111.94808332674373)*phi_mod*phi_mod - (-4.801760603319644)*phi_mod - (2.4050542500153322) -
                (-1467.5950359459587)*eta*eta - (2403.8001266354413)*eta - (-984.1094070279921));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01670989958140811))/(0.0047009390354604864) -
                (-5.745311124795627)*phi_mod*phi_mod - (-30.481638729383608)*phi_mod - (4.708576542967048) -
                (49.60985660692837)*eta*eta - (-122.22106770912619)*eta - (66.42875198668708));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.009934696093066348))/(-0.004536765513193144) -
                (27.471944617534504)*phi_mod*phi_mod - (33.89221029174979)*phi_mod - (4.590981399045171) -
                (71.6348606421127)*eta*eta - (-110.62887835890655)*eta - (42.56975087784804));}

    else if (seg_combination_id == 50308 && eta_inner == 5 &&
        eta_middle == 4 && eta_outer == 5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.01734039656384798))/(0.004737116673734424) -
                (-150.62828515844427)*phi_mod*phi_mod - (4.298838148736239)*phi_mod - (2.044768700880683) -
                (-840.8032022942128)*eta*eta - (1329.9407766142067)*eta - (-525.5614111013786));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.005293037128192498))/(2.363632351215713e-06) -
                (0.0)*phi_mod*phi_mod - (0.0)*phi_mod - (0.0) -
                (0.0)*eta*eta - (0.0)*eta - (0.0));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0007954519301651714))/(-0.0005663735908085607) -
                (-87.15779748110882)*phi_mod*phi_mod - (8.385606212625609)*phi_mod - (6.629900036896063) -
                (-77.74259786437416)*eta*eta - (-229.20205148111424)*eta - (-168.76525571432308));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012537107336970483))/(-0.0005955512352127096) -
                (-0.5032981194095993)*phi_mod*phi_mod - (-4.857532739918118)*phi_mod - (-0.9855945870079227) -
                (430.5627944609938)*eta*eta - (1234.4292513367334)*eta - (884.4821550092239));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0034320910772651747))/(-0.00021219795071360912) -
                (118.1826532561995)*phi_mod*phi_mod - (-1.229444936450291)*phi_mod - (-7.256401556724492) -
                (3467.9606094175438)*eta*eta - (9992.830210494261)*eta - (7196.9562131630655));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0002167730891343478))/(-0.0004929393925034444) -
                (-991.4120008312168)*phi_mod*phi_mod - (-469.0974907935463)*phi_mod - (-55.28873046721861) -
                (-3499.145795679244)*eta*eta - (-10039.214912587078)*eta - (-7199.999663072018));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0004116876145078377))/(-0.0004557630899349529) -
                (61.4594723807652)*phi_mod*phi_mod - (-13.286053839699452)*phi_mod - (-6.626306963544079) -
                (-170.6889200533242)*eta*eta - (-501.9712269874235)*eta - (-369.16090759393967));}

    else if (seg_combination_id == 221924 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0012295634671856505))/(-0.00035361211631622125) -
                (71.92185185877537)*phi_mod*phi_mod - (-24.824200069009127)*phi_mod - (-9.6758598092454) -
                (-898.5353215918263)*eta*eta - (-2572.5824842126635)*eta - (-1841.1258184910496));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003544406641869663))/(-0.0009141623216280545) -
                (376.5456375549386)*phi_mod*phi_mod - (18.073721251083963)*phi_mod - (-2.079212157437828) -
                (110.08320602096074)*eta*eta - (195.88185983623626)*eta - (86.6670618734585));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001618428738373991))/(0.0009141878469081148) -
                (462.59077437546057)*phi_mod*phi_mod - (-24.623729019338686)*phi_mod - (-2.2353751560103814) -
                (210.54665984376587)*eta*eta - (365.1087364572653)*eta - (158.0160088011054));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003378536717892106))/(-0.0009079655932540614) -
                (404.25025970996273)*phi_mod*phi_mod - (23.387017911461715)*phi_mod - (-2.1435065354426195) -
                (88.32728115493727)*eta*eta - (159.5905263495393)*eta - (71.60223567028602));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014047460393566012))/(0.0009048910827878614) -
                (461.6382134177307)*phi_mod*phi_mod - (-19.525349564042195)*phi_mod - (-2.340197620926241) -
                (179.28037599818816)*eta*eta - (312.2408056605924)*eta - (135.76333530694197));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0035225449553230896))/(-0.00092015224130656) -
                (402.3457129664552)*phi_mod*phi_mod - (22.679305368270803)*phi_mod - (-2.2130912711238144) -
                (110.37911548519655)*eta*eta - (197.0053434595191)*eta - (87.44230071912776));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014040748069395063))/(0.0009094624438321717) -
                (478.0045697828761)*phi_mod*phi_mod - (-21.171282042336056)*phi_mod - (-2.5044193282728164) -
                (132.00683906941708)*eta*eta - (234.0078541584393)*eta - (103.38586346296526));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0033129085249687666))/(-0.000892433530482645) -
                (417.8914876474966)*phi_mod*phi_mod - (21.407629992079446)*phi_mod - (-2.188678626948834) -
                (188.72319325361357)*eta*eta - (328.18645401221414)*eta - (142.53389823664037));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001434516375619823))/(0.0009039126837404318) -
                (473.45087637679774)*phi_mod*phi_mod - (-22.009379518889173)*phi_mod - (-2.349718025608703) -
                (125.26524320835665)*eta*eta - (221.86946249387023)*eta - (98.04277830252717));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003346411703621289))/(-0.0009046783218357072) -
                (403.72554459929336)*phi_mod*phi_mod - (17.540897376086097)*phi_mod - (-2.379370380764467) -
                (208.55012744461254)*eta*eta - (362.1306620345955)*eta - (156.99819517421625));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0014979831901008296))/(0.0008986816416039022) -
                (482.91582166364213)*phi_mod*phi_mod - (-24.261507480465326)*phi_mod - (-2.390242576643488) -
                (145.00383785125038)*eta*eta - (256.55260624130034)*eta - (113.23515242346237));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.003375473724584048))/(-0.0009011523815822811) -
                (356.57675539001815)*phi_mod*phi_mod - (18.35663380714355)*phi_mod - (-2.0225554807017816) -
                (187.23384493823798)*eta*eta - (323.9081686088131)*eta - (139.94518768186293));}

    else if (seg_combination_id == 60402 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.001485176888823704))/(0.0009032714514620289) -
                (458.002574824387)*phi_mod*phi_mod - (-22.21588596349432)*phi_mod - (-2.2550123954689414) -
                (211.99996842122965)*eta*eta - (367.82915354652494)*eta - (159.3852364484833));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008129944220784998))/(-0.0024936214889197976) -
                (-52.96052430355218)*phi_mod*phi_mod - (-3.369243825960823)*phi_mod - (0.6738409426706233) -
                (-162.96663149552435)*eta*eta - (-160.40286887386534)*eta - (-39.21841010384926));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (0.0290465026876599))/(0.001185701238139452) -
                (-89.33083964333734)*phi_mod*phi_mod - (-11.652287563514284)*phi_mod - (0.2880478164444115) -
                (8806.04102236102)*eta*eta - (8621.062848480131)*eta - (2108.2958625926926));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007756913947196847))/(-0.002488791354832841) -
                (-63.32600943714906)*phi_mod*phi_mod - (-4.331560399986648)*phi_mod - (0.7727598123581385) -
                (-260.8814414402705)*eta*eta - (-247.0472742051822)*eta - (-58.34607878013073));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (0.005790287720791155))/(0.0020829929927776505) -
                (-102.2174997922387)*phi_mod*phi_mod - (2.685567447504674)*phi_mod - (1.2903669273513148) -
                (1708.5035762999796)*eta*eta - (1614.712601828115)*eta - (381.53864793792565));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (0.007672710709808872))/(-0.002470267190842342) -
                (-62.51955201031247)*phi_mod*phi_mod - (-5.041325612674774)*phi_mod - (0.7351363987586137) -
                (-173.4983299980265)*eta*eta - (-169.0072337862927)*eta - (-40.98252224301345));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.014008287003451624))/(0.0028167311416332705) -
                (-59.94427087362989)*phi_mod*phi_mod - (-0.68720034997454)*phi_mod - (0.9812043194310837) -
                (9180.654255212048)*eta*eta - (8757.958577867083)*eta - (2088.2704215289436));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (0.006780260401450827))/(-0.002400766703727598) -
                (-63.465489196066905)*phi_mod*phi_mod - (-5.689965193994268)*phi_mod - (0.7885423630886794) -
                (-273.0139536690268)*eta*eta - (-267.6236845041682)*eta - (-65.21684077690027));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.014430374367393969))/(0.0018276678936783055) -
                (-85.28080623693073)*phi_mod*phi_mod - (12.579691192730596)*phi_mod - (1.6747788567003945) -
                (18912.857763512504)*eta*eta - (18280.891344365595)*eta - (4416.430110627593));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008182116219768606))/(-0.0024194297416155817) -
                (-66.05042361009053)*phi_mod*phi_mod - (-4.741329472827045)*phi_mod - (1.2234886994265617) -
                (-191.92197997928355)*eta*eta - (-193.2042751005521)*eta - (-48.15808098353095));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.012078824468265865))/(0.002667244272366073) -
                (-128.1056053459474)*phi_mod*phi_mod - (5.616500741386699)*phi_mod - (1.957319289353757) -
                (1177.8275851323724)*eta*eta - (1085.743271713961)*eta - (250.01578710491756));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (0.008263325101874178))/(-0.0025040565412752193) -
                (-92.2007226913422)*phi_mod*phi_mod - (-5.435764301039481)*phi_mod - (1.3559784779274207) -
                (-68.63734419272312)*eta*eta - (-52.22694749256208)*eta - (-9.71602428627427));}

    else if (seg_combination_id == 50301 && eta_inner == -2 &&
        eta_middle == -2 && eta_outer == -3 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00672895470735027))/(0.0025063845596327143) -
                (-95.91660143317252)*phi_mod*phi_mod - (5.472583364706941)*phi_mod - (1.432033214865539) -
                (29.796828548291654)*eta*eta - (32.76837817523459)*eta - (8.678356280800774));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (0.012983388245923714))/(-0.005583767311226537) -
                (58.98160436077018)*phi_mod*phi_mod - (-32.95053326705213)*phi_mod - (2.1728187159998495) -
                (-439.16066444570384)*eta*eta - (-692.8994928737774)*eta - (-273.2340359173242));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.016658114351644365))/(0.005278618083057737) -
                (56.04206237744994)*phi_mod*phi_mod - (-40.09098721541384)*phi_mod - (4.9346992071595) -
                (487.23333007840273)*eta*eta - (810.5538373470033)*eta - (336.88273319013445));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.022902361450140137))/(-0.0058911298212653875) -
                (-4.57058350247477)*phi_mod*phi_mod - (18.030292658747058)*phi_mod - (2.256279575816326) -
                (2482.7696288721336)*eta*eta - (3877.384585400241)*eta - (1513.7212175192622));}

    else if (seg_combination_id == 50308 && eta_inner == -5 &&
        eta_middle == -4 && eta_outer == -4 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.014228865657725291))/(0.005049425448537089) -
                (-141.9883541165805)*phi_mod*phi_mod - (-2.756820738734554)*phi_mod - (1.302111829728721) -
                (454.1367914838442)*eta*eta - (768.0396975653312)*eta - (324.1143042889245));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 0 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0017002889634005556))/(-0.0005543068276497797) -
                (7.186208143162552)*phi_mod*phi_mod - (-1.587404909879664)*phi_mod - (-0.5599706980221512) -
                (-523.0554883895811)*eta*eta - (-1475.9458243512095)*eta - (-1040.7983548028528));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 1 && 
        plus_sign == 0){
        return ((1./sagitta - (0.004784988394958197))/(-0.0008354018245704475) -
                (20.26442524835368)*phi_mod*phi_mod - (-1.5273482804959786)*phi_mod - (-1.6647241974512563) -
                (-407.8399917337828)*eta*eta - (-1157.3279758904976)*eta - (-820.6395826056943));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.00451645385222656))/(-7.695630164581499e-05) -
                (-94.40624189946658)*phi_mod*phi_mod - (7.551943446884511)*phi_mod - (5.817356005390516) -
                (643.9493603881866)*eta*eta - (1807.085377895671)*eta - (1267.0712164115812));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 3 && 
        plus_sign == 0){
        return ((1./sagitta - (4.6679831011874946e-05))/(-0.00041446066100910624) -
                (-124.4714973112849)*phi_mod*phi_mod - (9.346039778028693)*phi_mod - (10.588613022628138) -
                (-439.2562598113285)*eta*eta - (-1248.6911313843698)*eta - (-887.3279812823197));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 4 && 
        plus_sign == 0){
        return ((1./sagitta - (0.000528919043614355))/(-0.00043328193986964694) -
                (29.26094804592386)*phi_mod*phi_mod - (-0.9399594433840885)*phi_mod - (-2.486365063335541) -
                (-380.7053114228048)*eta*eta - (-1066.3804369002771)*eta - (-746.1062984573972));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 5 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.005166157877093764))/(4.702370250108797e-05) -
                (82.82905925735892)*phi_mod*phi_mod - (-5.125900937200438)*phi_mod - (-5.49323511077818) -
                (-553.9195293744094)*eta*eta - (-1479.0962373973582)*eta - (-984.8325756564507));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 6 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0021863504731429043))/(-0.00022361269506198465) -
                (-58.544205039024526)*phi_mod*phi_mod - (4.650375891056857)*phi_mod - (3.535575550326819) -
                (-1215.6151430420505)*eta*eta - (-3430.6314377919916)*eta - (-2419.2980354545866));}

    else if (seg_combination_id == 222024 && eta_inner == -2 &&
        eta_middle == -3 && eta_outer == -6 && phi_index == 7 && 
        plus_sign == 0){
        return ((1./sagitta - (0.0012699931527861354))/(-0.0005268891561384347) -
                (-63.23270180982145)*phi_mod*phi_mod - (4.835867640338965)*phi_mod - (5.339769756569369) -
                (55.443505771506324)*eta*eta - (144.59247245052046)*eta - (93.49269131036672));}

    else if (seg_combination_id == 60402 && eta_inner == 5 &&
        eta_middle == 5 && eta_outer == 4 && phi_index == 2 && 
        plus_sign == 0){
        return ((1./sagitta - (-0.0013797710294920884))/(-0.0005915882032526452) -
                (86.4537658885153)*phi_mod*phi_mod - (-1.009511248826002)*phi_mod - (-1.426719975943488) -
                (-2508.543111790637)*eta*eta - (4007.62516782773)*eta - (-1599.5106289023413));}

    else if (seg_combination_id == 50302 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.002824750852916972))/(0.0012923321450967246) -
                (-1479.3277054654732)*phi_mod*phi_mod - (729.657744418049)*phi_mod - (-88.48322393846658) -
                (521.2837709110667)*eta*eta - (952.5768188988449)*eta - (434.6715992385374));}

    else if (seg_combination_id == 50302 && eta_inner == -5 &&
        eta_middle == -5 && eta_outer == -5 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00118560385804896))/(0.0012363711684514084) -
                (3.2933912173636006)*phi_mod*phi_mod - (-0.6579644643528488)*phi_mod - (-0.10077435238883622) -
                (81.99707675573427)*eta*eta - (140.57562411710407)*eta - (60.20764696221936));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 0 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00017250608824586597))/(0.0006772793125692956) -
                (-157.67632355032558)*phi_mod*phi_mod - (6.971639232311895)*phi_mod - (3.003491408099558) -
                (125.9696471199207)*eta*eta - (-282.3879052617833)*eta - (153.82153812031265));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 1 && 
        plus_sign == 1){
        return ((1./sagitta - (2.280668104234779e-05))/(0.0006609593420585258) -
                (-143.0504890397897)*phi_mod*phi_mod - (6.772514432004957)*phi_mod - (2.7986325962575673) -
                (-280.77980816414777)*eta*eta - (775.0027087225126)*eta - (-533.3367196059145));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 2 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00011866211428343613))/(0.0006468967517980807) -
                (-144.1904409510021)*phi_mod*phi_mod - (7.694794941151987)*phi_mod - (2.767695802966982) -
                (138.32645971332948)*eta*eta - (-311.17362951398167)*eta - (170.32466180446926));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 3 && 
        plus_sign == 1){
        return ((1./sagitta - (0.00014727475146614034))/(0.000645369922939341) -
                (-139.44235469310317)*phi_mod*phi_mod - (6.106376282990364)*phi_mod - (2.851639886902043) -
                (52.95341354844239)*eta*eta - (-83.9681859471368)*eta - (19.236885228392907));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 4 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0004395529065126237))/(0.0006746500668529803) -
                (-151.30110815384984)*phi_mod*phi_mod - (7.256104619117163)*phi_mod - (3.3076775315035163) -
                (-48.650200303347916)*eta*eta - (161.0496053279215)*eta - (-127.34124462563764));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 5 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0011349924880853074))/(0.0007321948871866204) -
                (-163.53827717307198)*phi_mod*phi_mod - (7.0026128748411125)*phi_mod - (2.610886797055122) -
                (137.6622923613983)*eta*eta - (-333.2135113837593)*eta - (200.2647053760858));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 6 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.00012820980969111286))/(0.0006583131103304101) -
                (-145.96659305085447)*phi_mod*phi_mod - (6.48377029831945)*phi_mod - (3.0301061943260157) -
                (314.01607700651226)*eta*eta - (-771.3121831375558)*eta - (471.5643516373517));}

    else if (seg_combination_id == 221915 && eta_inner == 3 &&
        eta_middle == 4 && eta_outer == 6 && phi_index == 7 && 
        plus_sign == 1){
        return ((1./sagitta - (-0.0010694599538311205))/(0.0007700563046595991) -
                (-208.19860764631298)*phi_mod*phi_mod - (14.109986529645923)*phi_mod - (2.716266202376444) -
                (696.1618901356879)*eta*eta - (-1798.0246035161329)*eta - (1160.4417979356497));}

    return PASS;}