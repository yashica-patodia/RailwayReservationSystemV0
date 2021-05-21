/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _ACChairCar_H
#define _ACChairCar_H
#include <iostream>
#include "./PolymorphicHeaders/ACSeatClass.h"


using namespace std;

//Concrete Singleton Class
class ACChairCar : public ACSeatClass{

    public:
    static const double sLoadFactor;
    private:
    static ACChairCar *sACChairCar;

    // Private Constructor
    ACChairCar();

    

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
        static  ACChairCar& Type();
    private:
    // Private Destructor
    ~ACChairCar();
};
#endif