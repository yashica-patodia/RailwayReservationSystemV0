/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#include "Date.h"
using namespace std;

Date::Date(UINT d, UINT m, UINT y): date_(d), month_((Month)m), year_(y){};
// Destructor for Date
Date::~Date(){};
// Returns boolean whether Date is Valid
bool Date::validDate(){
    if ((date_<=31) && (date_>=1) && (month_>=1) && (month_<=12)) return true;
    else return false;
}
// Overload Output to print a date
ostream& operator<< (ostream &os, const Date& date){
    if (const_cast<Date&>(date).validDate()) os << date.date_ << "/" << date.monthNames[date.month_ - 1] << "/" << date.year_;
    else os << "Invalid Date"<<endl;
    return os;
}