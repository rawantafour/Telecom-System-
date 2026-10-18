#include"service.h"
#include<iostream>
using namespace std ;

service::service()
{
 serviceid=" " ;
 servicename=" ";
 servicepriceofmin=0;
}
service::service(string serviceid,string servicename,float servicepriceofmin)
{
    this->serviceid=serviceid ;
    this->servicename=servicename ;
    this->servicepriceofmin=servicepriceofmin ;
}
void service::Setserviceid(string serviceid)
{
    this->serviceid=serviceid ;
}
string service::Getserviceid()
{
    return serviceid ;
}
void service::Setservicename(string servicename)
{
    this->servicename=servicename ;
}
string service::Getservicename()
{
    return servicename ;
}
void service::Setservicepriceofmin(float servicepriceofmin)
{
    this->servicepriceofmin=servicepriceofmin ;
}
float service::Getservicepriceofmin()
{
    return servicepriceofmin;
}
void service::print()
{
    cout<<"serviceid:"<<" "<<serviceid<< endl ;
    cout<<"servicename:"<<" "<<servicename<< endl ;
    cout<<"servicepriceofmin:"<<" "<<servicepriceofmin<< endl ;
}
service::~service()
{
    cout<<"service object deleted"<< endl ;
}

