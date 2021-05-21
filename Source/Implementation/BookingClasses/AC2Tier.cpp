/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "AC2Tier.h"
using namespace std;

AC2Tier *AC2Tier::sAC2Tier=0;
// Constructor
AC2Tier::AC2Tier()
{
    //loadFactor_ = 2.0;
};

// Get Name of class
string AC2Tier::GetName()
{
//    return name_;
    return "AC 2Tier Class(2A)";
}
// Get Load Factor
float AC2Tier::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int AC2Tier::GetNumberOfTiers(){
//    return loadFactor_;
    return 2;
}

// Get status of luxury declaration for the class
bool AC2Tier::IsLuxury(){
//    return isLuxury_;
    return false;
}
// Get Instance of the Singleton Set
 AC2Tier& AC2Tier::Type(){
    if (!sAC2Tier) sAC2Tier = new AC2Tier();
    return *sAC2Tier;
}
// Destructor
AC2Tier::~AC2Tier(){};
