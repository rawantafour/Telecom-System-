#include"callrecording.h"
#include<iostream>
using namespace std ;

callrecording::callrecording()
:service()
{
    phone=" ";
    calltime=0 ;
    callprice=0 ;
}
callrecording::callrecording(string phone,int calltime,double callprice,string servicename,string serviceid,float servicepriceofmin)
:service(servicename,serviceid,servicepriceofmin)
{
    this->phone=phone ;
    this->calltime=calltime ;
    this->callprice=callprice;
}

callrecording::~callrecording()
{
    cout<<"callrecording object deleted" <<endl;
}

 string callrecording::Getphone()
{
   return phone ;
}
void callrecording::Setphone(string phone)
{
     this->phone=phone ;
}
int callrecording::Getcalltime()
{
    return calltime ;
}
void callrecording::Setcalltime(int calltime)
{
    this->calltime=calltime ;
}
float callrecording::calculate()
{
    callprice=calltime*Getservicepriceofmin() ;
    return callprice ;
}
double callrecording::Getcallprice()
{
    return callprice ;
}
void callrecording::print()
{
    cout<<" phone:"<<" "<<phone<< endl;
    cout<<" calltime:"<<" "<<calltime<< endl ;
    cout<<" callprice:"<<" "<<callprice<< endl ;
    service::print() ;
}
