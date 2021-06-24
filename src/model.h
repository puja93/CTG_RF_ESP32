#pragma once
#include <cstdarg>
namespace Eloquent {
    namespace ML {
        namespace Port {
            class RandomForest {
                public:
                    /**
                    * Predict class for features vector
                    */
                    int predict(float *x) {
                        uint8_t votes[3] = { 0 };
                        // tree #1
                        if (x[7] <= 58.5) {
                            if (x[17] <= 109.5) {
                                if (x[11] <= 78.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[4] <= 0.013442898634821177) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.002530578291043639) {
                                    if (x[7] <= 29.5) {
                                        if (x[2] <= 0.2341293767094612) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 150.5) {
                                            if (x[5] <= 0.0005393743049353361) {
                                                if (x[16] <= 106.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 21.0) {
                                                if (x[16] <= 161.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.00041701417649164796) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 0.3940313458442688) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 6.5) {
                                if (x[16] <= 106.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[17] <= 104.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[17] <= 150.0) {
                                            if (x[3] <= 0.0027450795751065016) {
                                                if (x[16] <= 135.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[8] <= 0.6500000059604645) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 10.550000190734863) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[3] <= 0.0008443044207524508) {
                                        if (x[13] <= 127.5) {
                                            if (x[7] <= 62.5) {
                                                if (x[14] <= 7.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 150.5) {
                                                if (x[17] <= 137.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 69.5) {
                                            if (x[0] <= 128.5) {
                                                if (x[10] <= 4.6000001430511475) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[20] <= -0.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 136.5) {
                                                if (x[2] <= 0.0023902758257463574) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.0030301521765068173) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004222835414111614) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[9] <= 77.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[17] <= 107.5) {
                            if (x[16] <= 106.0) {
                                if (x[18] <= 91.5) {
                                    if (x[18] <= 89.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 0.0017444558907300234) {
                                    if (x[0] <= 124.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[8] <= 0.550000011920929) {
                                if (x[9] <= 68.5) {
                                    if (x[9] <= 28.5) {
                                        if (x[10] <= 8.000000238418579) {
                                            if (x[12] <= 130.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[0] <= 148.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.003459964180365205) {
                                                if (x[18] <= 168.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 124.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.003888888983055949) {
                                            if (x[20] <= -0.5) {
                                                if (x[8] <= 0.3500000089406967) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 163.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 5.200000047683716) {
                                                if (x[13] <= 142.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 0.0004512635350693017) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004222835414111614) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 1.5) {
                                    if (x[17] <= 152.5) {
                                        if (x[1] <= 0.0015151549596339464) {
                                            if (x[7] <= 66.0) {
                                                if (x[14] <= 10.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 126.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= 97.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= 93.0) {
                                            if (x[12] <= 170.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[1] <= 0.0021318300860002637) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[16] <= 140.5) {
                                        if (x[6] <= 0.001296031754463911) {
                                            if (x[7] <= 66.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[17] <= 125.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[4] <= 0.0015237785992212594) {
                                            if (x[19] <= 2.5) {
                                                if (x[14] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.0020853754831478) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= 143.0) {
                                                if (x[6] <= 0.0009823183063417673) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[17] <= 107.5) {
                            if (x[11] <= 154.0) {
                                if (x[3] <= 0.003590982290916145) {
                                    if (x[19] <= 62.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[7] <= 64.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[19] <= 1.5) {
                                if (x[7] <= 59.5) {
                                    if (x[9] <= 61.0) {
                                        if (x[17] <= 141.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[11] <= 26.0) {
                                                if (x[11] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[9] <= 66.5) {
                                        if (x[3] <= 0.0008499146206304431) {
                                            if (x[7] <= 78.5) {
                                                if (x[9] <= 18.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 0.0037496931618079543) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= 67.5) {
                                                if (x[10] <= 9.400000095367432) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 80.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.003911050269380212) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[17] <= 128.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 7.5) {
                                    if (x[6] <= 0.002351711969822645) {
                                        if (x[8] <= 0.949999988079071) {
                                            if (x[16] <= 161.5) {
                                                if (x[1] <= 0.0015372632187791169) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 165.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= 105.5) {
                                                if (x[12] <= 195.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.001828089589253068) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.002616106881760061) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 49.5) {
                                        if (x[17] <= 148.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 0.0017213246901519597) {
                                                if (x[7] <= 44.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.002102843427564949) {
                                            if (x[7] <= 59.5) {
                                                if (x[17] <= 147.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 74.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= 153.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[1] <= 0.0019666615407913923) {
                            if (x[17] <= 107.5) {
                                if (x[12] <= 142.5) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[7] <= 24.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[12] <= 220.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.550000011920929) {
                                    if (x[11] <= 9.5) {
                                        if (x[10] <= 4.200000047683716) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 68.5) {
                                            if (x[7] <= 79.5) {
                                                if (x[2] <= 0.0016743644955568016) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[20] <= -0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[16] <= 123.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[17] <= 142.5) {
                                        if (x[8] <= 1.050000011920929) {
                                            if (x[12] <= 197.5) {
                                                if (x[19] <= 1.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.12350530922412872) {
                                                if (x[5] <= 0.0005393743049353361) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.003943722229450941) {
                                            if (x[10] <= 17.350000381469727) {
                                                if (x[14] <= 5.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 151.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= 155.0) {
                                                if (x[17] <= 148.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 34.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[16] <= 97.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[11] <= 27.0) {
                                    if (x[13] <= 134.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 0.0030653219437226653) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0007654462242498994) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[6] <= 0.0008368294511456043) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[1] <= 0.0018450247589498758) {
                            if (x[18] <= 139.5) {
                                if (x[18] <= 112.5) {
                                    if (x[17] <= 107.5) {
                                        if (x[7] <= 24.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[8] <= 0.45000000298023224) {
                                        if (x[14] <= 2.5) {
                                            if (x[11] <= 17.5) {
                                                if (x[13] <= 116.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.005604227306321263) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[17] <= 109.5) {
                                            if (x[11] <= 152.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 59.0) {
                                                if (x[19] <= 58.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= 7.800000190734863) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 0.002291627344675362) {
                                    if (x[10] <= 7.25) {
                                        if (x[8] <= 0.6500000059604645) {
                                            if (x[9] <= 68.5) {
                                                if (x[7] <= 79.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= 6.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 34.5) {
                                            if (x[2] <= 0.00961483083665371) {
                                                if (x[8] <= 0.3500000089406967) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 59.5) {
                                        if (x[12] <= 167.5) {
                                            if (x[20] <= 0.5) {
                                                if (x[0] <= 144.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 0.0004512635350693017) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.0011595833348110318) {
                                                if (x[17] <= 149.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 139.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 5.5) {
                                            if (x[19] <= 1.5) {
                                                if (x[12] <= 159.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 66.5) {
                                                if (x[14] <= 3.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 71.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= 0.0010068932897411287) {
                                if (x[14] <= 12.5) {
                                    if (x[13] <= 138.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[8] <= 0.550000011920929) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[20] <= -0.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[17] <= 107.5) {
                            if (x[11] <= 140.0) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[13] <= 51.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[16] <= 98.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[13] <= 126.5) {
                                if (x[9] <= 7.5) {
                                    if (x[1] <= 0.0017022768734022975) {
                                        if (x[16] <= 152.5) {
                                            if (x[14] <= 13.5) {
                                                if (x[19] <= 49.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.006754193687811494) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[18] <= 111.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 59.5) {
                                        if (x[18] <= 140.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 0.001822460035327822) {
                                                if (x[11] <= 118.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.001875140587799251) {
                                            if (x[18] <= 146.5) {
                                                if (x[9] <= 68.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 140.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 6.049999952316284) {
                                                if (x[7] <= 61.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[7] <= 59.5) {
                                    if (x[1] <= 0.0029524704441428185) {
                                        if (x[12] <= 161.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[19] <= 0.5) {
                                                if (x[11] <= 10.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 152.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[9] <= 67.0) {
                                        if (x[0] <= 143.5) {
                                            if (x[3] <= 0.0008499146206304431) {
                                                if (x[7] <= 78.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[2] <= 0.0013756920234300196) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 38.5) {
                                                if (x[3] <= 0.0021197193418629467) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.00475949514657259) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[1] <= 0.0018450247589498758) {
                            if (x[6] <= 0.0009480589651502669) {
                                if (x[8] <= 0.550000011920929) {
                                    if (x[9] <= 66.5) {
                                        if (x[9] <= 29.5) {
                                            if (x[7] <= 79.5) {
                                                if (x[2] <= 0.018171783536672592) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.006719825556501746) {
                                                if (x[7] <= 78.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.003213734074961394) {
                                            if (x[14] <= 3.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[16] <= 108.5) {
                                        if (x[12] <= 162.0) {
                                            if (x[7] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[16] <= 142.5) {
                                            if (x[11] <= 109.0) {
                                                if (x[8] <= 0.75) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[19] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 7.5) {
                                                if (x[16] <= 155.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= 10.699999809265137) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 129.0) {
                                    if (x[0] <= 128.5) {
                                        if (x[16] <= 106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[11] <= 127.0) {
                                                if (x[3] <= 0.004298857529647648) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[12] <= 182.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[16] <= 98.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[2] <= 0.0021978127770125866) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[11] <= 27.5) {
                                        if (x[16] <= 140.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 25.5) {
                                            if (x[19] <= 75.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[11] <= 127.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[1] <= 0.0008707024098839611) {
                            if (x[8] <= 0.45000000298023224) {
                                if (x[9] <= 68.0) {
                                    if (x[7] <= 80.0) {
                                        if (x[9] <= 9.5) {
                                            if (x[7] <= 74.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.005518360761925578) {
                                                if (x[2] <= 0.024993312545120716) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 152.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[20] <= -0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 106.5) {
                                    if (x[4] <= 0.013727928511798382) {
                                        if (x[18] <= 122.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[17] <= 137.5) {
                                        if (x[17] <= 118.5) {
                                            if (x[0] <= 130.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[12] <= 152.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[13] <= 50.5) {
                                                if (x[10] <= 13.850000381469727) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 3.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 135.5) {
                                            if (x[19] <= 1.5) {
                                                if (x[11] <= 68.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 59.0) {
                                                if (x[17] <= 147.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 140.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[10] <= 0.10000000149011612) {
                                if (x[6] <= 0.0015722454409115016) {
                                    if (x[17] <= 104.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[3] <= 0.0018519534496590495) {
                                    if (x[18] <= 142.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 0.0029005246469751) {
                                            if (x[10] <= 14.15000057220459) {
                                                if (x[0] <= 137.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0025402656756341457) {
                                        if (x[19] <= 91.5) {
                                            if (x[17] <= 145.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 0.0012248174170963466) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[7] <= 59.5) {
                            if (x[18] <= 150.5) {
                                if (x[17] <= 108.0) {
                                    if (x[7] <= 25.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[4] <= 0.012577501125633717) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 14.5) {
                                        if (x[5] <= 0.0005393743049353361) {
                                            if (x[19] <= 102.0) {
                                                if (x[18] <= 139.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[6] <= 0.0014124406152404845) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= 131.0) {
                                            if (x[2] <= 0.008282842114567757) {
                                                if (x[9] <= 58.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.001976292347535491) {
                                    if (x[10] <= 8.050000190734863) {
                                        if (x[9] <= 61.0) {
                                            if (x[10] <= 6.049999952316284) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 151.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[17] <= 147.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[14] <= 3.5) {
                                                if (x[16] <= 154.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[2] <= 0.0027010891353711486) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[19] <= 2.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[1] <= 0.00569357443600893) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[8] <= 0.6500000059604645) {
                                if (x[7] <= 80.5) {
                                    if (x[11] <= 9.5) {
                                        if (x[10] <= 4.25) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= 4.1499998569488525) {
                                            if (x[18] <= 149.5) {
                                                if (x[9] <= 77.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 40.5) {
                                                if (x[9] <= 7.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 135.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[6] <= 0.001648125529754907) {
                                    if (x[18] <= 106.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[17] <= 147.5) {
                                            if (x[9] <= 7.0) {
                                                if (x[19] <= 49.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 5.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 148.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 135.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[1] <= 0.001855389797128737) {
                            if (x[17] <= 107.5) {
                                if (x[7] <= 25.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[4] <= 0.012336232233792543) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.550000011920929) {
                                    if (x[7] <= 59.5) {
                                        if (x[13] <= 138.5) {
                                            if (x[2] <= 0.005988184129819274) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 17.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 0.007521971827372909) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 68.0) {
                                            if (x[7] <= 79.5) {
                                                if (x[3] <= 0.000851310498546809) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.004222835414111614) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 139.5) {
                                        if (x[19] <= 102.0) {
                                            if (x[0] <= 130.5) {
                                                if (x[7] <= 58.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[6] <= 0.0012424835294950753) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[12] <= 166.5) {
                                            if (x[3] <= 0.0005518763791769743) {
                                                if (x[9] <= 21.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 0.0010107227717526257) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[13] <= 123.0) {
                                                if (x[14] <= 7.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 158.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[16] <= 98.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[14] <= 12.5) {
                                    if (x[19] <= 1.5) {
                                        if (x[10] <= 5.3500001430511475) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[13] <= 132.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 0.3940313458442688) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[10] <= 12.599999904632568) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0061095887795090675) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[17] <= 107.5) {
                            if (x[7] <= 25.0) {
                                votes[0] += 1;
                            }

                            else {
                                if (x[12] <= 220.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[6] <= 0.0011244377819821239) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[8] <= 0.550000011920929) {
                                if (x[3] <= 0.0016645931173115969) {
                                    if (x[9] <= 67.5) {
                                        if (x[9] <= 18.0) {
                                            if (x[17] <= 126.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[10] <= 8.300000190734863) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 6.450000047683716) {
                                                if (x[7] <= 78.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 133.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[16] <= 140.5) {
                                        if (x[2] <= 0.006085411878302693) {
                                            if (x[8] <= 0.45000000298023224) {
                                                if (x[3] <= 0.005547580076381564) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0012503351317718625) {
                                            if (x[16] <= 143.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[18] <= 145.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= 29.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 150.5) {
                                    if (x[19] <= 100.0) {
                                        if (x[7] <= 53.5) {
                                            if (x[2] <= 0.3940313458442688) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[17] <= 127.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= 109.5) {
                                                if (x[10] <= 10.25) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 14.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.0033543973695486784) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[6] <= 0.000433275563409552) {
                                                if (x[10] <= 0.3499999940395355) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 25.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0028533515287563205) {
                                        if (x[14] <= 7.5) {
                                            if (x[19] <= 15.0) {
                                                if (x[16] <= 158.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= 12.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #12
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0010668004397302866) {
                                if (x[3] <= 0.006428427528589964) {
                                    if (x[18] <= 150.5) {
                                        if (x[7] <= 53.5) {
                                            if (x[7] <= 21.5) {
                                                if (x[2] <= 0.20773996622301638) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.010287883691489697) {
                                                if (x[9] <= 36.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 141.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 8.5) {
                                            if (x[16] <= 155.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[1] <= 0.003194960532709956) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.0018132604891434312) {
                                                if (x[10] <= 10.699999809265137) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[17] <= 117.5) {
                                        if (x[20] <= 0.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[13] <= 147.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[7] <= 25.0) {
                                    if (x[14] <= 2.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[17] <= 122.0) {
                                        if (x[13] <= 73.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[8] <= 0.6500000059604645) {
                                if (x[10] <= 4.549999952316284) {
                                    if (x[12] <= 153.5) {
                                        if (x[9] <= 64.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[7] <= 63.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0019841270986944437) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 119.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[9] <= 16.5) {
                                            if (x[16] <= 127.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[10] <= 10.849999904632568) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 150.5) {
                                                if (x[3] <= 0.004781830590218306) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[11] <= 27.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[10] <= 0.15000000596046448) {
                                    if (x[6] <= 0.0005050505278632045) {
                                        if (x[11] <= 101.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[18] <= 107.5) {
                                        if (x[1] <= 0.0013146363198757172) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= 117.0) {
                                            if (x[10] <= 11.849999904632568) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[17] <= 129.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[8] <= 1.449999988079071) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #13
                        if (x[7] <= 59.5) {
                            if (x[1] <= 0.001995275029912591) {
                                if (x[18] <= 139.5) {
                                    if (x[19] <= 60.5) {
                                        if (x[4] <= 0.011664904188364744) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[17] <= 108.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[4] <= 0.0023626001202501357) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[4] <= 0.00453065219335258) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 31.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[18] <= 150.5) {
                                            if (x[0] <= 139.5) {
                                                if (x[2] <= 0.005925393896177411) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 21.0) {
                                                if (x[14] <= 0.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.0022247201995924115) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[11] <= 22.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[6] <= 0.001637191860936582) {
                                if (x[9] <= 7.5) {
                                    if (x[17] <= 100.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 0.0003799392143264413) {
                                            if (x[1] <= 0.0021368314046412706) {
                                                if (x[16] <= 151.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 107.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[19] <= 47.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 68.0) {
                                        if (x[7] <= 80.5) {
                                            if (x[3] <= 0.00332004576921463) {
                                                if (x[1] <= 0.002970361616462469) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 139.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.00475949514657259) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                votes[2] += 1;
                            }
                        }

                        // tree #14
                        if (x[9] <= 16.5) {
                            if (x[19] <= 39.5) {
                                if (x[9] <= 1.5) {
                                    if (x[7] <= 64.5) {
                                        if (x[18] <= 106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[17] <= 154.5) {
                                                if (x[7] <= 59.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 160.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.0014638503780588508) {
                                            if (x[0] <= 142.0) {
                                                if (x[7] <= 76.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 141.5) {
                                        if (x[7] <= 58.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[10] <= 7.3500001430511475) {
                                                if (x[12] <= 146.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.0008340283529832959) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0026542097330093384) {
                                            if (x[4] <= 0.0004595588252414018) {
                                                if (x[16] <= 149.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= 7.099999904632568) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[6] <= 0.0015467987395823002) {
                                    if (x[18] <= 125.5) {
                                        if (x[14] <= 5.5) {
                                            if (x[1] <= 0.00504283607006073) {
                                                if (x[7] <= 29.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 99.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= 199.5) {
                                            if (x[16] <= 102.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[10] <= 10.050000190734863) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[15] <= 3.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 135.5) {
                                        if (x[7] <= 25.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.008683092659339309) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[10] <= 3.75) {
                                if (x[12] <= 155.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[8] <= 0.45000000298023224) {
                                        if (x[7] <= 80.0) {
                                            if (x[1] <= 0.0015699495561420918) {
                                                if (x[3] <= 0.007980635156854987) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[7] <= 59.5) {
                                            if (x[16] <= 144.5) {
                                                if (x[0] <= 137.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.00191557127982378) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 141.5) {
                                                if (x[14] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 128.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #15
                        if (x[6] <= 0.0016378868604078889) {
                            if (x[9] <= 9.5) {
                                if (x[17] <= 107.0) {
                                    if (x[14] <= 6.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[18] <= 106.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0018099606968462467) {
                                        if (x[16] <= 146.5) {
                                            if (x[11] <= 18.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[15] <= 2.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= 148.5) {
                                                if (x[11] <= 34.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.0014024460106156766) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 0.3216645419597626) {
                                            if (x[11] <= 22.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 73.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[7] <= 58.5) {
                                    if (x[18] <= 150.5) {
                                        if (x[10] <= 15.75) {
                                            if (x[9] <= 60.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= 10.699999809265137) {
                                            if (x[3] <= 0.0026067616418004036) {
                                                if (x[0] <= 146.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.006000167224556208) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 68.5) {
                                        if (x[7] <= 80.5) {
                                            if (x[10] <= 4.200000047683716) {
                                                if (x[0] <= 142.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.007637593196704984) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.004222835414111614) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[0] <= 130.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[7] <= 25.0) {
                                if (x[17] <= 102.0) {
                                    votes[1] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[4] <= 0.0005938242538832128) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[18] <= 136.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[7] <= 59.5) {
                            if (x[18] <= 150.5) {
                                if (x[6] <= 0.0015994195127859712) {
                                    if (x[9] <= 25.5) {
                                        if (x[2] <= 0.007297699106857181) {
                                            if (x[5] <= 0.0005393743049353361) {
                                                if (x[16] <= 103.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[16] <= 139.5) {
                                                if (x[19] <= 72.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.004270863253623247) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[16] <= 142.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[20] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 140.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[19] <= 102.0) {
                                        if (x[6] <= 0.0016973798046819866) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[16] <= 128.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[0] <= 135.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[19] <= 15.0) {
                                    if (x[0] <= 151.5) {
                                        if (x[1] <= 0.0021682264050468802) {
                                            if (x[0] <= 145.5) {
                                                if (x[1] <= 0.0012248174170963466) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[12] <= 168.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= 51.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[16] <= 153.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[11] <= 148.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[10] <= 4.1499998569488525) {
                                if (x[17] <= 107.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[8] <= 0.45000000298023224) {
                                        if (x[9] <= 66.5) {
                                            if (x[10] <= 4.049999952316284) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[20] <= -0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.0014601253205910325) {
                                            if (x[7] <= 73.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[14] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 8.5) {
                                    if (x[16] <= 103.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[8] <= 0.6500000059604645) {
                                            if (x[17] <= 145.5) {
                                                if (x[8] <= 0.45000000298023224) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.00041701417649164796) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[6] <= 0.0016399789019487798) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 142.5) {
                                        if (x[8] <= 0.550000011920929) {
                                            if (x[0] <= 135.5) {
                                                if (x[2] <= 0.00296004640404135) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.007637593196704984) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[14] <= 5.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 65.0) {
                                            if (x[7] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[8] <= 0.550000011920929) {
                            if (x[10] <= 3.950000047683716) {
                                if (x[9] <= 75.5) {
                                    if (x[7] <= 77.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[7] <= 59.5) {
                                            if (x[10] <= 4.75) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[2] <= 0.0026895685587078333) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 8.5) {
                                                if (x[13] <= 135.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.005546386819332838) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[16] <= 130.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[16] <= 106.0) {
                                if (x[4] <= 0.012824912555515766) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[1] += 1;
                                }
                            }

                            else {
                                if (x[17] <= 109.5) {
                                    if (x[13] <= 61.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[17] <= 99.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[10] <= 0.15000000596046448) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 6.5) {
                                        if (x[6] <= 0.002351711969822645) {
                                            if (x[16] <= 155.5) {
                                                if (x[14] <= 13.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[11] <= 30.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[12] <= 183.0) {
                                            if (x[16] <= 149.5) {
                                                if (x[10] <= 10.849999904632568) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 7.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 143.5) {
                                                if (x[7] <= 57.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.008377397432923317) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[17] <= 107.5) {
                            if (x[6] <= 0.000480769231216982) {
                                if (x[14] <= 6.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[11] <= 74.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[7] <= 59.5) {
                                if (x[1] <= 0.0018450247589498758) {
                                    if (x[17] <= 145.5) {
                                        if (x[3] <= 0.009192698635160923) {
                                            if (x[18] <= 140.5) {
                                                if (x[6] <= 0.001006664038868621) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 135.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[16] <= 119.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[10] <= 4.250000089406967) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 141.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[18] <= 150.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[3] <= 0.0021519482834264636) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= 22.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.6500000059604645) {
                                    if (x[10] <= 8.300000190734863) {
                                        if (x[3] <= 0.003556738025508821) {
                                            if (x[10] <= 3.6999999284744263) {
                                                if (x[10] <= 2.4499999284744263) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 68.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 5.200000047683716) {
                                                if (x[9] <= 77.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 72.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 10.0) {
                                            if (x[7] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[18] <= 144.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= 78.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= 114.5) {
                                        if (x[6] <= 0.002155209891498089) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 4.5) {
                                            if (x[2] <= 0.18721511214971542) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #19
                        if (x[7] <= 59.5) {
                            if (x[18] <= 150.5) {
                                if (x[16] <= 105.5) {
                                    if (x[7] <= 27.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 0.0015678133931942284) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0025348655181005597) {
                                        if (x[6] <= 0.00041701417649164796) {
                                            if (x[18] <= 140.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[7] <= 42.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[19] <= 112.0) {
                                                if (x[2] <= 0.016198693308979273) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 2.5) {
                                    if (x[11] <= 34.0) {
                                        if (x[2] <= 0.0027010891353711486) {
                                            if (x[7] <= 46.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0012296951899770647) {
                                            if (x[16] <= 156.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.0038344948552548885) {
                                        if (x[1] <= 0.0017996313981711864) {
                                            if (x[0] <= 145.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[7] <= 51.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 162.0) {
                                            if (x[13] <= 152.5) {
                                                if (x[12] <= 194.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 7.5) {
                                if (x[17] <= 103.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[6] <= 0.0014113261131569743) {
                                        if (x[11] <= 19.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[8] <= 0.6500000059604645) {
                                                if (x[9] <= 0.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.006282918620854616) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[3] <= 0.00041701417649164796) {
                                    if (x[10] <= 4.099999904632568) {
                                        if (x[9] <= 64.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 64.0) {
                                            if (x[7] <= 80.0) {
                                                if (x[2] <= 0.024993312545120716) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= 4.5) {
                                        if (x[17] <= 148.5) {
                                            if (x[8] <= 0.45000000298023224) {
                                                if (x[16] <= 127.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 146.5) {
                                            if (x[14] <= 3.5) {
                                                if (x[9] <= 29.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 80.0) {
                                                if (x[9] <= 69.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #20
                        if (x[7] <= 59.5) {
                            if (x[17] <= 107.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[1] <= 0.0018467362388037145) {
                                    if (x[18] <= 150.5) {
                                        if (x[17] <= 117.5) {
                                            if (x[18] <= 122.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[6] <= 0.00041701417649164796) {
                                                if (x[17] <= 136.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[11] <= 128.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[19] <= 2.5) {
                                            if (x[9] <= 61.0) {
                                                if (x[11] <= 18.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[13] <= 111.0) {
                                                if (x[14] <= 4.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[14] <= 13.5) {
                                        if (x[11] <= 22.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[6] <= 0.00041701417649164796) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 132.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 6.5) {
                                if (x[17] <= 107.0) {
                                    if (x[12] <= 234.0) {
                                        if (x[14] <= 11.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[18] <= 154.5) {
                                        if (x[10] <= 0.4000000059604645) {
                                            if (x[6] <= 0.0016997834318317473) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 23.5) {
                                                if (x[8] <= 0.45000000298023224) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 124.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[2] <= 0.0023781212512403727) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[13] <= 123.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 133.5) {
                                    if (x[10] <= 5.8500001430511475) {
                                        if (x[8] <= 0.45000000298023224) {
                                            if (x[11] <= 11.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[2] <= 0.0008431703317910433) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.006285567069426179) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[16] <= 134.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 69.5) {
                                        if (x[7] <= 80.5) {
                                            if (x[3] <= 0.006418866105377674) {
                                                if (x[2] <= 0.024993312545120716) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 134.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // return argmax of votes
                        uint8_t classIdx = 0;
                        float maxVotes = votes[0];

                        for (uint8_t i = 1; i < 3; i++) {
                            if (votes[i] > maxVotes) {
                                classIdx = i;
                                maxVotes = votes[i];
                            }
                        }

                        return classIdx+1;
                    }

                    /**
                    * Predict readable class name
                    */
                    const char* predictLabel(float *x) {
                        return idxToLabel(predict(x));
                    }

                    /**
                    * Convert class idx to readable name
                    */
                    const char* idxToLabel(uint8_t classIdx) {
                        switch (classIdx) {
                            case 1:
                            return "Normal";
                            case 2:
                            return "Suspect";
                            case 3:
                            return "Pathologic";
                            default:
                            return "Houston we have a problem";
                        }
                    }

                protected:
                };
            }
        }
    }
