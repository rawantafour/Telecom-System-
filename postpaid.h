#ifndef POSTPAID_H
#define POSTPAID_H
#include"service.h"
#include<iostream>
#include<string>
using namespace std ;

class postpaid:public service
{
    public:

        postpaid();
        postpaid(int usedbalance,float unpaidamount,string servicename,string serviceid,float servicepriceofmin);
        ~postpaid();

        int Getusedbalance();
        void Setusedbalance(int usedbalance);
        float calculate() ;
        float Getunpaidamount();
        void print();


    private:
        int usedbalance;
        float unpaidamount;

};

#endif // POSTPAID_H
