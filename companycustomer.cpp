#include"companycustomer.h"
#include<iostream>
using namespace std ;

companycustomer::companycustomer()
:customer()
{
    companyname=" ";
    taxid=" ";
}
companycustomer::companycustomer(string copanyname,string taxid,string name,string id,string phone)
:customer(name,id,phone)
{
    this->companyname=companyname ;
    this->taxid=taxid ;
}

companycustomer::~companycustomer()
{
    cout<<"companycustomer object deleted"<< endl;
}
void companycustomer::Setcompanyname(string companyname)
{
    this->companyname=companyname ;
}
string companycustomer::Getcompanyname()
{
    return companyname ;

}
void companycustomer::Settaxid(string taxid)
{
    this->taxid=taxid ;
}
string companycustomer::Gettaxid()
{
    return taxid ;
}

void companycustomer::print()
{
    cout<<"companyname:"<<" "<<companyname << endl;
    cout<<"taxid:"<<" "<<taxid << endl;
    customer::print();
}
