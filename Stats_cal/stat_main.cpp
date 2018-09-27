//  main.cpp
//  homework
//
//  Created by Anni Xiong on 9/16/18.
//  Copyright © 2018 Anni Xiong. All rights reserved.
//
//  OOP practce Calculating the mean and standard deviation of an array(using vector) of
//  randomly generated data


#include <iostream>
#include "stats.h"

using namespace std;


int main(int argc, const char * argv[]) {
    stat data1;
    
    data1.gen_data();
    data1.mean();
    data1.stdev();
    cout << data1.output() <<endl;
    
    
    return 0;
}
