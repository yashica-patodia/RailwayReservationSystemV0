/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _DATE_H
#define _DATE_H
#include<iostream>
using namespace std;

class Date
{
   const char monthNames[12][4] = {"Jan", "Feb", "Mar", "Apr", "May", "Jun",
                        "Jul", "Aug", "Sep", "Oct", "Nov", "Dec"};
   const char dayNames[7][10] = {"Monday", "Tuesday", "Wednesday", "Thursday",
                       "Friday", "Saturday", "Sunday"};
    enum Month
    {
        Jan = 1,
        Feb,
        Mar,
        Apr,
        May,
        Jun,
        Jul,
        Aug,
        Sep,
        Oct,
        Nov,
        Dec
    };
    enum Day
    {
        Mon,
        Tue,
        Wed,
        Thr,
        Fri,
        Sat,
        Sun
    };
    typedef unsigned int UINT;
    UINT date_;
    Month month_;
    UINT year_;

public:
    // Constructor 
    Date(UINT d, UINT m, UINT y) ;
    //Destructor
    ~Date();
    //output ostream
    friend ostream &operator<<(ostream &os, const Date &date);
    //Checks if a given date is valid or not
    bool validDate();
    static void UTDate();
   
};
#endif