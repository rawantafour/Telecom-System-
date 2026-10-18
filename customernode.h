#ifndef CUSTOMERNODE_H
#define CUSTOMERNODE_H
#include<iostream>
#include"customer.h"
using namespace std ;


class customernode
{
    public:
        customernode();
        customernode(customer *data,customernode *next=nullptr);
        ~customernode();

        customer* data;
        customernode* next;

};

#endif // CUSTOMERNODE_H
