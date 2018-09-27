#include <iostream>
#include "person.hpp"
using namespace std;

int main() {
    
    
    int sec = 100;
    int hr = (double)sec / 3600;
    cout << "number of hours are " << hr <<endl;
    int min = (sec - hr * 3600)/60;
    cout << "number of minutes are " << hr <<endl;
    int s = sec - (min * 60 + hr * 3600);
    cout << "There are " << hr << " hours " << min << " minutes and " << s << " seconds " << "in this time. " <<endl;
    
    int check = hr * 3600 + min * 60 + s;
    
    cout << "This is for checking " << check <<endl;
    
    return 0;
}
