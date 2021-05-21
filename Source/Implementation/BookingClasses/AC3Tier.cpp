/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "AC3Tier.h"
using namespace std;

AC3Tier *AC3Tier::sAC3Tier=0;
// Constructor
AC3Tier::AC3Tier()
{
    //loadFactor_ = 1.75;
};

// Get Name of class
string AC3Tier::GetName(){
//    return name_;
    return "AC 3Tier Class(3A)";
}
// Get Load Factor
float AC3Tier::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int AC3Tier::GetNumberOfTiers(){
//    return sLoadFactor;
    return 3;
}

// Get status of luxury declaration for the class
bool AC3Tier::IsLuxury(){
//    return isLuxury_;
    return false;
}
// Get Instance of the Singleton Set
 AC3Tier& AC3Tier::Type(){
    if (!sAC3Tier) sAC3Tier = new AC3Tier();
    return *sAC3Tier;
}
// Destructor
AC3Tier::~AC3Tier(){};
