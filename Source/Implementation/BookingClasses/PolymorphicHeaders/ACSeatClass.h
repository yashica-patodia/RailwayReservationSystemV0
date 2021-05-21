#ifndef _ACSEAT_H
#define _ACSEAT_H
#include <iostream>
#include "SeatClass.h"

using namespace std;

class ACSeatClass : public SeatClass{
    public:
        ACSeatClass();
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
        virtual ~ACSeatClass();
};

// Inline Implementation for Destructor
inline ACSeatClass::~ACSeatClass(){};
inline ACSeatClass::ACSeatClass(){};
// Inline Implementation to return status of sitting
inline bool ACSeatClass::IsAC(){return true;}
#endif