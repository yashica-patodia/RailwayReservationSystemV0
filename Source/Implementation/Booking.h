/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _BOOKING_H
#define _BOOKING_H
#include <iostream>
#include <vector>
#include<set>
#include<map>
#include "Station.h"
#include "Date.h"
#include "Passenger.h"
#include "Railways.h"
#include "BookingHeaders.h"




using namespace std;

class Booking{
    Station fromStation_;
    Station toStation_;
    Date date_;
    BookingClasses &bookingClass_;
    Passenger *passenger_;
    bool bookingStatus_;
    string bookingMessage_;
    double fare_;
    long long int PNR_;
    
 public:
    static const double sBaseFarePerKM;
    static vector<Booking> sBookings;
    static long long int sBookingPNRSerial;
    static const  double sACSurcharge;
    static const  double sLuxuryTaxPercent;

   
        // Constructor
        Booking(Station fromStation,Station toStation,Date date,BookingClasses &bookingClass,Passenger *passenger,bool bookingStatus,string bookingMessage,double fare);
                                  
            
        Booking(const Booking& f);          // Copy Constructor


        // Compute the fare
        long long int ComputeFare();
        //Output stream
        friend ostream &operator<<(ostream &os, const Booking &bk);
        static void UTBooking();
        //Destructor  
       ~Booking();     
};
#endif