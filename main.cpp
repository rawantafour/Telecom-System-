#include<iostream>
#include<string>
#include"customerlist.h"
#include"singlecustomer.h"
#include"companycustomer.h"
#include"service.h"
#include"prepaid.h"
#include"postpaid.h"
#include"customer.h"
#include"callrecording.h"

using namespace std ;
int main ()
{
    customerlist b ;
    int x=0 ;
 while(true)
 {

    cout<<" please choise number from 1 to 3"<< endl ;
    cout<<" 1-addcustomer" << endl;
    cout<<" 2-searchcustomer"<< endl ;
    cout<<" 3-deletcustomer"<< endl ;
    cout<<" please enter number "<< endl ;
    cin>> x;
    cout<< endl ;
    if(x==1)
    {
        int y=0 ;
        cout<<"please choise 1 or 2"<< endl ;
        cout<<"1- singlecustomer "<< endl ;
        cout<<"2-companycustomer "<< endl ;
        cout<<" please enter number "<< endl ;
        cin>> y ;
        cout<< endl ;
        if(y==1)
        {
            string id;
            string name ;
            string phone ;
            string nationalid ;
            cout<<" id:"<<" " ;
            cin>>id ;
            cout<< endl ;
            cout<<"name:"<<" " ;
            cin>> name  ;
            cout<< endl ;
            cout<<"phone:"<<" " ;
            cin>> phone ;
            cout<< endl ;
            cout<<"nationalid:" <<" ";
            cin>> nationalid ;
            cout<< endl ;

            singlecustomer* c=new singlecustomer();
            c->Setid(id) ;
            c->Setname(name) ;
            c->Setphone(phone) ;
            c->Setnationalid(nationalid) ;

            int z=0 ;
            cout<<"please enter number "<< endl ;
            cout<<"1-prepaid "<< endl ;
            cout<<"2-postpaid "<< endl ;
            cin>> z ;
            cout<< endl ;
            if(z==1)
            {

                prepaid* p=new prepaid() ;
                c->setprepaid(p) ;
            }
            else if(z==2)
            {
                postpaid* p=new postpaid() ;
                c->setpostpaid(p) ;

            }
            bool adddatabundle ;
            cout<<" do you want to add a databundle "<< endl ;
            cin>> adddatabundle ;
            cout<< endl ;
            if(adddatabundle==1)
            {
                string databundlename ;
                cout<<" enter databundlename "<< endl ;
                cin>> databundlename ;
                cout<< endl ;
                databundle* b=new databundle() ;
                b->Setdatabundlename(databundlename) ;

            }
             bool addcallrecording ;
            cout<<" do you want to add a addcallrecording "<< endl ;
            cin>> addcallrecording ;
            cout<< endl ;
            if(addcallrecording==1)
            {
                callrecording* c=new callrecording() ;


            }
            b.addcustomer(c) ;
            cout<<" adding is successful" ;

        }
        else if(y==2)
        {
            string id;
            string name ;
            string phone ;
            string taxid ;
            string companyname ;
            int servicenumber=0 ;
            cout<<" id:"<<" " ;
            cin>>id ;
            cout<< endl ;
            cout<<"name:"<<" " ;
            cin>> name  ;
            cout<< endl ;
            cout<<"phone:"<<" " ;
            cin>> phone ;
            cout<< endl ;
            cout<<"taxid:" <<" ";
            cin>> taxid ;
            cout<< endl ;
            cout<<" companyname:"<<" " ;
            cin>>companyname ;
            cout<< endl ;

            companycustomer* c=new companycustomer() ;
            c->Setid(id) ;
            c->Setname(name) ;
            c->Setphone(phone) ;
            c->Settaxid(taxid) ;
            c->Setcompanyname(companyname) ;

             int z=0 ;
            cout<<"please enter number "<< endl ;
            cout<<"1-prepaid " << endl;
            cout<<"2-postpaid "<< endl ;
            cin>> z ;
            cout<< endl ;
            if(z==1)
            {

                prepaid* p=new prepaid() ;
                c->setprepaid(p) ;
            }
            else if(z==2)
            {
                postpaid* p=new postpaid() ;
                c->setpostpaid(p) ;

            }
            bool adddatabundle ;
            cout<<" do you want to add a databundle "<< endl ;
            cin>> adddatabundle ;
            cout<< endl;
            if(adddatabundle==1)
            {
                string databundlename ;
                cout<<" enter databundlename "<< endl ;
                cin>> databundlename ;
                cout<< endl ;
                databundle* b=new databundle() ;
                b->Setdatabundlename(databundlename) ;

            }
             bool addcallrecording ;
            cout<<" do you want to add a addcallrecording "<< endl ;
            cin>> addcallrecording ;
            cout<< endl ;
            if(addcallrecording==1)
            {
                callrecording* c=new callrecording() ;


            }

            b.addcustomer(c) ;
            cout<<" adding is successful"<< endl ;
        }

    }
    else if(x==2)
    {
        string id ;
        cout<< "id"<<" " ;
        cin>> id ;
        cout<< endl ;
        if(b.searchcustomer(id)==1)
        {
            cout<<" customer found "<< endl ;

        }
       else
        {
            cout<<" customer not found "<< endl ;
        }
    }
    else if (x==3)
    {
        string id ;
        cout<< "id"<<" " ;
        cin>> id ;
        cout<< endl ;
        if(b.deletecustomer(id)==1)
        {
            cout<<" customer is deleted "<< endl;

        }
       else
        {
            cout<<" customer not found "<< endl ;
        }
    }
    else
    {
        cout<< " wrong choise"<< endl;
    }
 }


}

