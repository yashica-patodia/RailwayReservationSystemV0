/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _AC2Tier_H
#define _AC2Tier_H
#include <iostream>
#include "./PolymorphicHeaders/ACBerthClass.h"


using namespace std;

//Concrete Singleton Class
class AC2Tier : public ACBerthClass{
    public:
    static const double sLoadFactor;

    private:
    static AC2Tier *sAC2Tier;

    // Private Constructor
    AC2Tier();

    

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
        static  AC2Tier& Type();

    private:
    // Private Destructor
    ~AC2Tier();
};
#endif