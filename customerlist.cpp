#include"customerlist.h"
#include<iostream>
using namespace std ;

customerlist::customerlist()
{
    head=nullptr ;
    tail=nullptr ;
}
customerlist::customerlist(customernode* head ,customernode* tail)
{
    this->head=head ;
    this->tail=tail ;
}
customerlist::~customerlist()
{
    customernode* current=head ;
    while(current!=nullptr)
    {
        customernode* newcustomernode=current->next ;
        delete current ;
        current=newcustomernode ;
    }
    head=nullptr ;
    tail=nullptr ;
}
void customerlist::addcustomer(customer* newcustomer)
{
    customernode* newcustomernode=new customernode(newcustomer) ;
    if(head==nullptr)
    {
        head=newcustomernode ;
        tail=newcustomernode ;
    }
    else
    {
        tail->next=newcustomernode;
        tail=newcustomernode ;
    }
}
bool customerlist::searchcustomer(string id)
{
     customernode* temp=head ;
     while(temp!=nullptr)
     {
         if(temp->data->Getid()==id)
         {
             temp->data->print();
             return true ;
         }
         else
         {
             temp=temp->next ;
         }
     }
     return false ;
}
bool customerlist::deletecustomer(string id)
{
    if(head==nullptr)
    {
        return false ;
    }

    else if(head->data->Getid()==id)
    {
            customernode* temp=head ;
            head=head->next;

        if(head==nullptr)
         {
             tail=nullptr ;

         }
          delete temp ;
        return true ;
    }
    else
    {
        customernode* previous=head;
        customernode* current=head->next ;
        while (current!=nullptr)
        {
             if(current->data->Getid()==id)
            {
                previous->next=current->next ;
            }

            if(current==tail)
            {
                tail=previous;
                delete current ;
                return true ;
            }
            previous=current;
            current=current->next;
            return false ;
        }
    }
}


