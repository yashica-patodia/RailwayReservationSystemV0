/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _ACFirstClass_H
#define _ACFirstClass_H
#include <iostream>
#include "./PolymorphicHeaders/ACBerthClass.h"


using namespace std;

//Concrete Singleton Class
class ACFirstClass : public ACBerthClass{

    public:
    static const double sLoadFactor;
    private:
    static ACFirstClass *sACFirstClass;

    // Private Constructor
    ACFirstClass();

    

    public:
       
        // Returns Name of the Booking Class
        string GetName();
        // Returns the loadfactor for bookingClass
        float GetLoadFactor();
         // Return the number of tiers 
        int GetNumberOfTiers();
        // Return Status if considered luxury by government
        bool IsLuxury();
        // Get Instance of the Singleton Set
        static  ACFirstClass& Type();
    private:
    // Private Destructor
    ~ACFirstClass();
};
#endif