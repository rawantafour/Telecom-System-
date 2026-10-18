#include"databundle.h"
#include<iostream>
using namespace std ;

databundle::databundle()
{
    databundlename=" " ;
    databundleprice=0 ;
    totaldata=0 ;
    useddata=0 ;
    remainingdata=0 ;
}
databundle::databundle(string databundlename,float databundleprice,double totaldata,double useddata,double remainingdata)
{
    this-> databundlename= databundlename;
    this-> databundleprice=databundleprice;
    this->totaldata=totaldata;
    this->useddata=useddata ;
    this->remainingdata=remainingdata ;
}

databundle::~databundle()
{
    cout<<"databundle object deleted"<< endl ;
}
 string databundle::Getdatabundlename()
 {
     return databundlename ;
 }
void databundle::Setdatabundlename(string databundlename)
{
    this-> databundlename= databundlename;
}
float databundle::Getdatabundleprice()
{
    return databundleprice ;
}
void databundle::Setdatabundleprice(float databundleprice)
{
    this-> databundleprice=databundleprice;
}
double databundle::Gettotaldata()
{
    return totaldata ;
}
void databundle::Settotaldata(double totaldata)
{
    this->totaldata=totaldata;
}
double databundle::Getuseddata()
{
    return useddata ;
}
void databundle::Setuseddata(double useddata)
{
       this->useddata=useddata ;
}
double databundle::calculateremainingdata(double totaldata,double useddata)
{
   remainingdata=totaldata-useddata ;
   return remainingdata ;
}
double databundle::Getremainingdata()
{
    return remainingdata ;
}
void databundle::print()
{
    cout<<"databundlename:"<<" "<<databundlename<< endl ;
    cout<<"databundleprice:"<<" "<<databundleprice<< endl ;
    cout<<"totaldata:"<<" "<<totaldata << endl;
    cout<<"useddata:"<<" "<<useddata<< endl ;
    cout<<"remainingdata:"<<" "<<remainingdata<< endl ;
}
