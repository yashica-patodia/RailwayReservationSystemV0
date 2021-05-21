/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _FirstClass_H
#define _FirstClass_H
#include <iostream>
#include "./PolymorphicHeaders/NonACBerthClass.h"


using namespace std;

//Concrete Singleton Class
class FirstClass : public NonACBerthClass{

    public:
    static const double sLoadFactor;
    private:
    static FirstClass *sFirstClass;

    // Private Constructor
    FirstClass();

    

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
        static  FirstClass& Type();
    private:
    // Private Destructor
    ~FirstClass();
};
#endif