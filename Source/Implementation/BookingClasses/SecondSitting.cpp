/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "SecondSitting.h"
using namespace std;

SecondSitting *SecondSitting::sSecondSitting=0;
// Constructor
SecondSitting::SecondSitting()
{
    //sLoadFactor = 0.5;
};

// Get Name of class
string SecondSitting::GetName(){
//    return name_;
    return "SecondSitting Class(2S)";
}
// Get Load Factor
float SecondSitting::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int SecondSitting::GetNumberOfTiers(){
//    return sLoadFactor;
    return 0;
}

// Get status of luxury declaration for the class
bool SecondSitting::IsLuxury(){
//    return isLuxury_;
    return false;
}
// Get Instance of the Singleton Set
 SecondSitting& SecondSitting::Type(){
    if (!sSecondSitting) sSecondSitting = new SecondSitting();
    return *sSecondSitting;
}
// Destructor
SecondSitting::~SecondSitting(){};
