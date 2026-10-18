#ifndef CALLRECORDING_H
#define CALLRECORDING_H
#include<iostream>
#include<string>
#include"service.h"
using namespace std ;


class callrecording:public service
{
    public:
        callrecording();
        callrecording(string phone, int calltime, double callprice,string servicename,string serviceid,float servicepriceofmin);
        ~callrecording();

        string Getphone();
        void Setphone(string phone);
        int Getcalltime();
        void Setcalltime(int calltime);
        float calculate();
        double Getcallprice();
        void print() ;

    private:
        string phone;
        int calltime;
        double callprice;
};

#endif // CALLRECORDING_H
