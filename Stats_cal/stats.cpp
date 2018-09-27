//
//  stats.cpp
//  homework
//
//  Created by Anni Xiong on 9/20/18.
//  Copyright © 2018 Anni Xiong. All rights reserved.
//

#include <stdio.h>
#include "stats.h"
#include <vector>
#include <sstream>
#include <iostream>
#include<cmath>
using namespace std;

stat::stat () {
    trial = 100;
    vector <int> data;
    mu = 0;
    std = 0;
    
}

double stat:: mean (){
    int d = 0;
    for (int i = 0; i < data.size(); i++){
        d = d + data[i];
    }
    cout << " sum is " << d;
    cout << " ";
    cout << "size of array " << data.size ();
    mu = d/data.size();
    return mu;
}

double stat:: stdev () {
    double s = 0;
    for (int i = 0; i < data.size(); i++) {
        s = s + pow((data[i] - mu),2);
    }
    cout << "stdev sum is" << s;
    cout << " ";
    std = sqrt(s)/(data.size () -1);
    
    
    return std;
    
}

string stat::output() {
    
    stringstream ss;
    cout << "the mean is ";
    cout << mu;
    cout << "";
    cout << "the standard deviation is ";
    cout << std;
    cout << "";
    
    return ss.str();
}

vector <int> stat:: gen_data () {
    for (int i = 0; i < trial; i++){
        int ran_d = rand() % 10;
        data.push_back(ran_d);
        cout << ran_d << ", "<<flush;
    }
    return data;
}
