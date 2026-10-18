#include"prepaid.h"
#include<iostream>
using namespace std ;

prepaid::prepaid()
:service()
{
    usedbalance=0 ;
    oldbalance=0 ;
    remainingbalance=0 ;
}
prepaid::prepaid(int usedbalance,int oldbalance,int remainingbalance,string servicename,string serviceid,float servicepriceofmin)
:service(servicename,serviceid,servicepriceofmin)
{
    this->usedbalance=usedbalance ;
    this->oldbalance=oldbalance ;
    this->remainingbalance=remainingbalance ;
}
prepaid::~prepaid()
{
    cout<<"prepaid object deleted"<< endl;
}
void prepaid::Setusedbalance(int usedbalance)
{
    this->usedbalance=usedbalance ;
}
int prepaid::Getusedbalance()
{
    return usedbalance ;
}
void prepaid::Setoldbalance(int oldbalance)
{
    this->oldbalance=oldbalance ;
}
int prepaid::Getoldbalance()
{
    return oldbalance ;
}
float prepaid::calculate()
{
    remainingbalance=oldbalance-usedbalance ;
    return remainingbalance ;
}
int prepaid::Getremainingbalance()
{
    return remainingbalance ;
}
void prepaid::print()
{
    cout<<"usedbalance:"<<" "<<usedbalance<< endl ;
    cout<<"oldbalance:"<<" "<<oldbalance<< endl ;
    cout<<"remainingbalance:"<<" "<< remainingbalance<< endl ;
    service::print() ;

}
