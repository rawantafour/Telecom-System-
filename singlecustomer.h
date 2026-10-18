#ifndef SINGLECUSTOMER_H
#define SINGLECUSTOMER_H
#include"customer.h"
#include<iostream>
#include<string>
using namespace std ;


class singlecustomer:public customer
{
    public:
        singlecustomer();
        singlecustomer(string nationalid,string name,string id,string phone);
        ~singlecustomer();

        string Getnationalid();
        void Setnationalid(string nationalid);
        void print();

    private:
        string nationalid;
};

#endif // SINGLECUSTOMER_H
