#ifndef _NonACSEAT_H
#define _NonACSEAT_H
#include <iostream>
#include "SeatClass.h"

using namespace std;

class NonACSeatClass : public SeatClass{
    public:
        NonACSeatClass();
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
        virtual ~NonACSeatClass();
};

// Inline Implementation for Destructor
inline NonACSeatClass::~NonACSeatClass(){};
inline NonACSeatClass::NonACSeatClass(){};
// Inline Implementation to return status of sitting
inline bool NonACSeatClass::IsAC(){return false;}
#endif