/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "FirstClass.h"
using namespace std;

FirstClass *FirstClass::sFirstClass = 0;
// Constructor
FirstClass::FirstClass()
{
   // sLoadFactor = 2.0;
};

// Get Name of class
string FirstClass::GetName(){
//    return name_;
    return "First Class(FC)";
}
// Get Load Factor
float FirstClass::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int FirstClass::GetNumberOfTiers(){
//    return sLoadFactor;
    return 2;
}

// Get status of luxury declaration for the class
bool FirstClass::IsLuxury(){
//    return isLuxury_;
    return true;
}
// Get Instance of the Singleton Set
 FirstClass& FirstClass::Type(){
    if (!sFirstClass) sFirstClass = new FirstClass();
    return *sFirstClass;
}
// Destructor
FirstClass::~FirstClass(){};
