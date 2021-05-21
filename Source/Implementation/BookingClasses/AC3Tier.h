/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _AC3Tier_H
#define _AC3Tier_H
#include <iostream>
#include "./PolymorphicHeaders/ACBerthClass.h"


using namespace std;

//Concrete Singleton Class
class AC3Tier : public ACBerthClass{
    public:
    static const double sLoadFactor;
    private:
    static AC3Tier *sAC3Tier;

    // Private Constructor
    

    

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
        static  AC3Tier& Type();
    private:
    
    AC3Tier();
    // Private Destructor
    ~AC3Tier();
};
#endif