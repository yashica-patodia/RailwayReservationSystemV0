/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "ACFirstClass.h"
using namespace std;

ACFirstClass *ACFirstClass::sACFirstClass=0;
// Constructor
ACFirstClass::ACFirstClass()
{
    //sLoadFactor = 3.0;
};

// Get Name of class
string ACFirstClass::GetName(){
//    return name_;
    return "AC First Class(1A)";
}
// Get Load Factor
float ACFirstClass::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int ACFirstClass::GetNumberOfTiers(){
//    return sLoadFactor;
    return 2;
}

// Get status of luxury declaration for the class
bool ACFirstClass::IsLuxury(){
//    return isLuxury_;
    return true;
}
// Get Instance of the Singleton Set
 ACFirstClass& ACFirstClass::Type(){
    if (!sACFirstClass) sACFirstClass = new ACFirstClass();
    return *sACFirstClass;
}
// Destructor
ACFirstClass::~ACFirstClass(){};
