#ifndef PREPAID_H
#define PREPAID_H
#include<iostream>
#include<string>
#include"service.h"
using namespace std ;

class prepaid:public service
{
    public:

        prepaid();
        prepaid(int usedbalance,int oldbalance,int remainingbalance,string servicename,string serviceid,float servicepriceofmin);
        ~prepaid();

        int Getusedbalance();
        void Setusedbalance(int usedbalance);
        int Getoldbalance();
        void Setoldbalance(int oldbalance);
        float calculate() ;
        int Getremainingbalance();
        void print();


    private:
        int usedbalance;
        int oldbalance;
        int remainingbalance;

};

#endif // PREPAID_H
