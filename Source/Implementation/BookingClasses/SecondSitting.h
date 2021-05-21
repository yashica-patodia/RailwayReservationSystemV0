/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _SecondSitting_H
#define _SecondSitting_H
#include <iostream>
#include "./PolymorphicHeaders/NonACSeatClass.h"


using namespace std;

//Concrete Singleton Class
class SecondSitting : public NonACSeatClass{

    public:
    static const double sLoadFactor;
    private:
    static SecondSitting *sSecondSitting;

    // Private Constructor
    SecondSitting();

    

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
        static  SecondSitting& Type();
    private:
    // Private Destructor
    ~SecondSitting();
};
#endif