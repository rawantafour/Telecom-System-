#include"customernode.h"
#include<iostream>
using namespace std ;

customernode::customernode()
{
  data=nullptr ;
  next=nullptr ;
}

customernode::customernode(customer *data,customernode *next)
{
    this->data=data ;
    this->next=nullptr ;
}

customernode::~customernode()
{
   cout<<"delete data"<< endl ;
}
