#include <iomanip>
#include <ibse_testing.h>
#include <ibse_internal.h>
#include <iostream>

int
main()
{
#if 0
   using namespace Eigen;

   MatrixXd A(93,7);
   A << -1.826818745214441, 0.920911714685815, -0.067725118595410, -0.383842266446899, 1,0,0,
      -0.350014635050764, -0.211394414700107, 0.740585124933297, -0.637844838190727, 0, 1, 0,
      2.914182886498902,  0.327465996148384, 0.668540907113539,  0.667696817670847,  0, 0, 1,
      -1.825133820368331,  0.920888568346659,-0.067883691557414, -0.383869864737105, 1, 0, 0,
      -0.349027267521346, -0.211305252851435, 0.740582256126461, -0.637877759427570, 0, 1, 0,
      2.911761202445561,  0.327588703636338, 0.668528047486030,  0.667649544985005,  0, 0, 1,
      -1.823243995858613,  0.920907137470500,-0.067890530478319, -0.383823918788120, 1, 0, 0,
      -0.347061558901420, -0.211167455751905, 0.740788773073268, -0.637683448057481, 0, 1, 0,
      2.910235114134149,  0.327625136999230, 0.668298399045354,  0.667861437759556,  0, 0, 1,
      -1.821350184661264,  0.920925791143364,-0.067897403739137, -0.383777888222912, 1, 0, 0,
      -0.345092263781195, -0.211029343500350, 0.740995725023760, -0.637488658247901, 0, 1, 0,
      2.908704610291839,  0.327661625927060, 0.668068196951765,  0.668073783973625,  0, 0, 1,
      -1.819693636097147,  0.920929757260806,-0.067924821144659, -0.383763529859487, 1, 0, 0,
      -0.343185041105822, -0.210897722097343, 0.741205065231730, -0.637288826259470, 0, 1, 0,
      2.907263669817004,  0.327735226962100, 0.667833149771324,  0.668272662212669,  0, 0, 1,
      -1.819140505523691,  0.920868973506427,-0.068041216736388, -0.383888631062896, 1, 0, 0,
      -0.341620457375452, -0.210799621300796, 0.741416939019445, -0.637074718377343, 0, 1, 0,
      2.906274852796657,  0.327968912999012, 0.667586001921222,  0.668404874867155,  0, 0, 1,
      -1.818581771923529,  0.920807617423555,-0.068158704152669, -0.384015000009256, 1, 0, 0,
      -0.340041228002450, -0.210700503485736, 0.741630848474065, -0.636858524251359, 0, 1, 0,
      2.905276193100354,  0.328204855257714, 0.667336401771244,  0.668538329002456,  0, 0, 1,
      -1.818023163152364,  0.920746318616964,-0.068276077741496, -0.384141341185070, 1, 0, 0,
      -0.338463559279831, -0.210601384480840, 0.741844599118986, -0.636642461400953, 0, 1, 0,
      2.904277931400415,  0.328440633378363, 0.667086908889799,  0.668671655134111,  0, 0, 1,
      -1.817942171439359,  0.920689493620811,-0.068375517509944, -0.384259827461717, 1, 0, 0,
      -0.337557429647823, -0.210548509751889, 0.741978325296587, -0.636504092595435, 0, 1, 0,
      2.903743577721744,  0.328633764906955, 0.666927974712957,  0.668735295290865, 0, 0, 1,
      -1.817950856236956,  0.920633508288164,-0.068471565413209, -0.384376840439584, 1, 0, 0,
      -0.336777558229425, -0.210504306298780, 0.742097011749739, -0.636380333999412, 0, 1, 0,
      2.903296399320619,  0.328818867716137, 0.666786050545000,  0.668785826966979, 0, 0, 1,
      -1.817959472948590,  0.920577509927109,-0.068567608291839, -0.384493892133286, 1, 0, 0,
      -0.335997677023568, -0.210460067252754, 0.742215717580014, -0.636256560239195, 0, 1, 0,
      2.902849114947052,  0.329003997067865, 0.666644083037256,  0.668836346383064, 0, 0, 1,
      -1.817966851511652,  0.920546851669050,-0.068630160216896, -0.384556156348609, 1, 0, 0,
      -0.335289069388970, -0.210394741430305, 0.742347343923566, -0.636124607402446, 0, 1, 0,
      2.902627939359020,  0.329131568002050, 0.666491083566047,  0.668926071301068, 0, 0, 1,
      -1.817973110720693,  0.920540760797973,-0.068660240974073, -0.384565344873461, 1, 0, 0,
      -0.334650523794801, -0.210309157025885, 0.742491217734932, -0.635984964850846, 0, 1, 0,
      2.902625701475452,  0.329203267965741, 0.666327688419634,  0.669053544542435, 0, 0, 1,
      -1.817979429121194,  0.920534683331815,-0.068690348318131, -0.384574556781795, 1, 0, 0,
      -0.334011410439982, -0.210223484377166, 0.742635204275505, -0.635845183106538, 0, 1, 0,
      2.902623386928139,  0.329275022272118, 0.666164128658544,  0.669181119196503, 0, 0, 1,
      -1.817985804667271,  0.920528621388706,-0.068720471962030, -0.384583788959880, 1, 0, 0,
      -0.333371947689648, -0.210137752728786, 0.742779254316188, -0.635705309895078, 0, 1, 0,
      2.902620996343567,  0.329346806384269, 0.666000460122977,  0.669308751648803, 0, 0, 1,
      -1.817992222280452,  0.920522589172515,-0.068750541151976, -0.384593019695503, 1, 0, 0,
      -0.332733637508032, -0.210052163468477, 0.742923029541560, -0.635565673776572, 0, 1, 0,
      2.902618535473998,  0.329418451713633, 0.665837067271090,  0.669436142139407, 0, 0, 1,
      -1.817998700210492,  0.920516569449568,-0.068780641693084, -0.384602275312980, 1, 0, 0,
      -0.332094658424832, -0.209966472373200, 0.743066940242579, -0.635425876303854, 0, 1, 0,
      2.902615997378400,  0.329490162716261, 0.665673483868521,  0.669563654200550, 0, 0, 1,
      -1.818005230095978,  0.920510570070276,-0.068810734448228, -0.384611543797111, 1, 0, 0,
      -0.331455841246113, -0.209880790843912, 0.743210799286582, -0.635286099223760, 0, 1, 0,
      2.902613385264457,  0.329561846141260, 0.665509922583354,  0.669691122025273, 0, 0, 1,
      -1.818011815034891,  0.920504588183890,-0.068840833717893, -0.384620829552597, 1, 0, 0,
      -0.330816882398394, -0.209795078163434, 0.743354675037150, -0.635146276112130, 0, 1, 0,
      2.902610697890875,  0.329633536053449, 0.665346305688800,  0.669818606187870, 0, 0, 1,
      -1.818018452226285,  0.920498626335495,-0.068870926704146, -0.384630128632555, 1, 0, 0,
      -0.330178053561916, -0.209709370774905, 0.743498506318377, -0.635006466419085, 0, 1, 0,
      2.902607936394737,  0.329705201970149, 0.665182702751486,  0.669946052482264, 0, 0, 1,
      -1.818025143987630,  0.920492682436557,-0.068901023946690, -0.384639444293492, 1, 0, 0,
      -0.329539130995866, -0.209623638660672, 0.743642343505781, -0.634866621178376, 0, 1, 0,
      2.902605099811700,  0.329776868991700, 0.665019056471982,  0.670073505545252, 0, 0, 1,
      -1.818031890114330,  0.920486756693581,-0.068931124442717, -0.384648776231896, 1, 0, 0,
      -0.328900135988047, -0.209537884671558, 0.743786181800362, -0.634726745042391, 0, 1, 0,
      2.902602188203604,  0.329848534726170, 0.664855372293706,  0.670200961125167, 0, 0, 1,
      -1.818038687833188,  0.920480851523427,-0.068961215895210, -0.384658120632124, 1, 0, 0,
      -0.328261329590236, -0.209452143843496, 0.743929962442640, -0.634586895158364, 0, 1, 0,
      2.902599202776783,  0.329920169897730, 0.664691717091182,  0.670328367154715, 0, 0, 1,
      -1.818045539732939,  0.920474964655896,-0.068991309848666, -0.384667481075310, 1, 0, 0,
      -0.327622466728229, -0.209366383285425, 0.744073740597242, -0.634447017877254, 0, 1, 0,
      2.902596142405546,  0.329991801991260, 0.664528028083636,  0.670455772515658, 0, 0, 1,
      -1.818052446979668,  0.920469095121464,-0.069021411314584, -0.384676859129013, 1, 0, 0,
      -0.326983441012373, -0.209280588708523, 0.744217540199015, -0.634307089896437, 0, 1, 0,
      2.902593006538246,  0.330063442930345, 0.664364278000568,  0.670583198418136, 0, 0, 1,
      -1.818059404663960,  0.920463247071779,-0.069051498978650, -0.384686248149175, 1, 0, 0,
      -0.326344704927346, -0.209194820865400, 0.744361259429446, -0.634167210300180, 0, 1, 0,
      2.902589797414048,  0.330135041989456, 0.664200582795303,  0.670710554636804, 0, 0, 1,
      -1.818066414527797,  0.920457418979545,-0.069081580610424, -0.384695650546394, 1, 0, 0,
      -0.325706093536091, -0.209109057619670, 0.744504935414430, -0.634027342981674, 0, 1, 0,
      2.902586514273405,  0.330206617665911, 0.664036900215156,  0.670837874069226, 0, 0, 1,
      -1.818073480735657,  0.920451607400518,-0.069111674022477, -0.384705071893751, 1, 0, 0,
      -0.325067228690402, -0.209023248182814, 0.744648653225201, -0.633887405114002, 0, 1, 0,
      2.902583155146121,  0.330278212339341, 0.663873133329605,  0.670965232102398, 0, 0, 1,
      -1.818080599893403,  0.920445815154455,-0.069141764664710, -0.384714507644061, 1, 0, 0,
      -0.324428419279453, -0.208937434036895, 0.744792343366915, -0.633747464348544, 0, 1, 0,
      2.902579721618056,  0.330349791389129, 0.663709361308985,  0.671092567153064, 0, 0, 1,
      -1.818087771324951,  0.920440042765659,-0.069171849780408, -0.384723956927729, 1, 0, 0,
      -0.323789723829131, -0.208851623047912, 0.744935992680477, -0.633607533511105, 0, 1, 0,
      2.902576214029963,  0.330421348260709, 0.663545599163862,  0.671219867559405, 0, 0, 1,
      -1.818094997175477,  0.920434288501249,-0.069201938398739, -0.384733422580297, 1, 0, 0,
      -0.323150950654928, -0.208765789462527, 0.745079644278377, -0.633467570605938, 0, 1, 0,
      2.902572631331969,  0.330492904430005, 0.663381797746334,  0.671347171527188, 0, 0, 1;


   MatrixXd b(93,1);
   b << -7.474886380045068, -4.558966589183407, 3.998742231730644, -7.435802749900581,
      -4.535437137603496, 3.975299980066662, -7.252450228567039, -4.528842693681246,
      3.994186100101991, -7.172698650554458, -4.512201906038427,  4.015987716811079,
      -7.002865758390403, -4.548656668301699,  4.053256806517166, -7.072713501065699,
      -4.513892100449208,  4.005678316995167, -7.159224417999938, -4.580508274574048,
      4.014380086709797, -7.232073064682454, -4.592540226901596,  4.047118938243006,
      -7.208249186774018, -4.569441937259032,  4.056966717535424, -7.139695255019933,
      -4.564283609168802,  4.044900732603819, -7.083376602396931, -4.605876444843634,
      4.069656604377119, -7.066286223085657, -4.626864960544843,  4.067058577499496,
      -7.230797954636142, -4.699997045498545,  4.052132642601270, -7.293744306958615,
      -4.656457770261286,  4.003360745558926, -7.425147517293278, -4.647913070215544,
      4.011933336466721, -7.404189672834867, -4.681339409593865,  3.949982845819572,
      -7.459515873383609, -4.619183531070021,  3.961938308912632, -7.415010346277677,
      -4.628380801751105,  3.998061222264716, -7.231756377152649, -4.612149425805118,
      4.020145002168147, -7.056096122050409, -4.558286997623232,  4.169060886504798,
      -6.971484722903392, -4.483736615487556,  4.202805086862919, -7.058662828824299,
      -4.502798398376679,  4.153980854343287, -7.065422026930038, -4.460877454586688,
      4.134897893023726, -7.185505585907555, -4.537069053599560,  3.984828198537615,
      -7.281333727294587, -4.572086898273336,  3.917520887844716, -7.256787117557517,
      -4.604968356272225,  3.947459750052276, -7.169232220843742, -4.602073557753809,
      3.994866715816579, -7.013988263116910, -4.595859362724506,  4.107633137101675,
      -7.186189560771510, -4.625225418349661,  4.048265554507362, -7.294091211842185,
      -4.650420002823703,  3.954546503565719, -7.258725918257213, -4.651472511267330,
      3.964032653239050;

   double scale0 = 4.598800070825616;
   Eigen::Vector3d g0(74.358527316940723, -11.199811331744774, -66.045995060817589);
   Eigen::Vector3d bias0(-93.459683757775437, -21.090822810256515,  17.869665196499970);
   std::vector<double>t = 
      { 0, 0.009997499999997,  0.019992166999998,  0.030009583000002, 0.040078082999997,  
        0.049982667000002,  0.059983750000001, 0.069978749999997, 0.079975333000000,
        0.089971499999997, 0.099969500000000,  0.109972499999998,  0.119962749999999,
        0.129962083000002,  0.139967083000002,  0.149954250000000, 0.159952083000000,
        0.169947583000003,  0.179945500000002, 0.189941583000000,  0.199939333000003,
        0.209938417000004, 0.219934750000000,  0.229932167000001,  0.239932332999999,
        0.249928167000000,  0.259922250000002,  0.269920499999998, 0.279918082999998,
        0.289914082999999, 0.299911500000000};

   double out_scale;
   Eigen::Vector3d out_g;
   Eigen::Vector3d out_bias;
   estimateScale(A, b, scale0, g0, bias0, t, 1.2, out_scale, out_g, out_bias);
#endif



   const size_t N = 12;

   using namespace Eigen;
   using namespace ibse;

   // Use random data

   MatrixXd A(N,7);
   A << 0.845178185054037, 0.581446487875398, 0.614713419117141, 0.538596678045340, 0.640311825162758, 0.728661681678271, 0.030889548744952,
       0.738640291995402, 0.928313062314188, 0.362411462273053, 0.695163039444332, 0.417028951642886, 0.737841653797590, 0.939141706069548,
       0.585987035826476, 0.580090365758442, 0.049532579042061, 0.499116013482589, 0.205975515532243, 0.063404500692818, 0.301306064586392,
       0.246734525985975, 0.016982938337261, 0.489569989177322, 0.535801055751113, 0.947933121293169, 0.860440563038232, 0.295533834475356,
       0.666416217319468, 0.120859571098558, 0.192510396062075, 0.445183165296042, 0.082071207097726, 0.934405118961213, 0.332936281836175,
       0.083482813602623, 0.862710718699670, 0.123083747545945, 0.123932277598070, 0.105709426581721, 0.984398312240972, 0.467068187028852,
       0.625959785171583, 0.484296511212102, 0.205494170907680, 0.490357293468018, 0.142041121903998, 0.858938816683866, 0.648198406466157,
       0.660944557947342, 0.844855674576263, 0.146514910614890, 0.852998155340816, 0.166460440876421, 0.785558989265031, 0.025228181493036,
       0.729751855317221, 0.209405084020935, 0.189072174472614, 0.873927405861733, 0.620958643935308, 0.513377418587575, 0.842206612419334,
       0.890752116325322, 0.552291341538775, 0.042652410911143, 0.270294332292698, 0.573709764841198, 0.177602460505865, 0.559032544988695,
       0.982303222883606, 0.629883385064421, 0.635197916859882, 0.208461358751314, 0.052077890285870, 0.398589496735843, 0.854099949273443,
       0.769029085335896, 0.031991015762567, 0.281866855880430, 0.564979570738201, 0.931201384608250, 0.133931250987971, 0.347879194327261;

   MatrixXd b(N,1);
   b << 0.446026648055103, 0.054239484441130, 0.177107533789109, 0.662808061960974, 
       0.330828995203305, 0.898486137834300, 0.118155198446711, 0.988417928784981,
       0.539982099037929, 0.706917419322763, 0.999491620097705, 0.287849344815137;


   double scale0 = 0.414522538893108;
   Eigen::Vector3d g0(0.464839941625137, 0.763957078491957, 0.818204038907671);
   Eigen::Vector3d bias0(0.100221540195492, 0.178116953886766, 0.359634913482080);
   std::vector<double>t = { 0.0333, 0.0666, 0.0999, 0.1332, 0.1665, 0.1998,
                            0.2331, 0.2664, 0.2997, 0.333, 0.3663, 0.3996};


   {
       std::vector<double> x0;
       x0.push_back(scale0);
       x0.push_back(g0.x()); x0.push_back(g0.y()); x0.push_back(g0.z());
       x0.push_back(bias0.x()); x0.push_back(bias0.y()); x0.push_back(bias0.z());
       
       OptimizationData data;
       data.A = &A;
       data.szFreqRange = 1;

       // Precompute the FFT of 'b'
       const size_t Nb = b.rows() / 3;
       cv::Mat Ai(3, Nb, CV_64F);
       for (size_t ii=0; ii<Nb; ++ii)
          for (size_t jj=0; jj<3; ++jj)
             Ai.at<double>(jj, ii) = b(ii*3+jj,0);
       
       cv::Mat Fi(3, Nb, CV_64F);
       cv::dft(Ai, Fi, cv::DFT_ROWS);
       cv::Mat Fit(3, data.szFreqRange, CV_64F);
       Fit = cv::abs(Fi(cv::Range(0, 3), cv::Range(0, data.szFreqRange)));
       data.Fi = &Fit;

       double obj = freqDomainObjective(x0.size(), x0.data(), 0, static_cast<void*>(&data));
       APX_EQ_EPS(obj, 41.540615885454798, 1e-6);
   }


   double out_scale;
   Eigen::Vector3d out_g;
   Eigen::Vector3d out_bias;
   optimizeEstimate(A, b, scale0, g0, bias0, t, 1.2, out_scale, out_g, out_bias);

   // std::cout << "scale:   " << out_scale << std::endl;
   // std::cout << "gravity: " << out_g.transpose() << std::endl;
   // std::cout << "bias:    " << out_bias.transpose() << std::endl;

   // MATLAB's fmincon results:
   //
   // scale = -3.872456906839172
   //
   // gravity =  3.383628993898788  7.053199584415069  5.902832409450110
   //
   // bias = 0.063960341938420 -3.419191775642572 -3.284528287649086

   // This code's results (different because we use different optimization techniques)
   //  scale = 3.91597
   //  g     = [-7.74843 -3.98061 -4.51978]
   //  bias  = [-1.24383 2.59974 5.77878]

   
}
