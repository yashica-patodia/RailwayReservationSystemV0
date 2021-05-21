/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _PASSENGER_H
#define _PASSENGER_H
#include "Date.h"
#include <iostream>
using namespace std;
class Passenger
{
    string name_;
    string aadharNumber_;
    Date dob_;
    string gender_;
    string mobileNumber_;
    string category_;
    public:
    //Parameterized Constructor
    Passenger(string name_,string aadharNumber_,Date dob_,string gender_,string mobileNumber_,string category_);
    //Copy Assignment Operator
    Passenger(const Passenger &p);
    //Destructor
    ~Passenger();
    //Output ostream operator
    friend ostream &operator<<(ostream &os, const Passenger &p);
    //Static unit testing function
    static void UTPassenger(); 


};
#endif