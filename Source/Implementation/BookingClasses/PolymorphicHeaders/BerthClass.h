#ifndef _BERTH_H
#define _BERTH_H
#include <iostream>
#include "BookingClasses.h"



using namespace std;

class BerthClass : public BookingClasses{

    public:
        BerthClass();
        // Returns Name of the Booking Class
        virtual string GetName()=0;
        // Returns the loadfactor for SeatbookingClass
        virtual float GetLoadFactor()=0;
        // Returns Status of sitting
        //not virtual 
        bool IsSeat();
        // Returns Boolean of whether the class is AC powered
        virtual bool IsAC()=0;
        // Return the number of tiers 
        virtual int GetNumberOfTiers()=0;
        // Return Status if considered luxury by government
        virtual bool IsLuxury()=0;
        // Destructor
        virtual ~BerthClass();
};

// Inline Implementation for Destructor
inline BerthClass::~BerthClass(){};
inline BerthClass::BerthClass(){};

// Inline Implementation to return status of sitting
inline bool BerthClass::IsSeat(){return false;}
#endif