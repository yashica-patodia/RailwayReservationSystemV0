#ifndef _NonACBERTH_H
#define _NonACBERTH_H
#include <iostream>
#include "BerthClass.h"

using namespace std;

class NonACBerthClass : public BerthClass{
    public:
        NonACBerthClass();
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
        virtual ~NonACBerthClass();
};

// Inline Implementation for Destructor
inline NonACBerthClass::~NonACBerthClass(){};
inline NonACBerthClass::NonACBerthClass(){};
// Inline Implementation to return status of sitting
inline bool NonACBerthClass::IsAC(){return false;}
#endif