#include"customer.h"
#include<iostream>
using namespace std ;

customer::customer()
{
    name=" ";
    id=" ";
    phone=" ";
    myprepaid= nullptr;
    mypostpaid= nullptr ;
    mydatabundle= nullptr ;
    mycallrecording=nullptr ;

}
customer::customer(string name,string id, string phone)
{
    this->name=name;
    this->id=id;
    this->phone=phone;
    myprepaid= nullptr;
    mypostpaid= nullptr ;
    mydatabundle= nullptr ;
    mycallrecording=nullptr ;
}
void customer::Setname(string name)
{
    this->name=name ;
}
string customer::Getname()
{
    return name ;
}
void customer::Setid(string id)
{
    this->id=id ;
}
string customer::Getid()
{
    return id;
}
void customer::Setphone(string phone)
{
    this->phone=phone ;
}
string customer::Getphone()
{
    return phone ;
}

void customer::setprepaid(prepaid* p)
{
    myprepaid=p ;
}
void customer::setpostpaid(postpaid* po)
{
    mypostpaid=po ;
}
void customer::setdatabundle(databundle* b)
{
    mydatabundle=b;
}
void customer::setcallrecording(callrecording* c)
{
    mycallrecording=c ;
}
void customer::print()
{
    cout<<"name:"<<" "<< name<< endl ;
    cout<<"phone:"<<" "<<phone<< endl ;
    cout<<"id:"<<" "<< id<< endl;
    if(myprepaid!=nullptr)
    {
        myprepaid->print() ;
    }
    if(mypostpaid!=nullptr)
    {
        mypostpaid->print() ;
    }
    if(mydatabundle!=nullptr)
    {
        mydatabundle->print() ;
    }
    if(mycallrecording!=nullptr)
    {
        mycallrecording->print() ;
    }
}
customer::~customer()
{
    cout<<"customer object deleted"<< endl;
}
