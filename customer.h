#ifndef CUSTOMER_H
#define CUSTOMER_H
#include<iostream>
#include<string>
#include"prepaid.h"
#include"postpaid.h"
#include"databundle.h"
#include"callrecording.h"
using namespace std ;

class customer
{
    public:
        customer();
        customer(string name,string id,string phone );
        ~customer();

        void setprepaid(prepaid* p) ;
        void setpostpaid(postpaid* p) ;
        void setdatabundle(databundle* bun) ;
        void setcallrecording(callrecording* c) ;

        string Getname();
        void Setname(string name);
        string Getid();
        void Setid(string id);
        string Getphone();
        void Setphone(string phone);
        virtual void print();
    protected :
        prepaid* myprepaid ;
        postpaid* mypostpaid ;
        databundle* mydatabundle ;
        callrecording* mycallrecording ;

    private:
        string name;
        string id;
        string phone;

};

#endif // CUSTOMER_H
