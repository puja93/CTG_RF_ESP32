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
                        if (x[8] <= 0.6500000059604645) {
                            if (x[7] <= 59.5) {
                                if (x[13] <= 148.5) {
                                    if (x[2] <= 0.01950740162283182) {
                                        if (x[3] <= 0.00297182728536427) {
                                            if (x[3] <= 0.0018541683675721288) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[12] <= 146.0) {
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
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[17] <= 162.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[9] <= 6.5) {
                                            if (x[17] <= 148.5) {
                                                if (x[13] <= 89.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= 9.800000190734863) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[0] <= 133.5) {
                                                if (x[13] <= 118.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.006690706592053175) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.006013033911585808) {
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
                        }

                        else {
                            if (x[17] <= 107.5) {
                                if (x[12] <= 220.5) {
                                    if (x[7] <= 25.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        if (x[0] <= 115.0) {
                                            votes[0] += 1;
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

                            else {
                                if (x[1] <= 0.002221043803729117) {
                                    if (x[17] <= 147.5) {
                                        if (x[19] <= 44.5) {
                                            if (x[11] <= 118.0) {
                                                if (x[9] <= 61.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[8] <= 1.25) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[18] <= 125.5) {
                                                if (x[4] <= 0.006728778360411525) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 0.005221086088567972) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[19] <= 1.5) {
                                            if (x[10] <= 4.700000047683716) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 46.5) {
                                                if (x[0] <= 142.0) {
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
                                    if (x[18] <= 110.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #2
                        if (x[1] <= 0.0018132604891434312) {
                            if (x[17] <= 108.5) {
                                if (x[13] <= 70.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[14] <= 6.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[8] <= 0.45000000298023224) {
                                    if (x[9] <= 68.0) {
                                        if (x[7] <= 79.5) {
                                            if (x[9] <= 7.0) {
                                                votes[0] += 1;
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
                                            if (x[3] <= 0.006013033911585808) {
                                                votes[2] += 1;
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
                                    if (x[8] <= 0.75) {
                                        if (x[12] <= 159.5) {
                                            if (x[11] <= 34.0) {
                                                if (x[13] <= 120.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[1] <= 0.0008156606927514076) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 66.0) {
                                                if (x[7] <= 59.5) {
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
                                        if (x[12] <= 168.5) {
                                            if (x[19] <= 55.5) {
                                                if (x[1] <= 0.0017624489264562726) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 117.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= 147.5) {
                                                if (x[6] <= 0.0006613756413571537) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 149.0) {
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
                            if (x[16] <= 93.5) {
                                votes[2] += 1;
                            }

                            else {
                                if (x[9] <= 7.5) {
                                    if (x[14] <= 13.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[1] <= 0.002444332931190729) {
                                        if (x[1] <= 0.0019287003669887781) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[13] <= 127.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[14] <= 11.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }
                        }

                        // tree #3
                        if (x[8] <= 0.45000000298023224) {
                            if (x[9] <= 68.5) {
                                if (x[7] <= 79.5) {
                                    if (x[9] <= 15.5) {
                                        if (x[11] <= 23.0) {
                                            if (x[10] <= 10.099999904632568) {
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
                                        if (x[3] <= 0.0056079665664583445) {
                                            if (x[7] <= 59.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 0.026257481426000595) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[12] <= 159.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.003504672786220908) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
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
                            if (x[17] <= 108.5) {
                                if (x[12] <= 220.5) {
                                    if (x[11] <= 72.5) {
                                        if (x[13] <= 74.5) {
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
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 0.0024169193347916007) {
                                    if (x[17] <= 143.5) {
                                        if (x[6] <= 0.001393146812915802) {
                                            if (x[3] <= 0.002766384044662118) {
                                                if (x[7] <= 59.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[19] <= 60.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[18] <= 133.5) {
                                                if (x[4] <= 0.006549051031470299) {
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

                                    else {
                                        if (x[12] <= 166.5) {
                                            if (x[7] <= 59.5) {
                                                if (x[10] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.0067133919801563025) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 8.300000190734863) {
                                                if (x[12] <= 169.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[10] <= 12.900000095367432) {
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
                                    if (x[18] <= 112.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[18] <= 153.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[11] <= 27.0) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[14] <= 12.5) {
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

                        // tree #4
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.5) {
                                if (x[7] <= 79.5) {
                                    if (x[9] <= 15.5) {
                                        if (x[3] <= 0.0029609660850837827) {
                                            if (x[0] <= 131.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[12] <= 153.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[7] <= 78.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 56.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[11] <= 18.5) {
                                                if (x[3] <= 0.005278169177472591) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[15] <= 0.5) {
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
                                    if (x[3] <= 0.006013033911585808) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
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
                            if (x[6] <= 0.0014696418074890971) {
                                if (x[0] <= 137.5) {
                                    if (x[16] <= 102.5) {
                                        if (x[1] <= 0.001596478105057031) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[6] <= 0.000433275563409552) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[8] <= 0.75) {
                                            if (x[11] <= 52.0) {
                                                votes[0] += 1;
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
                                            if (x[18] <= 106.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[9] <= 35.5) {
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
                                    if (x[1] <= 0.0029347423696890473) {
                                        if (x[17] <= 153.5) {
                                            if (x[3] <= 0.0010190682369284332) {
                                                if (x[7] <= 56.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[0] <= 150.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 24.0) {
                                                if (x[13] <= 135.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[19] <= 0.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[14] <= 12.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 126.0) {
                                    if (x[12] <= 141.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[12] <= 185.5) {
                                        if (x[4] <= 0.0033543973695486784) {
                                            if (x[4] <= 0.0007668711477890611) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.0007621950935572386) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }
                            }
                        }

                        // tree #5
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0014124406152404845) {
                                if (x[16] <= 150.5) {
                                    if (x[16] <= 102.5) {
                                        if (x[4] <= 0.005188530485611409) {
                                            if (x[13] <= 60.5) {
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

                                    else {
                                        if (x[9] <= 45.5) {
                                            if (x[17] <= 109.5) {
                                                if (x[0] <= 133.5) {
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
                                            if (x[16] <= 143.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0021682264050468802) {
                                        if (x[9] <= 66.0) {
                                            if (x[14] <= 4.5) {
                                                if (x[20] <= 0.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[17] <= 144.5) {
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 108.0) {
                                    if (x[11] <= 87.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[7] <= 26.0) {
                                        if (x[0] <= 129.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[2] <= 0.3715193122625351) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
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
                            if (x[9] <= 3.5) {
                                if (x[17] <= 105.5) {
                                    if (x[11] <= 168.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0014601253205910325) {
                                        if (x[7] <= 74.0) {
                                            if (x[13] <= 128.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 142.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.0016680567059665918) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[8] <= 0.550000011920929) {
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

                            else {
                                if (x[7] <= 79.5) {
                                    if (x[9] <= 68.5) {
                                        if (x[0] <= 134.5) {
                                            if (x[3] <= 0.000842908542836085) {
                                                if (x[7] <= 77.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[12] <= 150.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 13.0) {
                                                if (x[7] <= 65.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.008573347702622414) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.003911050269380212) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.005160301923751831) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #6
                        if (x[7] <= 59.5) {
                            if (x[1] <= 0.002222290728241205) {
                                if (x[17] <= 147.5) {
                                    if (x[6] <= 0.0010575090418569744) {
                                        if (x[9] <= 45.5) {
                                            if (x[19] <= 105.0) {
                                                if (x[2] <= 0.014178481884300709) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[8] <= 1.850000023841858) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.00437760422937572) {
                                                if (x[9] <= 59.5) {
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
                                        if (x[8] <= 1.949999988079071) {
                                            if (x[3] <= 0.006183200981467962) {
                                                votes[1] += 1;
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
                                            if (x[7] <= 23.0) {
                                                if (x[4] <= 0.0028935185400769114) {
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
                                }

                                else {
                                    if (x[9] <= 51.0) {
                                        if (x[0] <= 151.5) {
                                            if (x[11] <= 19.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[9] <= 6.0) {
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
                                        if (x[9] <= 66.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[14] <= 12.5) {
                                    if (x[11] <= 23.0) {
                                        if (x[0] <= 135.0) {
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
                                    if (x[12] <= 180.5) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 3.5) {
                                if (x[6] <= 0.001435321057215333) {
                                    if (x[17] <= 100.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 147.5) {
                                            if (x[12] <= 137.0) {
                                                if (x[0] <= 118.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[4] <= 0.010176785290241241) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[10] <= 10.299999713897705) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[16] <= 132.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[14] <= 5.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 81.5) {
                                        if (x[3] <= 0.000842908542836085) {
                                            if (x[7] <= 78.5) {
                                                if (x[0] <= 146.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 132.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= 145.5) {
                                                if (x[7] <= 61.5) {
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

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[3] <= 0.003911050269380212) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #7
                        if (x[8] <= 0.550000011920929) {
                            if (x[7] <= 67.5) {
                                if (x[7] <= 59.5) {
                                    if (x[16] <= 153.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[0] <= 148.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[18] <= 169.0) {
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
                                        if (x[3] <= 0.0028271147748455405) {
                                            if (x[13] <= 131.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 60.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[18] <= 125.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 67.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[3] <= 0.0027140817837789655) {
                                            if (x[7] <= 78.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[9] <= 41.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[11] <= 14.5) {
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
                                    if (x[3] <= 0.004542465088889003) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[6] <= 0.0014696418074890971) {
                                if (x[1] <= 0.002222290728241205) {
                                    if (x[17] <= 137.5) {
                                        if (x[16] <= 107.5) {
                                            if (x[7] <= 31.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[19] <= 99.5) {
                                                if (x[14] <= 14.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 52.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 42.5) {
                                            if (x[17] <= 154.0) {
                                                if (x[17] <= 149.0) {
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
                                            if (x[12] <= 164.5) {
                                                if (x[9] <= 54.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[7] <= 59.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[13] <= 143.5) {
                                        if (x[14] <= 12.5) {
                                            votes[0] += 1;
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
                                        if (x[7] <= 52.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 108.5) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[3] <= 0.006282918620854616) {
                                        if (x[17] <= 124.0) {
                                            if (x[0] <= 129.5) {
                                                votes[1] += 1;
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
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #8
                        if (x[7] <= 59.5) {
                            if (x[1] <= 0.002222290728241205) {
                                if (x[17] <= 117.5) {
                                    if (x[19] <= 31.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[13] <= 70.0) {
                                            if (x[7] <= 22.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.0009057971183210611) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[12] <= 166.5) {
                                        if (x[9] <= 57.0) {
                                            if (x[16] <= 144.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 145.5) {
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
                                        if (x[2] <= 0.013540737796574831) {
                                            if (x[17] <= 147.5) {
                                                if (x[7] <= 53.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 19.5) {
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

                            else {
                                if (x[14] <= 12.5) {
                                    votes[0] += 1;
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
                            if (x[8] <= 0.6500000059604645) {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[9] <= 13.5) {
                                            if (x[3] <= 0.002570965909399092) {
                                                if (x[1] <= 0.0024587720399722457) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 135.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.026257481426000595) {
                                                if (x[7] <= 78.5) {
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
                                        if (x[3] <= 0.0049883523024618626) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
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
                                if (x[6] <= 0.0012841118150390685) {
                                    if (x[17] <= 100.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 149.0) {
                                            if (x[16] <= 92.0) {
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

                                else {
                                    if (x[18] <= 135.5) {
                                        if (x[16] <= 132.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            if (x[8] <= 2.050000011920929) {
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
                            }
                        }

                        // tree #9
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0014899971429258585) {
                                if (x[18] <= 150.5) {
                                    if (x[9] <= 38.0) {
                                        if (x[17] <= 117.5) {
                                            if (x[18] <= 122.0) {
                                                if (x[16] <= 94.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 126.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.0079497997649014) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[2] <= 0.008162157610058784) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= 149.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[7] <= 44.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[1] <= 0.0017624330357648432) {
                                        if (x[14] <= 4.5) {
                                            if (x[13] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[11] <= 23.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }

                                    else {
                                        if (x[14] <= 12.5) {
                                            if (x[19] <= 1.5) {
                                                if (x[1] <= 0.0030874712392687798) {
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

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 129.0) {
                                    if (x[11] <= 89.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[19] <= 75.5) {
                                        if (x[1] <= 0.0016696361126378179) {
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
                        }

                        else {
                            if (x[9] <= 6.5) {
                                if (x[17] <= 102.0) {
                                    votes[2] += 1;
                                }

                                else {
                                    if (x[6] <= 0.0016399789019487798) {
                                        if (x[19] <= 4.5) {
                                            if (x[13] <= 87.5) {
                                                if (x[9] <= 5.0) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[19] <= 0.5) {
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

                                    else {
                                        if (x[3] <= 0.007415310479700565) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 69.0) {
                                    if (x[0] <= 133.5) {
                                        if (x[3] <= 0.000842908542836085) {
                                            if (x[7] <= 80.5) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }

                                        else {
                                            if (x[13] <= 119.5) {
                                                if (x[13] <= 87.5) {
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
                                        if (x[7] <= 80.0) {
                                            if (x[2] <= 0.026257481426000595) {
                                                if (x[9] <= 13.0) {
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
                                            if (x[13] <= 125.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[2] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[3] <= 0.004005805356428027) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }
                            }
                        }

                        // tree #10
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0014124406152404845) {
                                if (x[1] <= 0.0022465247893705964) {
                                    if (x[17] <= 147.5) {
                                        if (x[16] <= 104.5) {
                                            if (x[12] <= 154.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[8] <= 1.300000011920929) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= 137.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[0] <= 135.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[12] <= 163.5) {
                                            if (x[1] <= 0.0013175925996620208) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.002375632058829069) {
                                                if (x[8] <= 0.550000011920929) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 10.5) {
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
                                    if (x[13] <= 144.5) {
                                        if (x[14] <= 12.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[16] <= 146.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }

                                    else {
                                        if (x[7] <= 47.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[17] <= 113.0) {
                                    if (x[0] <= 124.5) {
                                        if (x[11] <= 80.0) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[18] <= 128.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[7] <= 32.0) {
                                        if (x[2] <= 0.19907796243205667) {
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
                            if (x[8] <= 0.6500000059604645) {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 81.0) {
                                        if (x[9] <= 10.5) {
                                            if (x[7] <= 63.5) {
                                                if (x[3] <= 0.007862124824896455) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[16] <= 148.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.0016239177784882486) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[7] <= 69.5) {
                                                    votes[1] += 1;
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
                                if (x[6] <= 0.0009018759301397949) {
                                    if (x[17] <= 100.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[0] <= 149.5) {
                                            if (x[10] <= 9.699999809265137) {
                                                votes[0] += 1;
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
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[10] <= 5.099999904632568) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[4] <= 0.0033674450824037194) {
                                            if (x[12] <= 176.0) {
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
                            }
                        }

                        // tree #11
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.0) {
                                if (x[7] <= 59.5) {
                                    if (x[16] <= 154.0) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[19] <= 0.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 13.5) {
                                        if (x[7] <= 78.5) {
                                            if (x[3] <= 0.0031364854658022523) {
                                                if (x[1] <= 0.0016201918479055166) {
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
                                        if (x[7] <= 79.5) {
                                            if (x[2] <= 0.024993312545120716) {
                                                if (x[3] <= 0.00892094848677516) {
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
                                            votes[2] += 1;
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
                            if (x[6] <= 0.0014124406152404845) {
                                if (x[1] <= 0.002221043803729117) {
                                    if (x[17] <= 142.5) {
                                        if (x[17] <= 107.5) {
                                            if (x[13] <= 70.5) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.2708960995078087) {
                                                if (x[8] <= 0.75) {
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
                                    }

                                    else {
                                        if (x[7] <= 59.0) {
                                            if (x[16] <= 152.5) {
                                                if (x[0] <= 140.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 19.5) {
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

                                else {
                                    if (x[14] <= 12.5) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        if (x[16] <= 143.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 134.0) {
                                    if (x[16] <= 132.0) {
                                        if (x[7] <= 16.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[14] <= 13.0) {
                                                votes[2] += 1;
                                            }

                                            else {
                                                if (x[10] <= 7.050000190734863) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[6] <= 0.001698189356829971) {
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
                        }

                        // tree #12
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0015102746547199786) {
                                if (x[9] <= 38.5) {
                                    if (x[17] <= 148.5) {
                                        if (x[16] <= 104.0) {
                                            if (x[10] <= 5.550000190734863) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[17] <= 120.0) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[17] <= 109.5) {
                                                if (x[0] <= 133.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 14.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[1] <= 0.0029456678312271833) {
                                            if (x[10] <= 10.599999904632568) {
                                                if (x[13] <= 137.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[13] <= 136.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[14] <= 12.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[9] <= 59.5) {
                                        if (x[7] <= 47.0) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[8] <= 0.550000011920929) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[15] <= 1.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[10] <= 4.200000047683716) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[4] <= 0.003650413011200726) {
                                    if (x[18] <= 128.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[1] += 1;
                                    }
                                }

                                else {
                                    if (x[4] <= 0.008605425944551826) {
                                        votes[0] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }
                            }
                        }

                        else {
                            if (x[9] <= 5.5) {
                                if (x[17] <= 104.5) {
                                    if (x[11] <= 168.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0014686750946566463) {
                                        if (x[7] <= 78.5) {
                                            if (x[16] <= 96.5) {
                                                votes[2] += 1;
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
                                            votes[2] += 1;
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
                                        if (x[0] <= 133.5) {
                                            if (x[8] <= 0.3500000089406967) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                if (x[14] <= 3.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[2] <= 0.026257481426000595) {
                                                if (x[9] <= 13.0) {
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
                                        if (x[3] <= 0.00432569085387513) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
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
                        }

                        // tree #13
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.5) {
                                if (x[7] <= 79.5) {
                                    if (x[3] <= 0.0009210464195348322) {
                                        if (x[7] <= 59.0) {
                                            if (x[10] <= 5.150000095367432) {
                                                votes[1] += 1;
                                            }

                                            else {
                                                votes[0] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 78.5) {
                                                if (x[2] <= 0.026257481426000595) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 41.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[9] <= 5.5) {
                                            if (x[7] <= 78.0) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }

                                        else {
                                            if (x[7] <= 59.5) {
                                                if (x[13] <= 138.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.005645957076922059) {
                                                    votes[1] += 1;
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
                                if (x[3] <= 0.004486886318773031) {
                                    votes[2] += 1;
                                }

                                else {
                                    votes[0] += 1;
                                }
                            }
                        }

                        else {
                            if (x[17] <= 107.5) {
                                if (x[12] <= 220.5) {
                                    if (x[8] <= 1.6500000357627869) {
                                        if (x[12] <= 146.5) {
                                            votes[1] += 1;
                                        }

                                        else {
                                            if (x[18] <= 106.5) {
                                                votes[2] += 1;
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
                                    votes[0] += 1;
                                }
                            }

                            else {
                                if (x[1] <= 0.0029390931595116854) {
                                    if (x[17] <= 147.5) {
                                        if (x[6] <= 0.0012801875127479434) {
                                            if (x[8] <= 0.6500000059604645) {
                                                if (x[14] <= 3.5) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[3] <= 0.00041701417649164796) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[3] <= 0.00509876967407763) {
                                                if (x[15] <= 1.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[2] += 1;
                                                }
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
                                    }

                                    else {
                                        if (x[9] <= 25.0) {
                                            if (x[3] <= 0.003917731577530503) {
                                                votes[1] += 1;
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
                                            if (x[8] <= 1.100000023841858) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                votes[1] += 1;
                                            }
                                        }
                                    }
                                }

                                else {
                                    if (x[6] <= 0.0025560228968970478) {
                                        if (x[9] <= 27.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[9] <= 30.5) {
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
                            }
                        }

                        // tree #14
                        if (x[7] <= 59.5) {
                            if (x[6] <= 0.0014899971429258585) {
                                if (x[16] <= 149.5) {
                                    if (x[16] <= 103.0) {
                                        if (x[18] <= 127.0) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }

                                    else {
                                        if (x[9] <= 45.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            if (x[7] <= 47.0) {
                                                if (x[9] <= 59.5) {
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
                                    if (x[1] <= 0.0029347423696890473) {
                                        if (x[14] <= 5.5) {
                                            if (x[13] <= 120.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[16] <= 156.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
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
                                        votes[0] += 1;
                                    }
                                }
                            }

                            else {
                                if (x[18] <= 128.5) {
                                    if (x[11] <= 79.0) {
                                        votes[1] += 1;
                                    }

                                    else {
                                        votes[2] += 1;
                                    }
                                }

                                else {
                                    if (x[6] <= 0.001936516782734543) {
                                        if (x[3] <= 0.0034327871399000287) {
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
                            if (x[9] <= 3.5) {
                                if (x[6] <= 0.001435321057215333) {
                                    if (x[17] <= 99.5) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[7] <= 78.5) {
                                            if (x[12] <= 137.0) {
                                                if (x[0] <= 118.5) {
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

                                else {
                                    if (x[0] <= 135.0) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        if (x[7] <= 62.5) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
                                        }
                                    }
                                }
                            }

                            else {
                                if (x[9] <= 68.5) {
                                    if (x[7] <= 79.5) {
                                        if (x[0] <= 136.5) {
                                            if (x[3] <= 0.00332004576921463) {
                                                if (x[1] <= 0.002970361616462469) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 6.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[9] <= 6.5) {
                                                if (x[16] <= 147.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[9] <= 13.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[3] <= 0.0049883523024618626) {
                                            votes[2] += 1;
                                        }

                                        else {
                                            votes[0] += 1;
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
                        }

                        // tree #15
                        if (x[8] <= 0.550000011920929) {
                            if (x[9] <= 68.5) {
                                if (x[7] <= 79.5) {
                                    if (x[3] <= 0.002549403812736273) {
                                        if (x[7] <= 59.5) {
                                            if (x[17] <= 147.5) {
                                                votes[0] += 1;
                                            }

                                            else {
                                                if (x[13] <= 153.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            if (x[1] <= 0.0012510425294749439) {
                                                if (x[7] <= 78.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }

                                            else {
                                                if (x[14] <= 1.5) {
                                                    votes[1] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }
                                        }
                                    }

                                    else {
                                        if (x[18] <= 149.5) {
                                            if (x[2] <= 0.0027243171352893114) {
                                                if (x[0] <= 136.5) {
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
                                            if (x[1] <= 0.0008043108391575515) {
                                                if (x[3] <= 0.0076299787033349276) {
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
                                }

                                else {
                                    if (x[3] <= 0.00432569085387513) {
                                        votes[2] += 1;
                                    }

                                    else {
                                        votes[0] += 1;
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
                            if (x[17] <= 107.5) {
                                if (x[12] <= 220.5) {
                                    if (x[4] <= 0.001392786332871765) {
                                        if (x[0] <= 121.5) {
                                            votes[0] += 1;
                                        }

                                        else {
                                            votes[2] += 1;
                                        }
                                    }

                                    else {
                                        if (x[11] <= 72.5) {
                                            votes[1] += 1;
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

                            else {
                                if (x[1] <= 0.0017116214730776846) {
                                    if (x[17] <= 143.5) {
                                        if (x[6] <= 0.0012918926659040153) {
                                            if (x[19] <= 111.5) {
                                                if (x[7] <= 54.5) {
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
                                            if (x[17] <= 124.0) {
                                                if (x[0] <= 129.5) {
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
                                        if (x[7] <= 57.5) {
                                            if (x[12] <= 166.5) {
                                                if (x[11] <= 12.5) {
                                                    votes[2] += 1;
                                                }

                                                else {
                                                    votes[0] += 1;
                                                }
                                            }

                                            else {
                                                if (x[18] <= 150.0) {
                                                    votes[0] += 1;
                                                }

                                                else {
                                                    votes[1] += 1;
                                                }
                                            }
                                        }

                                        else {
                                            votes[1] += 1;
                                        }
                                    }
                                }

                                else {
                                    if (x[19] <= 1.5) {
                                        if (x[0] <= 147.5) {
                                            if (x[13] <= 144.5) {
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
                                        if (x[16] <= 97.0) {
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
