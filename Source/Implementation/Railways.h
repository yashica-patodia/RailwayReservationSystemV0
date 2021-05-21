/* Name-Yashica Patodia
 * Roll No-19CS10067
 * Assignment 3
*/
#ifndef _RAILWAYS_H
#define _RAILWAYS_H
#include "Station.h"
#include<iostream>
#include<vector>
#include<map>
#include<set>
using namespace std;
class Railways
{
    public:
    static vector<Station>sStation;
    static map<Station,int>sHashMap;
    static map<pair<int,int>,double>sDistStations;
    static Railways *sIndianRailways;
    //Private constructors and destructors for singleton class
    Railways();
    ~Railways();

    public:
    //Get instance of singleton class
    static  Railways& GetRailways();
    //output ostream
    friend ostream &operator<<(ostream &os, const Railways &r);
    //Distance between two stations
    double GetDistance(const Station& a, const Station& b);
    //Copy Assignment operator
    Railways &operator=(const Railways &r);
    //Utilization functions
    void printStations(vector<Station>sStation);
    void printDistance(map<pair<int,int>,double>sDistStations);
    //Unit Testing functions
    static void UTRailways();
};
#endif
