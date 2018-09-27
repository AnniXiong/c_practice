//
//  stats.h
//  homework
//
//  Created by Anni Xiong on 9/20/18.
//  Copyright © 2018 Anni Xiong. All rights reserved.
//

#include <vector>
using namespace std;
#ifndef stats_h
#define stats_h
#include <sstream>

class stat {
    private:
        int trial;
        vector <int> data;
        double mu;
        double std;
    
    public:
        stat();
        double mean ();
        double stdev();
        string output ();
        vector <int> gen_data ();
};

#endif /* stats_h */
