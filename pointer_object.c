//  Created by Anni Xiong on 10/3/18.
//  Copyright © 2018 Anni Xiong. All rights reserved.
//  returning objects from functions through pointer

#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

class particle {
private:
    double mass;
    double spin;
public:
    void Setmass (double mass){this->mass = mass;}
    void SetSpin (double spin){this->spin = spin; }
    void printinfo () const {cout << "the particle mass is "<< mass <<" MeV "<<"the spin is"<<spin <<endl;}
    
    //Constructor
    particle () {cout << "particle created"<<endl;}
    particle (const particle& other): mass(other.mass){cout << "particle object created by copying}" <<endl;}
    ~particle() {cout <<"particle destroied"<<endl;}
};

particle* createParticle (double mass, double spin) {
    particle *pparticle = new particle (); // allocating memory on heap
    pparticle -> SetSpin(spin);
    pparticle -> Setmass(mass);
    return pparticle;
}
    int main (){
        particle *Pproton = createParticle(938.27, 0.5);
        Pproton-> printinfo ();
        delete Pproton;
        return 0;
    }
