#ifndef CUSTOMERLIST_H
#define CUSTOMERLIST_H
#include"customernode.h"
#include"customer.h"
#include<iostream>
using namespace std ;


class customerlist
{
    public:
        customerlist();
        customerlist(customernode* head,customernode* tail);
        ~customerlist();
        void addcustomer(customer* newcustomer);
        bool deletecustomer(string id) ;
        bool searchcustomer(string id) ;


    private:
        customernode* head;
        customernode* tail;
};

#endif // CUSTOMERLIST_H
