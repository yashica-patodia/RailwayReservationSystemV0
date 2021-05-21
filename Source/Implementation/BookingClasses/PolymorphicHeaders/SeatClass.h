#ifndef _SEAT_H
#define _SEAT_H
#include <iostream>
#include "BookingClasses.h"

using namespace std;

class SeatClass : public BookingClasses{
    public:
        SeatClass();
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
        virtual ~SeatClass();
};

// Inline Implementation for Destructor
inline SeatClass::~SeatClass(){};
inline SeatClass::SeatClass(){};
// Inline Implementation to return status of sitting
inline bool SeatClass::IsSeat(){return true;}
#endif