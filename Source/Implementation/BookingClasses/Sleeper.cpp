/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "Sleeper.h"
using namespace std;

Sleeper *Sleeper::sSleeper=0;
// Constructor
Sleeper::Sleeper()
{
    //sLoadFactor = 1.0;
};

// Get Name of class
string Sleeper::GetName(){
//    return name_;
    return "Sleeper Class(SL)";
}
// Get Load Factor
float Sleeper::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int Sleeper::GetNumberOfTiers(){
//    return sLoadFactor;
    return 3;
}

// Get status of luxury declaration for the class
bool Sleeper::IsLuxury(){
//    return isLuxury_;
    return false;
}
// Get Instance of the Singleton Set
 Sleeper& Sleeper::Type(){
    if (!sSleeper) sSleeper = new Sleeper();
    return *sSleeper;
}
// Destructor
Sleeper::~Sleeper(){};
