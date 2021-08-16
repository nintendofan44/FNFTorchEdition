#define UL_BITS 6
#define UL_SIZE 64
static unsigned short _E[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L1[UL_SIZE] = {0,97,98,99,100,101,102,103,104,105,106,107,108,109,110,111,112,113,114,115,116,117,118,119,120,121,122,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L3[UL_SIZE] = {224,225,226,227,228,229,230,231,232,233,234,235,236,237,238,239,240,241,242,243,244,245,246,0,248,249,250,251,252,253,254,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L4[UL_SIZE] = {257,0,259,0,261,0,263,0,265,0,267,0,269,0,271,0,273,0,275,0,277,0,279,0,281,0,283,0,285,0,287,0,289,0,291,0,293,0,295,0,297,0,299,0,301,0,303,0,105,0,307,0,309,0,311,0,0,314,0,316,0,318,0,320};
static unsigned short L5[UL_SIZE] = {0,322,0,324,0,326,0,328,0,0,331,0,333,0,335,0,337,0,339,0,341,0,343,0,345,0,347,0,349,0,351,0,353,0,355,0,357,0,359,0,361,0,363,0,365,0,367,0,369,0,371,0,373,0,375,0,255,378,0,380,0,382,0,0};
static unsigned short L6[UL_SIZE] = {0,595,387,0,389,0,596,392,0,598,599,396,0,0,477,601,603,402,0,608,611,0,617,616,409,0,0,0,623,626,0,629,417,0,419,0,421,0,640,424,0,643,0,0,429,0,648,432,0,650,651,436,0,438,0,658,441,0,0,0,445,0,0,0};
static unsigned short L7[UL_SIZE] = {0,0,0,0,454,454,0,457,457,0,460,460,0,462,0,464,0,466,0,468,0,470,0,472,0,474,0,476,0,0,479,0,481,0,483,0,485,0,487,0,489,0,491,0,493,0,495,0,0,499,499,0,501,0,405,447,505,0,507,0,509,0,511,0};
static unsigned short L8[UL_SIZE] = {513,0,515,0,517,0,519,0,521,0,523,0,525,0,527,0,529,0,531,0,533,0,535,0,537,0,539,0,541,0,543,0,414,0,547,0,549,0,551,0,553,0,555,0,557,0,559,0,561,0,563,0,0,0,0,0,0,0,11365,572,0,410,11366,0};
static unsigned short L9[UL_SIZE] = {0,578,0,384,649,652,583,0,585,0,587,0,589,0,591,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L13[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,881,0,883,0,0,0,887,0,0,0,0,0,0,0,0,1011};
static unsigned short L14[UL_SIZE] = {0,0,0,0,0,0,940,0,941,942,943,0,972,0,973,974,0,945,946,947,948,949,950,951,952,953,954,955,956,957,958,959,960,961,0,963,964,965,966,967,968,969,970,971,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L15[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,983,0,0,0,0,0,0,0,0,985,0,987,0,989,0,991,0,993,0,995,0,997,0,999,0,1001,0,1003,0,1005,0,1007,0,0,0,0,0,952,0,0,1016,0,1010,1019,0,0,891,892,893};
static unsigned short L16[UL_SIZE] = {1104,1105,1106,1107,1108,1109,1110,1111,1112,1113,1114,1115,1116,1117,1118,1119,1072,1073,1074,1075,1076,1077,1078,1079,1080,1081,1082,1083,1084,1085,1086,1087,1088,1089,1090,1091,1092,1093,1094,1095,1096,1097,1098,1099,1100,1101,1102,1103,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L17[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1121,0,1123,0,1125,0,1127,0,1129,0,1131,0,1133,0,1135,0,1137,0,1139,0,1141,0,1143,0,1145,0,1147,0,1149,0,1151,0};
static unsigned short L18[UL_SIZE] = {1153,0,0,0,0,0,0,0,0,0,1163,0,1165,0,1167,0,1169,0,1171,0,1173,0,1175,0,1177,0,1179,0,1181,0,1183,0,1185,0,1187,0,1189,0,1191,0,1193,0,1195,0,1197,0,1199,0,1201,0,1203,0,1205,0,1207,0,1209,0,1211,0,1213,0,1215,0};
static unsigned short L19[UL_SIZE] = {1231,1218,0,1220,0,1222,0,1224,0,1226,0,1228,0,1230,0,0,1233,0,1235,0,1237,0,1239,0,1241,0,1243,0,1245,0,1247,0,1249,0,1251,0,1253,0,1255,0,1257,0,1259,0,1261,0,1263,0,1265,0,1267,0,1269,0,1271,0,1273,0,1275,0,1277,0,1279,0};
static unsigned short L20[UL_SIZE] = {1281,0,1283,0,1285,0,1287,0,1289,0,1291,0,1293,0,1295,0,1297,0,1299,0,1301,0,1303,0,1305,0,1307,0,1309,0,1311,0,1313,0,1315,0,1317,0,1319,0,1321,0,1323,0,1325,0,1327,0,0,1377,1378,1379,1380,1381,1382,1383,1384,1385,1386,1387,1388,1389,1390,1391};
static unsigned short L21[UL_SIZE] = {1392,1393,1394,1395,1396,1397,1398,1399,1400,1401,1402,1403,1404,1405,1406,1407,1408,1409,1410,1411,1412,1413,1414,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L66[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11520,11521,11522,11523,11524,11525,11526,11527,11528,11529,11530,11531,11532,11533,11534,11535,11536,11537,11538,11539,11540,11541,11542,11543,11544,11545,11546,11547,11548,11549,11550,11551};
static unsigned short L67[UL_SIZE] = {11552,11553,11554,11555,11556,11557,0,11559,0,0,0,0,0,11565,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L78[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,43888,43889,43890,43891,43892,43893,43894,43895,43896,43897,43898,43899,43900,43901,43902,43903,43904,43905,43906,43907,43908,43909,43910,43911,43912,43913,43914,43915,43916,43917,43918,43919};
static unsigned short L79[UL_SIZE] = {43920,43921,43922,43923,43924,43925,43926,43927,43928,43929,43930,43931,43932,43933,43934,43935,43936,43937,43938,43939,43940,43941,43942,43943,43944,43945,43946,43947,43948,43949,43950,43951,43952,43953,43954,43955,43956,43957,43958,43959,43960,43961,43962,43963,43964,43965,43966,43967,5112,5113,5114,5115,5116,5117,0,0,0,0,0,0,0,0,0,0};
static unsigned short L120[UL_SIZE] = {7681,0,7683,0,7685,0,7687,0,7689,0,7691,0,7693,0,7695,0,7697,0,7699,0,7701,0,7703,0,7705,0,7707,0,7709,0,7711,0,7713,0,7715,0,7717,0,7719,0,7721,0,7723,0,7725,0,7727,0,7729,0,7731,0,7733,0,7735,0,7737,0,7739,0,7741,0,7743,0};
static unsigned short L121[UL_SIZE] = {7745,0,7747,0,7749,0,7751,0,7753,0,7755,0,7757,0,7759,0,7761,0,7763,0,7765,0,7767,0,7769,0,7771,0,7773,0,7775,0,7777,0,7779,0,7781,0,7783,0,7785,0,7787,0,7789,0,7791,0,7793,0,7795,0,7797,0,7799,0,7801,0,7803,0,7805,0,7807,0};
static unsigned short L122[UL_SIZE] = {7809,0,7811,0,7813,0,7815,0,7817,0,7819,0,7821,0,7823,0,7825,0,7827,0,7829,0,0,0,0,0,0,0,0,0,223,0,7841,0,7843,0,7845,0,7847,0,7849,0,7851,0,7853,0,7855,0,7857,0,7859,0,7861,0,7863,0,7865,0,7867,0,7869,0,7871,0};
static unsigned short L123[UL_SIZE] = {7873,0,7875,0,7877,0,7879,0,7881,0,7883,0,7885,0,7887,0,7889,0,7891,0,7893,0,7895,0,7897,0,7899,0,7901,0,7903,0,7905,0,7907,0,7909,0,7911,0,7913,0,7915,0,7917,0,7919,0,7921,0,7923,0,7925,0,7927,0,7929,0,7931,0,7933,0,7935,0};
static unsigned short L124[UL_SIZE] = {0,0,0,0,0,0,0,0,7936,7937,7938,7939,7940,7941,7942,7943,0,0,0,0,0,0,0,0,7952,7953,7954,7955,7956,7957,0,0,0,0,0,0,0,0,0,0,7968,7969,7970,7971,7972,7973,7974,7975,0,0,0,0,0,0,0,0,7984,7985,7986,7987,7988,7989,7990,7991};
static unsigned short L125[UL_SIZE] = {0,0,0,0,0,0,0,0,8000,8001,8002,8003,8004,8005,0,0,0,0,0,0,0,0,0,0,0,8017,0,8019,0,8021,0,8023,0,0,0,0,0,0,0,0,8032,8033,8034,8035,8036,8037,8038,8039,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L126[UL_SIZE] = {0,0,0,0,0,0,0,0,8064,8065,8066,8067,8068,8069,8070,8071,0,0,0,0,0,0,0,0,8080,8081,8082,8083,8084,8085,8086,8087,0,0,0,0,0,0,0,0,8096,8097,8098,8099,8100,8101,8102,8103,0,0,0,0,0,0,0,0,8112,8113,8048,8049,8115,0,0,0};
static unsigned short L127[UL_SIZE] = {0,0,0,0,0,0,0,0,8050,8051,8052,8053,8131,0,0,0,0,0,0,0,0,0,0,0,8144,8145,8054,8055,0,0,0,0,0,0,0,0,0,0,0,0,8160,8161,8058,8059,8165,0,0,0,0,0,0,0,0,0,0,0,8056,8057,8060,8061,8179,0,0,0};
static unsigned short L132[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,969,0,0,0,107,229,0,0,0,0,0,0,8526,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L133[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8560,8561,8562,8563,8564,8565,8566,8567,8568,8569,8570,8571,8572,8573,8574,8575,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L134[UL_SIZE] = {0,0,0,8580,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L146[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9424,9425,9426,9427,9428,9429,9430,9431,9432,9433};
static unsigned short L147[UL_SIZE] = {9434,9435,9436,9437,9438,9439,9440,9441,9442,9443,9444,9445,9446,9447,9448,9449,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L176[UL_SIZE] = {11312,11313,11314,11315,11316,11317,11318,11319,11320,11321,11322,11323,11324,11325,11326,11327,11328,11329,11330,11331,11332,11333,11334,11335,11336,11337,11338,11339,11340,11341,11342,11343,11344,11345,11346,11347,11348,11349,11350,11351,11352,11353,11354,11355,11356,11357,11358,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L177[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11361,0,619,7549,637,0,0,11368,0,11370,0,11372,0,593,625,592,594,0,11379,0,0,11382,0,0,0,0,0,0,0,0,575,576};
static unsigned short L178[UL_SIZE] = {11393,0,11395,0,11397,0,11399,0,11401,0,11403,0,11405,0,11407,0,11409,0,11411,0,11413,0,11415,0,11417,0,11419,0,11421,0,11423,0,11425,0,11427,0,11429,0,11431,0,11433,0,11435,0,11437,0,11439,0,11441,0,11443,0,11445,0,11447,0,11449,0,11451,0,11453,0,11455,0};
static unsigned short L179[UL_SIZE] = {11457,0,11459,0,11461,0,11463,0,11465,0,11467,0,11469,0,11471,0,11473,0,11475,0,11477,0,11479,0,11481,0,11483,0,11485,0,11487,0,11489,0,11491,0,0,0,0,0,0,0,0,11500,0,11502,0,0,0,0,11507,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L665[UL_SIZE] = {42561,0,42563,0,42565,0,42567,0,42569,0,42571,0,42573,0,42575,0,42577,0,42579,0,42581,0,42583,0,42585,0,42587,0,42589,0,42591,0,42593,0,42595,0,42597,0,42599,0,42601,0,42603,0,42605,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L666[UL_SIZE] = {42625,0,42627,0,42629,0,42631,0,42633,0,42635,0,42637,0,42639,0,42641,0,42643,0,42645,0,42647,0,42649,0,42651,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short L668[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42787,0,42789,0,42791,0,42793,0,42795,0,42797,0,42799,0,0,0,42803,0,42805,0,42807,0,42809,0,42811,0,42813,0,42815,0};
static unsigned short L669[UL_SIZE] = {42817,0,42819,0,42821,0,42823,0,42825,0,42827,0,42829,0,42831,0,42833,0,42835,0,42837,0,42839,0,42841,0,42843,0,42845,0,42847,0,42849,0,42851,0,42853,0,42855,0,42857,0,42859,0,42861,0,42863,0,0,0,0,0,0,0,0,0,0,42874,0,42876,0,7545,42879,0};
static unsigned short L670[UL_SIZE] = {42881,0,42883,0,42885,0,42887,0,0,0,0,42892,0,613,0,0,42897,0,42899,0,0,0,42903,0,42905,0,42907,0,42909,0,42911,0,42913,0,42915,0,42917,0,42919,0,42921,0,614,604,609,620,0,0,670,647,669,43859,42933,0,42935,0,0,0,0,0,0,0,0,0};
static unsigned short L1020[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65345,65346,65347,65348,65349,65350,65351,65352,65353,65354,65355,65356,65357,65358,65359,65360,65361,65362,65363,65364,65365,65366,65367,65368,65369,65370,0,0,0,0,0};
static unsigned short U1[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,65,66,67,68,69,70,71,72,73,74,75,76,77,78,79,80,81,82,83,84,85,86,87,88,89,90,0,0,0,0,0};
static unsigned short U2[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,924,0,0,0,0,0,0,0,0,0,0};
static unsigned short U3[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,192,193,194,195,196,197,198,199,200,201,202,203,204,205,206,207,208,209,210,211,212,213,214,0,216,217,218,219,220,221,222,376};
static unsigned short U4[UL_SIZE] = {0,256,0,258,0,260,0,262,0,264,0,266,0,268,0,270,0,272,0,274,0,276,0,278,0,280,0,282,0,284,0,286,0,288,0,290,0,292,0,294,0,296,0,298,0,300,0,302,0,73,0,306,0,308,0,310,0,0,313,0,315,0,317,0};
static unsigned short U5[UL_SIZE] = {319,0,321,0,323,0,325,0,327,0,0,330,0,332,0,334,0,336,0,338,0,340,0,342,0,344,0,346,0,348,0,350,0,352,0,354,0,356,0,358,0,360,0,362,0,364,0,366,0,368,0,370,0,372,0,374,0,0,377,0,379,0,381,83};
static unsigned short U6[UL_SIZE] = {579,0,0,386,0,388,0,0,391,0,0,0,395,0,0,0,0,0,401,0,0,502,0,0,0,408,573,0,0,0,544,0,0,416,0,418,0,420,0,0,423,0,0,0,0,428,0,0,431,0,0,0,435,0,437,0,0,440,0,0,0,444,0,503};
static unsigned short U7[UL_SIZE] = {0,0,0,0,453,453,453,456,456,456,459,459,459,0,461,0,463,0,465,0,467,0,469,0,471,0,473,0,475,398,0,478,0,480,0,482,0,484,0,486,0,488,0,490,0,492,0,494,0,498,498,498,0,500,0,0,0,504,0,506,0,508,0,510};
static unsigned short U8[UL_SIZE] = {0,512,0,514,0,516,0,518,0,520,0,522,0,524,0,526,0,528,0,530,0,532,0,534,0,536,0,538,0,540,0,542,0,0,0,546,0,548,0,550,0,552,0,554,0,556,0,558,0,560,0,562,0,0,0,0,0,0,0,0,571,0,0,11390};
static unsigned short U9[UL_SIZE] = {11391,0,577,0,0,0,0,582,0,584,0,586,0,588,0,590,11375,11373,11376,385,390,0,393,394,0,399,0,400,42923,0,0,0,403,42924,0,404,0,42893,42922,0,407,406,0,11362,42925,0,0,412,0,11374,413,0,0,415,0,0,0,0,0,0,0,11364,0,0};
static unsigned short U10[UL_SIZE] = {422,0,0,425,0,0,0,42929,430,580,433,434,581,0,0,0,0,0,439,0,0,0,0,0,0,0,0,0,0,42930,42928,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U13[UL_SIZE] = {0,0,0,0,0,921,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,880,0,882,0,0,0,886,0,0,0,1021,1022,1023,0,0};
static unsigned short U14[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,902,904,905,906,0,913,914,915,916,917,918,919,920,921,922,923,924,925,926,927};
static unsigned short U15[UL_SIZE] = {928,929,931,931,932,933,934,935,936,937,938,939,908,910,911,0,914,920,0,0,0,934,928,975,0,984,0,986,0,988,0,990,0,992,0,994,0,996,0,998,0,1000,0,1002,0,1004,0,1006,922,929,1017,895,0,917,0,0,1015,0,0,1018,0,0,0,0};
static unsigned short U16[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1040,1041,1042,1043,1044,1045,1046,1047,1048,1049,1050,1051,1052,1053,1054,1055};
static unsigned short U17[UL_SIZE] = {1056,1057,1058,1059,1060,1061,1062,1063,1064,1065,1066,1067,1068,1069,1070,1071,1024,1025,1026,1027,1028,1029,1030,1031,1032,1033,1034,1035,1036,1037,1038,1039,0,1120,0,1122,0,1124,0,1126,0,1128,0,1130,0,1132,0,1134,0,1136,0,1138,0,1140,0,1142,0,1144,0,1146,0,1148,0,1150};
static unsigned short U18[UL_SIZE] = {0,1152,0,0,0,0,0,0,0,0,0,1162,0,1164,0,1166,0,1168,0,1170,0,1172,0,1174,0,1176,0,1178,0,1180,0,1182,0,1184,0,1186,0,1188,0,1190,0,1192,0,1194,0,1196,0,1198,0,1200,0,1202,0,1204,0,1206,0,1208,0,1210,0,1212,0,1214};
static unsigned short U19[UL_SIZE] = {0,0,1217,0,1219,0,1221,0,1223,0,1225,0,1227,0,1229,1216,0,1232,0,1234,0,1236,0,1238,0,1240,0,1242,0,1244,0,1246,0,1248,0,1250,0,1252,0,1254,0,1256,0,1258,0,1260,0,1262,0,1264,0,1266,0,1268,0,1270,0,1272,0,1274,0,1276,0,1278};
static unsigned short U20[UL_SIZE] = {0,1280,0,1282,0,1284,0,1286,0,1288,0,1290,0,1292,0,1294,0,1296,0,1298,0,1300,0,1302,0,1304,0,1306,0,1308,0,1310,0,1312,0,1314,0,1316,0,1318,0,1320,0,1322,0,1324,0,1326,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U21[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1329,1330,1331,1332,1333,1334,1335,1336,1337,1338,1339,1340,1341,1342,1343,1344,1345,1346,1347,1348,1349,1350,1351,1352,1353,1354,1355,1356,1357,1358,1359};
static unsigned short U22[UL_SIZE] = {1360,1361,1362,1363,1364,1365,1366,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U79[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5104,5105,5106,5107,5108,5109,0,0};
static unsigned short U117[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42877,0,0,0,11363,0,0};
static unsigned short U120[UL_SIZE] = {0,7680,0,7682,0,7684,0,7686,0,7688,0,7690,0,7692,0,7694,0,7696,0,7698,0,7700,0,7702,0,7704,0,7706,0,7708,0,7710,0,7712,0,7714,0,7716,0,7718,0,7720,0,7722,0,7724,0,7726,0,7728,0,7730,0,7732,0,7734,0,7736,0,7738,0,7740,0,7742};
static unsigned short U121[UL_SIZE] = {0,7744,0,7746,0,7748,0,7750,0,7752,0,7754,0,7756,0,7758,0,7760,0,7762,0,7764,0,7766,0,7768,0,7770,0,7772,0,7774,0,7776,0,7778,0,7780,0,7782,0,7784,0,7786,0,7788,0,7790,0,7792,0,7794,0,7796,0,7798,0,7800,0,7802,0,7804,0,7806};
static unsigned short U122[UL_SIZE] = {0,7808,0,7810,0,7812,0,7814,0,7816,0,7818,0,7820,0,7822,0,7824,0,7826,0,7828,0,0,0,0,0,7776,0,0,0,0,0,7840,0,7842,0,7844,0,7846,0,7848,0,7850,0,7852,0,7854,0,7856,0,7858,0,7860,0,7862,0,7864,0,7866,0,7868,0,7870};
static unsigned short U123[UL_SIZE] = {0,7872,0,7874,0,7876,0,7878,0,7880,0,7882,0,7884,0,7886,0,7888,0,7890,0,7892,0,7894,0,7896,0,7898,0,7900,0,7902,0,7904,0,7906,0,7908,0,7910,0,7912,0,7914,0,7916,0,7918,0,7920,0,7922,0,7924,0,7926,0,7928,0,7930,0,7932,0,7934};
static unsigned short U124[UL_SIZE] = {7944,7945,7946,7947,7948,7949,7950,7951,0,0,0,0,0,0,0,0,7960,7961,7962,7963,7964,7965,0,0,0,0,0,0,0,0,0,0,7976,7977,7978,7979,7980,7981,7982,7983,0,0,0,0,0,0,0,0,7992,7993,7994,7995,7996,7997,7998,7999,0,0,0,0,0,0,0,0};
static unsigned short U125[UL_SIZE] = {8008,8009,8010,8011,8012,8013,0,0,0,0,0,0,0,0,0,0,0,8025,0,8027,0,8029,0,8031,0,0,0,0,0,0,0,0,8040,8041,8042,8043,8044,8045,8046,8047,0,0,0,0,0,0,0,0,8122,8123,8136,8137,8138,8139,8154,8155,8184,8185,8170,8171,8186,8187,0,0};
static unsigned short U126[UL_SIZE] = {8072,8073,8074,8075,8076,8077,8078,8079,0,0,0,0,0,0,0,0,8088,8089,8090,8091,8092,8093,8094,8095,0,0,0,0,0,0,0,0,8104,8105,8106,8107,8108,8109,8110,8111,0,0,0,0,0,0,0,0,8120,8121,0,8124,0,0,0,0,0,0,0,0,0,0,921,0};
static unsigned short U127[UL_SIZE] = {0,0,0,8140,0,0,0,0,0,0,0,0,0,0,0,0,8152,8153,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8168,8169,0,0,0,8172,0,0,0,0,0,0,0,0,0,0,0,0,0,8188,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U133[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,8498,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,8544,8545,8546,8547,8548,8549,8550,8551,8552,8553,8554,8555,8556,8557,8558,8559};
static unsigned short U134[UL_SIZE] = {0,0,0,0,8579,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U147[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,9398,9399,9400,9401,9402,9403,9404,9405,9406,9407,9408,9409,9410,9411,9412,9413,9414,9415,9416,9417,9418,9419,9420,9421,9422,9423,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U176[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,11264,11265,11266,11267,11268,11269,11270,11271,11272,11273,11274,11275,11276,11277,11278,11279};
static unsigned short U177[UL_SIZE] = {11280,11281,11282,11283,11284,11285,11286,11287,11288,11289,11290,11291,11292,11293,11294,11295,11296,11297,11298,11299,11300,11301,11302,11303,11304,11305,11306,11307,11308,11309,11310,0,0,11360,0,0,0,570,574,0,11367,0,11369,0,11371,0,0,0,0,0,0,11378,0,0,11381,0,0,0,0,0,0,0,0,0};
static unsigned short U178[UL_SIZE] = {0,11392,0,11394,0,11396,0,11398,0,11400,0,11402,0,11404,0,11406,0,11408,0,11410,0,11412,0,11414,0,11416,0,11418,0,11420,0,11422,0,11424,0,11426,0,11428,0,11430,0,11432,0,11434,0,11436,0,11438,0,11440,0,11442,0,11444,0,11446,0,11448,0,11450,0,11452,0,11454};
static unsigned short U179[UL_SIZE] = {0,11456,0,11458,0,11460,0,11462,0,11464,0,11466,0,11468,0,11470,0,11472,0,11474,0,11476,0,11478,0,11480,0,11482,0,11484,0,11486,0,11488,0,11490,0,0,0,0,0,0,0,0,11499,0,11501,0,0,0,0,11506,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U180[UL_SIZE] = {4256,4257,4258,4259,4260,4261,4262,4263,4264,4265,4266,4267,4268,4269,4270,4271,4272,4273,4274,4275,4276,4277,4278,4279,4280,4281,4282,4283,4284,4285,4286,4287,4288,4289,4290,4291,4292,4293,0,4295,0,0,0,0,0,4301,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U665[UL_SIZE] = {0,42560,0,42562,0,42564,0,42566,0,42568,0,42570,0,42572,0,42574,0,42576,0,42578,0,42580,0,42582,0,42584,0,42586,0,42588,0,42590,0,42592,0,42594,0,42596,0,42598,0,42600,0,42602,0,42604,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U666[UL_SIZE] = {0,42624,0,42626,0,42628,0,42630,0,42632,0,42634,0,42636,0,42638,0,42640,0,42642,0,42644,0,42646,0,42648,0,42650,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
static unsigned short U668[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42786,0,42788,0,42790,0,42792,0,42794,0,42796,0,42798,0,0,0,42802,0,42804,0,42806,0,42808,0,42810,0,42812,0,42814};
static unsigned short U669[UL_SIZE] = {0,42816,0,42818,0,42820,0,42822,0,42824,0,42826,0,42828,0,42830,0,42832,0,42834,0,42836,0,42838,0,42840,0,42842,0,42844,0,42846,0,42848,0,42850,0,42852,0,42854,0,42856,0,42858,0,42860,0,42862,0,0,0,0,0,0,0,0,0,0,42873,0,42875,0,0,42878};
static unsigned short U670[UL_SIZE] = {0,42880,0,42882,0,42884,0,42886,0,0,0,0,42891,0,0,0,0,42896,0,42898,0,0,0,42902,0,42904,0,42906,0,42908,0,42910,0,42912,0,42914,0,42916,0,42918,0,42920,0,0,0,0,0,0,0,0,0,0,0,42932,0,42934,0,0,0,0,0,0,0,0};
static unsigned short U685[UL_SIZE] = {0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,42931,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,5024,5025,5026,5027,5028,5029,5030,5031,5032,5033,5034,5035,5036,5037,5038,5039};
static unsigned short U686[UL_SIZE] = {5040,5041,5042,5043,5044,5045,5046,5047,5048,5049,5050,5051,5052,5053,5054,5055,5056,5057,5058,5059,5060,5061,5062,5063,5064,5065,5066,5067,5068,5069,5070,5071,5072,5073,5074,5075,5076,5077,5078,5079,5080,5081,5082,5083,5084,5085,5086,5087,5088,5089,5090,5091,5092,5093,5094,5095,5096,5097,5098,5099,5100,5101,5102,5103};
static unsigned short U1021[UL_SIZE] = {0,65313,65314,65315,65316,65317,65318,65319,65320,65321,65322,65323,65324,65325,65326,65327,65328,65329,65330,65331,65332,65333,65334,65335,65336,65337,65338,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0};
#define LMAX 1021
#define UMAX 1022
static unsigned short *LOWER[LMAX] = {_E,L1,_E,L3,L4,L5,L6,L7,L8,L9,_E,_E,_E,L13,L14,L15,L16,L17,L18,L19,L20,L21,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L66,L67,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L78,L79,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L120,L121,L122,L123,L124,L125,L126,L127,_E,_E,_E,_E,L132,L133,L134,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L146,L147,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L176,L177,L178,L179,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L665,L666,_E,L668,L669,L670,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,L1020};
static unsigned short *UPPER[UMAX] = {_E,U1,U2,U3,U4,U5,U6,U7,U8,U9,U10,_E,_E,U13,U14,U15,U16,U17,U18,U19,U20,U21,U22,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U79,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U117,_E,_E,U120,U121,U122,U123,U124,U125,U126,U127,_E,_E,_E,_E,_E,U133,U134,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U147,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U176,U177,U178,U179,U180,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U665,U666,_E,U668,U669,U670,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U685,U686,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,_E,U1021};



inline int unicase_toupper(int c)
{
   int up = c >> UL_BITS;
   if( up < UMAX )
   {
      unsigned int c2 = UPPER[up][c&((1<<UL_BITS)-1)];
      if( c2 )
         return c2;
   }
   return c;
}

inline int unicase_tolower(int c)
{
   int up = c >> UL_BITS;
   if( up < LMAX )
   {
      unsigned int c2 = LOWER[up][c&((1<<UL_BITS)-1)];
      if( c2 )
         return c2;
   }
   return c;
}


