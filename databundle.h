#ifndef DATABUNDLE_H
#define DATABUNDLE_H
#include<iostream>
#include<string>
using namespace std ;


class databundle
{
    public:
        databundle();
        databundle(string databundlename,float databundleprice,double totaldata,double useddata,double remainingdata);
        ~databundle();

        string Getdatabundlename();
        void Setdatabundlename(string databundlename);
        float Getdatabundleprice();
        void Setdatabundleprice(float databundleprice);
        double Gettotaldata();
        void Settotaldata(double totaldata);
        double Getuseddata();
        void Setuseddata(double useddata);
        double calculateremainingdata(double totaldata,double useddata);
        double Getremainingdata();
        void print() ;

    private:
        string databundlename;
        float databundleprice;
        double totaldata;
        double useddata;
        double remainingdata;
};

#endif // DATABUNDLE_H
