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
                            if (x[17] <= 148.5) {
                                if (x[6] <= 0.0019550809520296752) {
                                    if (x[3] <= 0.001999004976823926) {
                                        if (x[1] <= 0.0018467362388037145) {
                                            if (x[1] <= 0.0012956519494764507) {
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
                                        if (x[9] <= 45.0) {
                                            if (x[2] <= 0.3940313458442688) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 47.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[16] <= 134.5) {
                                        if (x[11] <= 97.5) {
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

                            else {
                                if (x[1] <= 0.0028961088974028826) {
                                    if (x[11] <= 10.5) {
                                        if (x[8] <= 0.6500000059604645) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[0] <= 145.5) {
                                            if (x[3] <= 0.004812800325453281) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 6.0) {
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
                        }

                        else {
                            if (x[9] <= 7.0) {
                                if (x[17] <= 107.5) {
                                    if (x[1] <= 0.0033026322489604354) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[10] <= 3.4000000953674316) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0016399789019487798) {
                                        if (x[11] <= 21.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[7] <= 80.0) {
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
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[0] <= 136.5) {
                                            if (x[3] <= 0.00332004576921463) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 59.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 32.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004703916376456618) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[3] <= 0.006644737208262086) {
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
                        if (x[7] <= 58.5) {
                            if (x[1] <= 0.002221043803729117) {
                                if (x[16] <= 152.5) {
                                    if (x[6] <= 0.0010575090418569744) {
                                        if (x[18] <= 139.5) {
                                            votes[0] += 1;
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

                                    else {
                                        if (x[7] <= 21.0) {
                                            if (x[17] <= 119.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[13] <= 73.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 19.5) {
                                        if (x[19] <= 13.0) {
                                            if (x[11] <= 47.5) {
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

                                    else {
                                        if (x[9] <= 61.0) {
                                            if (x[8] <= 0.45000000298023224) {
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

                            else {
                                if (x[2] <= 0.3940313458442688) {
                                    if (x[11] <= 26.5) {
                                        if (x[0] <= 141.5) {
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
                                    if (x[10] <= 14.549999713897705) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[8] <= 0.550000011920929) {
                                if (x[9] <= 69.0) {
                                    if (x[7] <= 79.5) {
                                        if (x[9] <= 7.0) {
                                            if (x[7] <= 77.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 37.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[18] <= 145.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[18] <= 148.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 73.5) {
                                        if (x[7] <= 75.5) {
                                            if (x[3] <= 0.004703916376456618) {
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
                                        votes[2] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 107.0) {
                                    if (x[1] <= 0.0032334899296984076) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[16] <= 94.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0014418604550883174) {
                                        if (x[17] <= 140.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[1] <= 0.0005336179165169597) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= 185.5) {
                                            if (x[4] <= 0.007120067719370127) {
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
                        }

                        // tree #3
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.0) {
                                if (x[9] <= 7.5) {
                                    if (x[7] <= 77.5) {
                                        if (x[20] <= -0.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[7] <= 79.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 79.5) {
                                        if (x[3] <= 0.00041701417649164796) {
                                            if (x[7] <= 63.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.003011243185028434) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.002716191520448774) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
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
                            if (x[18] <= 115.5) {
                                if (x[17] <= 100.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[19] <= 54.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[13] <= 73.5) {
                                            if (x[2] <= 0.05674900993471965) {
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
                                }
                            }

                            else {
                                if (x[6] <= 0.0014124406152404845) {
                                    if (x[0] <= 136.5) {
                                        if (x[19] <= 75.5) {
                                            if (x[9] <= 38.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 12.299999713897705) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.0009851959766820073) {
                                            if (x[7] <= 46.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.002227306831628084) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 131.5) {
                                        if (x[11] <= 102.0) {
                                            if (x[7] <= 63.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.005108911311253905) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0016696361126378179) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #4
                        if (x[7] <= 58.5) {
                            if (x[17] <= 112.5) {
                                if (x[19] <= 71.0) {
                                    if (x[20] <= 0.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[13] <= 65.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.0029390931595116854) {
                                    if (x[17] <= 147.5) {
                                        if (x[6] <= 0.00041701417649164796) {
                                            if (x[16] <= 139.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[12] <= 165.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 141.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[14] <= 7.0) {
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
                        }

                        else {
                            if (x[17] <= 107.5) {
                                if (x[11] <= 168.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[9] <= 3.5) {
                                    if (x[17] <= 148.5) {
                                        if (x[6] <= 0.0014418604550883174) {
                                            votes[0] += 1;
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

                                    else {
                                        if (x[19] <= 7.5) {
                                            if (x[10] <= 10.150000095367432) {
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
                                    if (x[3] <= 0.0029777034651488066) {
                                        if (x[9] <= 68.5) {
                                            if (x[7] <= 80.0) {
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
                                        if (x[17] <= 145.5) {
                                            if (x[9] <= 32.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= 0.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0019570146105252206) {
                                if (x[17] <= 149.5) {
                                    if (x[1] <= 0.0018450247589498758) {
                                        if (x[5] <= 0.000984610291197896) {
                                            if (x[19] <= 102.5) {
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
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0029456678312271833) {
                                        if (x[0] <= 145.5) {
                                            if (x[18] <= 158.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 10.5) {
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
                                if (x[12] <= 158.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[6] <= 0.0014090571785345674) {
                                if (x[9] <= 6.5) {
                                    if (x[17] <= 108.0) {
                                        if (x[1] <= 0.002405053819529712) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[8] <= 2.850000023841858) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 80.0) {
                                            if (x[0] <= 151.0) {
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
                                    if (x[9] <= 66.5) {
                                        if (x[7] <= 79.5) {
                                            if (x[8] <= 0.550000011920929) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.0007320644217543304) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.004702847916632891) {
                                            if (x[9] <= 68.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
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

                            else {
                                if (x[16] <= 132.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #6
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0014734326396137476) {
                                if (x[0] <= 137.5) {
                                    if (x[16] <= 107.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[10] <= 10.25) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[16] <= 139.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.002839641529135406) {
                                        if (x[16] <= 152.5) {
                                            if (x[11] <= 146.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.0015042696613818407) {
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
                                if (x[16] <= 131.0) {
                                    if (x[0] <= 122.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 0.006838005501776934) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 6.5) {
                                if (x[17] <= 107.5) {
                                    if (x[11] <= 168.5) {
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
                                    if (x[7] <= 74.5) {
                                        if (x[6] <= 0.0014113261131569743) {
                                            if (x[11] <= 21.0) {
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
                                        if (x[18] <= 139.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[10] <= 4.1499998569488525) {
                                    if (x[3] <= 0.0018195807933807373) {
                                        if (x[9] <= 53.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 71.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 79.5) {
                                        if (x[9] <= 69.0) {
                                            if (x[9] <= 27.5) {
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
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0019531921134330332) {
                                if (x[1] <= 0.0029282639734447002) {
                                    if (x[0] <= 137.5) {
                                        if (x[6] <= 0.000433275563409552) {
                                            if (x[18] <= 143.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 27.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= 3.950000047683716) {
                                            if (x[12] <= 163.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 60.5) {
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
                                if (x[9] <= 5.5) {
                                    if (x[12] <= 158.5) {
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

                        else {
                            if (x[9] <= 6.5) {
                                if (x[6] <= 0.0014085064176470041) {
                                    if (x[17] <= 108.0) {
                                        if (x[1] <= 0.002405053819529712) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[7] <= 75.0) {
                                            if (x[0] <= 151.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 152.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
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

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[0] <= 136.5) {
                                        if (x[3] <= 0.000842908542836085) {
                                            if (x[12] <= 142.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.003613942884840071) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 79.5) {
                                            if (x[7] <= 59.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.0007320644217543304) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= 0.45000000298023224) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[16] <= 139.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[1] <= 0.0018450247589498758) {
                            if (x[17] <= 108.0) {
                                if (x[11] <= 74.0) {
                                    votes[0] += 1;
                                }

                                else {
                                    if (x[13] <= 70.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.45000000298023224) {
                                    if (x[9] <= 68.5) {
                                        if (x[9] <= 7.0) {
                                            if (x[7] <= 74.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
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
                                    if (x[16] <= 140.5) {
                                        if (x[6] <= 0.0013387323124334216) {
                                            if (x[7] <= 79.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[17] <= 122.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[4] <= 0.0019773432286456227) {
                                            if (x[12] <= 184.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 146.0) {
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
                            if (x[16] <= 98.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[13] <= 128.0) {
                                    if (x[17] <= 102.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 0.0008264462812803686) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[16] <= 161.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #9
                        if (x[8] <= 0.45000000298023224) {
                            if (x[7] <= 79.5) {
                                if (x[9] <= 69.0) {
                                    if (x[9] <= 7.0) {
                                        if (x[11] <= 21.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[13] <= 113.0) {
                                            if (x[9] <= 14.5) {
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
                                if (x[3] <= 0.002846196061000228) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[17] <= 108.0) {
                                if (x[12] <= 220.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 0.0018450247589498758) {
                                    if (x[17] <= 143.5) {
                                        if (x[2] <= 0.12135112658143044) {
                                            if (x[6] <= 0.0013748819474130869) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[6] <= 0.0015962234465405345) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[11] <= 59.5) {
                                            if (x[9] <= 60.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0030005602166056633) {
                                        if (x[1] <= 0.004185911267995834) {
                                            if (x[2] <= 0.2284841164946556) {
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
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0019402749021537602) {
                                if (x[1] <= 0.0016992365708574653) {
                                    if (x[17] <= 150.0) {
                                        if (x[19] <= 100.0) {
                                            if (x[9] <= 51.0) {
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
                                        if (x[7] <= 52.0) {
                                            if (x[3] <= 0.004877613857388496) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 6.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.00041701417649164796) {
                                        if (x[13] <= 152.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[7] <= 53.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.0008368294511456043) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[14] <= 4.5) {
                                    votes[0] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        else {
                            if (x[17] <= 108.0) {
                                if (x[0] <= 115.0) {
                                    if (x[4] <= 0.0053788404911756516) {
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
                                if (x[8] <= 0.550000011920929) {
                                    if (x[9] <= 69.0) {
                                        if (x[2] <= 0.0030965827172622085) {
                                            if (x[7] <= 80.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 134.0) {
                                            if (x[17] <= 133.5) {
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
                                }

                                else {
                                    if (x[6] <= 0.0014113261131569743) {
                                        if (x[0] <= 141.0) {
                                            if (x[12] <= 195.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.0024279564386233687) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 60.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #11
                        if (x[17] <= 107.5) {
                            if (x[12] <= 220.5) {
                                if (x[4] <= 0.0012334209750406444) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[2] += 1;
                                }
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

                        else {
                            if (x[8] <= 0.550000011920929) {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[7] <= 59.5) {
                                            if (x[19] <= 5.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 8.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.002846196061000228) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[13] <= 141.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004703916376456618) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[0] <= 136.5) {
                                    if (x[1] <= 0.001757816702593118) {
                                        if (x[6] <= 0.0013927121181041002) {
                                            if (x[16] <= 142.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[13] <= 53.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
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
                                    if (x[1] <= 0.0029390931595116854) {
                                        if (x[18] <= 150.5) {
                                            if (x[12] <= 188.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 12.5) {
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
                        }

                        // tree #12
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 69.0) {
                                if (x[7] <= 79.5) {
                                    if (x[9] <= 7.5) {
                                        if (x[20] <= -0.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[11] <= 20.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 58.5) {
                                            if (x[16] <= 154.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 140.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= 0.2500000074505806) {
                                        if (x[11] <= 15.5) {
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
                            }

                            else {
                                if (x[17] <= 135.5) {
                                    if (x[8] <= 0.45000000298023224) {
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
                        }

                        else {
                            if (x[17] <= 109.5) {
                                if (x[11] <= 154.0) {
                                    if (x[18] <= 126.0) {
                                        if (x[7] <= 25.0) {
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
                                    if (x[13] <= 56.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.0018107834039255977) {
                                    if (x[17] <= 147.5) {
                                        if (x[6] <= 0.0013387323124334216) {
                                            if (x[2] <= 0.0860748179256916) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 129.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 26.0) {
                                            if (x[10] <= 9.550000190734863) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[14] <= 0.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[18] <= 110.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[11] <= 22.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[16] <= 160.5) {
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

                        // tree #13
                        if (x[7] <= 59.5) {
                            if (x[18] <= 122.5) {
                                if (x[6] <= 0.0019570146105252206) {
                                    if (x[7] <= 58.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0021018225234001875) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.0018450247589498758) {
                                    if (x[16] <= 152.5) {
                                        if (x[6] <= 0.0011534512741491199) {
                                            if (x[18] <= 139.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[17] <= 123.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[14] <= 5.5) {
                                            if (x[3] <= 0.003082834417000413) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 147.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= 144.5) {
                                        if (x[19] <= 75.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[0] <= 132.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.003114880877546966) {
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
                            if (x[8] <= 0.550000011920929) {
                                if (x[9] <= 69.5) {
                                    if (x[9] <= 8.5) {
                                        if (x[7] <= 79.0) {
                                            if (x[11] <= 21.0) {
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
                                        if (x[7] <= 80.0) {
                                            if (x[18] <= 139.5) {
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
                                }

                                else {
                                    if (x[0] <= 134.0) {
                                        if (x[3] <= 0.004703916376456618) {
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
                            }

                            else {
                                if (x[18] <= 111.5) {
                                    if (x[1] <= 0.002365451422519982) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[6] <= 0.000866551126819104) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= 10.449999809265137) {
                                        if (x[6] <= 0.0014406604459509254) {
                                            if (x[16] <= 106.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 135.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 139.5) {
                                            if (x[19] <= 44.5) {
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

                        // tree #14
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0019531921134330332) {
                                if (x[1] <= 0.002221043803729117) {
                                    if (x[17] <= 147.5) {
                                        if (x[19] <= 100.0) {
                                            if (x[2] <= 0.00041701417649164796) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.010321215726435184) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[19] <= 5.5) {
                                            if (x[7] <= 53.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 15.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= 26.5) {
                                        if (x[15] <= 0.5) {
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
                                if (x[8] <= 1.6999999284744263) {
                                    votes[1] += 1;
                                }

                                else {
                                    if (x[12] <= 158.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 7.0) {
                                if (x[17] <= 108.0) {
                                    if (x[1] <= 0.0032399259507656097) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[2] <= 0.0013310807989910245) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[8] <= 0.550000011920929) {
                                        if (x[7] <= 72.5) {
                                            if (x[7] <= 62.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[16] <= 138.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.0014418604550883174) {
                                            if (x[18] <= 154.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[12] <= 152.5) {
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
                                if (x[9] <= 70.5) {
                                    if (x[0] <= 136.5) {
                                        if (x[3] <= 0.0008443044207524508) {
                                            if (x[9] <= 48.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 61.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 140.5) {
                                            if (x[7] <= 78.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 80.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    votes[2] += 1;
                                }
                            }
                        }

                        // tree #15
                        if (x[9] <= 8.5) {
                            if (x[16] <= 106.0) {
                                if (x[14] <= 9.5) {
                                    if (x[18] <= 124.5) {
                                        if (x[7] <= 27.5) {
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
                                    if (x[16] <= 91.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[1] <= 0.002062963554635644) {
                                    if (x[19] <= 76.5) {
                                        if (x[18] <= 150.5) {
                                            if (x[7] <= 76.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[0] <= 155.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[17] <= 115.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[11] <= 27.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[2] <= 0.3940313458442688) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[10] <= 12.25) {
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
                            if (x[8] <= 0.45000000298023224) {
                                if (x[9] <= 69.0) {
                                    if (x[7] <= 79.0) {
                                        if (x[3] <= 0.007323389407247305) {
                                            if (x[13] <= 100.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 7.349999904632568) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.00407406035810709) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
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

                            else {
                                if (x[14] <= 7.5) {
                                    if (x[8] <= 0.550000011920929) {
                                        if (x[11] <= 30.5) {
                                            if (x[16] <= 157.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[16] <= 156.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.0030083419987931848) {
                                            if (x[16] <= 140.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.005527436034753919) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= 9.099999904632568) {
                                        if (x[4] <= 0.0027595694409683347) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[10] <= 14.449999809265137) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #16
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0010434065479785204) {
                                if (x[16] <= 152.5) {
                                    if (x[19] <= 111.5) {
                                        if (x[16] <= 139.5) {
                                            if (x[8] <= 4.25) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 29.0) {
                                                votes[0] += 1;
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
                                    if (x[19] <= 14.5) {
                                        if (x[1] <= 0.0029456678312271833) {
                                            if (x[12] <= 178.0) {
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
                                if (x[7] <= 28.5) {
                                    if (x[7] <= 26.0) {
                                        if (x[0] <= 130.5) {
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
                                    if (x[8] <= 1.25) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[16] <= 109.0) {
                                if (x[12] <= 234.0) {
                                    if (x[13] <= 76.0) {
                                        votes[2] += 1;
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
                                if (x[8] <= 0.6500000059604645) {
                                    if (x[9] <= 69.0) {
                                        if (x[7] <= 79.5) {
                                            if (x[9] <= 8.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.00469567091204226) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.004703916376456618) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= 62.5) {
                                        if (x[12] <= 188.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[20] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.0014057108201086521) {
                                            if (x[8] <= 0.949999988079071) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 4.399999976158142) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }
                            }
                        }

                        // tree #17
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.5) {
                                if (x[7] <= 79.5) {
                                    if (x[2] <= 0.0016701487475074828) {
                                        if (x[9] <= 7.0) {
                                            if (x[3] <= 0.00043290044413879514) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 60.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 59.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[17] <= 122.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.002846196061000228) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[9] <= 19.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.45000000298023224) {
                                    if (x[20] <= -0.5) {
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
                        }

                        else {
                            if (x[17] <= 108.0) {
                                if (x[13] <= 70.0) {
                                    if (x[12] <= 234.0) {
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
                                if (x[0] <= 136.5) {
                                    if (x[2] <= 0.12350530922412872) {
                                        if (x[6] <= 0.00216323888162151) {
                                            if (x[6] <= 0.0015212188009172678) {
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
                                        if (x[6] <= 0.0012510425294749439) {
                                            if (x[19] <= 71.0) {
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
                                    if (x[1] <= 0.0018501783488318324) {
                                        if (x[18] <= 150.5) {
                                            if (x[19] <= 74.0) {
                                                votes[0] += 1;
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
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #18
                        if (x[7] <= 58.5) {
                            if (x[6] <= 0.0010575090418569744) {
                                if (x[16] <= 152.5) {
                                    if (x[9] <= 53.5) {
                                        if (x[19] <= 54.5) {
                                            if (x[17] <= 137.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 6.849999904632568) {
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
                                    if (x[1] <= 0.0029049667064100504) {
                                        if (x[9] <= 21.5) {
                                            if (x[3] <= 0.004922229563817382) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[11] <= 10.5) {
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
                                if (x[16] <= 131.0) {
                                    if (x[11] <= 89.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[17] <= 123.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[0] <= 130.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[1] <= 0.0016696361126378179) {
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
                            if (x[9] <= 6.5) {
                                if (x[17] <= 108.0) {
                                    if (x[12] <= 234.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0014418604550883174) {
                                        if (x[7] <= 74.5) {
                                            if (x[0] <= 151.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[20] <= 0.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[8] <= 2.050000011920929) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 63.5) {
                                    if (x[8] <= 0.6500000059604645) {
                                        if (x[7] <= 79.5) {
                                            if (x[2] <= 0.0012015638058073819) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.0007320644217543304) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[0] <= 141.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004702847916632891) {
                                        if (x[10] <= 5.25) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
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

                        // tree #19
                        if (x[7] <= 59.5) {
                            if (x[17] <= 108.0) {
                                if (x[13] <= 70.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[0] <= 137.5) {
                                    if (x[6] <= 0.00041701417649164796) {
                                        if (x[9] <= 29.0) {
                                            if (x[8] <= 0.6500000059604645) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[20] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0017924770363606513) {
                                            if (x[4] <= 0.005369268357753754) {
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
                                }

                                else {
                                    if (x[1] <= 0.0029456678312271833) {
                                        if (x[17] <= 147.5) {
                                            if (x[7] <= 43.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[12] <= 178.0) {
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
                            }
                        }

                        else {
                            if (x[8] <= 0.550000011920929) {
                                if (x[9] <= 68.5) {
                                    if (x[10] <= 7.8500001430511475) {
                                        if (x[7] <= 79.5) {
                                            if (x[3] <= 0.005751189077273011) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.002846196061000228) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 75.5) {
                                            if (x[2] <= 0.0033785576233640313) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 152.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004392131231725216) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 107.0) {
                                    if (x[4] <= 0.0011587960179895163) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0016598436050117016) {
                                        if (x[10] <= 9.799999713897705) {
                                            if (x[11] <= 115.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[9] <= 5.0) {
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

                        // tree #20
                        if (x[7] <= 58.5) {
                            if (x[17] <= 109.5) {
                                if (x[13] <= 65.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 0.0018450247589498758) {
                                    if (x[17] <= 147.5) {
                                        if (x[6] <= 0.00041701417649164796) {
                                            if (x[9] <= 57.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[15] <= 0.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 66.0) {
                                            if (x[19] <= 5.5) {
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
                                    if (x[19] <= 1.5) {
                                        if (x[3] <= 0.0015432098880410194) {
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
                        }

                        else {
                            if (x[17] <= 107.5) {
                                if (x[10] <= 0.8999999761581421) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[14] <= 9.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.550000011920929) {
                                    if (x[10] <= 3.950000047683716) {
                                        if (x[13] <= 106.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 68.0) {
                                            if (x[7] <= 79.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[10] <= 4.25) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0014113261131569743) {
                                        if (x[10] <= 10.449999809265137) {
                                            if (x[13] <= 56.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[18] <= 139.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= 4.399999976158142) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
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
