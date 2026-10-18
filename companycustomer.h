#ifndef COMPANYCUSTOMER_H
#define COMPANYCUSTOMER_H
#include<iostream>
#include<string>
#include"customer.h"
using namespace std ;


class companycustomer:public customer
{
    public:
        companycustomer();
        companycustomer(string companyname,string taxid,string name,string phone,string id);
        ~companycustomer();

        string Getcompanyname();
        void Setcompanyname(string companyname);
        string Gettaxid();
        void Settaxid(string taxid);
        void print();

    private:
        string companyname;
        string taxid;
};

#endif // COMPANYCUSTOMER_H
