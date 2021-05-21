#ifndef _ACBERTH_H
#define _ACBERTH_H
#include <iostream>
#include "BerthClass.h"

using namespace std;

class ACBerthClass : public BerthClass{
    public:
        ACBerthClass();
        // Returns Name of the Booking Class
        virtual string GetName()=0;
        // Returns the loadfactor for SeatbookingClass
        virtual float GetLoadFactor()=0;
       // Returns Boolean of whether the class is AC powered
         bool IsAC();
        // Return the number of tiers 
        virtual int GetNumberOfTiers()=0;
        // Return Status if considered luxury by government
        virtual bool IsLuxury()=0;
        // Destructor
        virtual ~ACBerthClass();
};

// Inline Implementation for Destructor
inline ACBerthClass::~ACBerthClass(){};
inline ACBerthClass::ACBerthClass(){};

// Inline Implementation to return status of sitting
inline bool ACBerthClass::IsAC(){return true;}
#endif