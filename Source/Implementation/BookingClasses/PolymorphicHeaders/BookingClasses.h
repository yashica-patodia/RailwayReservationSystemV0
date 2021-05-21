#ifndef _BOOKINGBASE_H
#define _BOOKINGBASE_H 
#include <iostream> 

using namespace std;

class BookingClasses{
    public:
        static const double sLoadFactor;
    public:
        BookingClasses();
    public:
        // Returns Name of the Booking Class
        virtual string GetName()=0;
        // Returns the loadfactor for bookingClass
        virtual float GetLoadFactor()=0;
        // Returns Status of sitting
        virtual bool IsSeat()=0;
        // Returns Boolean of whether the class is AC powered
        virtual bool IsAC()=0;
        // Return the number of tiers 
        virtual int GetNumberOfTiers()=0;
        // Return Status if considered luxury by government
        virtual bool IsLuxury()=0;
        static void UTBookingClasses();
         // Virtual Desctructor
        virtual ~BookingClasses();
};
inline BookingClasses::~BookingClasses(){};
inline BookingClasses::BookingClasses(){};
#endif