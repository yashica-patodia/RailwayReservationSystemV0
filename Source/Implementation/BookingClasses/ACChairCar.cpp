/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "ACChairCar.h"
using namespace std;

ACChairCar *ACChairCar::sACChairCar=0;
// Constructor
ACChairCar::ACChairCar()
{
   // sLoadFactor = 1.25;
};

// Get Name of class
string ACChairCar::GetName(){
//    return name_;
    return "AC Chair Car Class(CC)";
}
// Get Load Factor
float ACChairCar::GetLoadFactor(){
    return sLoadFactor;
}
// Get Number of Tiers
int ACChairCar::GetNumberOfTiers(){
//    return sLoadFactor;
    return 0;
}

// Get status of luxury declaration for the class
bool ACChairCar::IsLuxury(){
//    return isLuxury_;
    return false;
}
// Get Instance of the Singleton Set
 ACChairCar& ACChairCar::Type(){
    if (!sACChairCar) sACChairCar = new ACChairCar();
    return *sACChairCar;
}
// Destructor
ACChairCar::~ACChairCar(){};
