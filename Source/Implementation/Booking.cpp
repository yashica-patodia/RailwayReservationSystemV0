/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "Booking.h"
#include <math.h>
#define endl '\n'
using namespace std;

// // Static Member initialisation
// double sBaseFarePerKM = 0.50;
// long long int Booking::sBookingPNRSerial = 1;
// vector<Booking> sBookings;
// float sACSurCharge = 50.0;
// float sLuxuryTaxPercent = 0.25;

// Constructors
Booking::Booking(Station fromStation,Station toStation, Date date, BookingClasses &bookingClass,Passenger *passenger=NULL,bool bookingStatus = true,string bookingMessage = "BOOKING SUCCEEDED",double fare = 0.0):fromStation_(fromStation), toStation_(toStation),date_(date), bookingClass_(bookingClass),passenger_(passenger), bookingStatus_(bookingStatus),bookingMessage_(bookingMessage), fare_(fare),PNR_(sBookingPNRSerial++)
{
                    sBookings.push_back(*this);
};

Booking::Booking(const Booking& f):fromStation_(f.fromStation_), toStation_(f.toStation_),date_(f.date_), bookingClass_(f.bookingClass_),passenger_(f.passenger_), bookingStatus_(f.bookingStatus_),bookingMessage_(f.bookingMessage_), fare_(f.fare_), PNR_(f.PNR_){};
// Computes Fare for a Booking
long long int Booking::ComputeFare()
{
    double travelDistance = fromStation_.GetDistance(toStation_);
    double baseFare =1.0*travelDistance*sBaseFarePerKM;
    double loadedFare = baseFare*(bookingClass_.GetLoadFactor());
    if (bookingClass_.IsAC()) loadedFare += sACSurcharge;
    double extra=0;
    if (bookingClass_.IsLuxury())
        extra=1.0*sLuxuryTaxPercent*loadedFare;

    loadedFare+=extra;
    
   // return ceil(loadedFare)+1;
    loadedFare=round(loadedFare);
    long long int finalAmount = static_cast<long long int>(loadedFare);
    return finalAmount;
}
ostream &operator<<(ostream &os, const Booking &bk)
{
    
    Station s1(bk.fromStation_);
    Station s2(bk.toStation_);
    string from=s1.GetName();
    string to=s2.GetName();
    os<<bk.bookingMessage_<<":"<<endl;
    os<<"PNR Number = "<<bk.PNR_<<endl;
    os<<"From Station = "<<from<<endl;
    os<<"To Station = "<<to<<endl;
    os<<"Travel Date = "<<bk.date_<<endl;
    os<<"Travel Class = "<<bk.bookingClass_.GetName()<<endl;
    if(bk.bookingClass_.IsSeat())
    os<<"  : Mode: Sitting"<<endl;
    else
    os<<"  : Mode: Sleeping"<<endl;
    if(bk.bookingClass_.IsAC())
    os<<"  : Comfort: AC"<<endl;
    else
    os<<"  : Comfort: Non-AC"<<endl;
    os<<"  : Bunks: "<<bk.bookingClass_.GetNumberOfTiers()<<endl;
    if(bk.bookingClass_.IsLuxury())
    os<<"  : Luxury: Yes"<<endl;
    else
    os<<"  : Luxury: No"<<endl;
    Booking booking(bk);
    double fare=booking.ComputeFare();
    os<<"Fare: "<<ceil(fare)<<endl;
    os<<endl;
    return os;
}
Booking ::~Booking(){};