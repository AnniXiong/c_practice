//  main.cpp
//  homework
//
//  Created by Anni Xiong on 9/16/18.
//  Copyright © 2018 Anni Xiong. All rights reserved.


//  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.  Find the sum of all the multiples of 3 or 5 below 1000.

#include <iostream>
using namespace std;

int main(int argc, const char * argv[]) {
    
    int sum = 0;
    
    for (int i = 0; i < 1000; i++){
        if (i%3 == 0 || i%5 == 0){
            sum+=i;
        }
    }
    
    cout << "the sum of multiples of 3 or 5 under 100 is " << sum << endl;
    return 0;
}
