/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _SLEEPER_H
#define _SLEEPER_H
#include <iostream>
#include "./PolymorphicHeaders/NonACBerthClass.h"


using namespace std;

//Concrete Singleton Class
class Sleeper : public NonACBerthClass{

    public:
    static const double sLoadFactor;
    private:
    static Sleeper *sSleeper;

    // Private Constructor
    Sleeper();

    

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
        static  Sleeper& Type();
    private:
    // Private Destructor
    ~Sleeper();
};
#endif