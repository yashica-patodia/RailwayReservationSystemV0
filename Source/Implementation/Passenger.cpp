/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "Passenger.h"
using namespace std;
//Parameterized Constructor
Passenger::Passenger(string name_,string aadharNumber_,Date dob_,string gender_,string mobileNumber_,string category_):name_(name_),aadharNumber_(aadharNumber_),dob_(dob_),gender_(gender_),mobileNumber_(mobileNumber_),category_(category_){};
//Destructor
Passenger ::~Passenger(){};
//Copy Assignment Operator
Passenger ::Passenger(const Passenger &p):name_(p.name_),aadharNumber_(p.aadharNumber_),dob_(p.dob_),gender_(p.gender_),mobileNumber_(p.mobileNumber_),category_(p.category_){};
//Output ostream operator -Friend Function
ostream &operator<<(ostream &os, const Passenger &p)
{
    //os<<"Station Name:"<<st.name<<endl;
    os<<"Name:"<<p.name_<<"Aadhar Number:"<<p.aadharNumber_<<"Date of Birth:"<<p.dob_<<"Gender:"<<p.gender_<<"Mobile Number:"<<p.mobileNumber_<<"Category:"<<p.category_<<endl;
    return os;

}
