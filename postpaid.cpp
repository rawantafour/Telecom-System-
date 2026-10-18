#include"postpaid.h"
#include<iostream>
using namespace std ;

postpaid::postpaid()
:service()
{
    unpaidamount=0;
    usedbalance=0;
}
postpaid::postpaid(int usedbalance,float unpaidamount,string servicename,string serviceid ,float servicepriceofmin)
:service(servicename,serviceid,servicepriceofmin)
{
    this->usedbalance=usedbalance ;
    this->unpaidamount=unpaidamount ;
}
postpaid::~postpaid()
{
    cout<<"postpaid object deleted"<< endl ;
}
void postpaid::Setusedbalance(int usedbalance)
{
    this->usedbalance=usedbalance ;
}
int postpaid::Getusedbalance()
{
    return usedbalance ;
}
float postpaid::calculate()
{
    unpaidamount=usedbalance*Getservicepriceofmin() ;
    return unpaidamount ;
}
float postpaid::Getunpaidamount()
{
    return unpaidamount ;
}
void postpaid::print()
{
    cout<<"usedbalance:"<<" "<<usedbalance << endl;
    cout<<"unpaidamount:"<<" "<<unpaidamount << endl;
    service::print() ;

}
