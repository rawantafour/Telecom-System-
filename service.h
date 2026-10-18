#ifndef SERVICE_H
#define SERVICE_H
#include<iostream>
#include<string>
using namespace std ;


class service
{
    public:
        service();
        service(string serviceid,string servicename,float servicepriceofmin);
        ~service();

        string Getserviceid();
        void Setserviceid(string serviceid);
        string Getservicename();
        void Setservicename(string servicename);
        float Getservicepriceofmin();
        void Setservicepriceofmin(float servicepriceofmin);
        virtual void print();
        virtual float calculate()=0 ;



    private:
        string serviceid;
        string servicename;
        float servicepriceofmin;
};

#endif // SERVICE_H
