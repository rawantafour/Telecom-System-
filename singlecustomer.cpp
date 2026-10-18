#include "singlecustomer.h"
#include<iostream>
using namespace std ;

singlecustomer::singlecustomer()
:customer()
{
    nationalid=" " ;
}
singlecustomer::singlecustomer(string nationalid, string name, string id, string phone)
:customer(name,id,phone)
{
    this->nationalid=nationalid ;
}
void singlecustomer::Setnationalid(string nationalid)
{
    this->nationalid=nationalid ;
}

string singlecustomer::Getnationalid()
{
   return nationalid ;
}

void singlecustomer::print()
{
    cout<<"nationalid:"<<" "<< nationalid<< endl;
    customer::print() ;
}

singlecustomer::~singlecustomer()
{
    cout<<"singlecustomer object deleted"<< endl;
}
