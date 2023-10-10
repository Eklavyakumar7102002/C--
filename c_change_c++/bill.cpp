#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
int main()
{
    float unit,amount,surcharg;

    cout<<"enter unit"<<endl;
    cin>>unit;

    if (unit>=0 && unit<200)
    {
        amount=unit*2.20;
    }
    else if (unit>=200 && unit<400)
    {
        amount=unit*4.50;
    }
    else if (unit>=400 && unit<600)
    {
        amount=unit*6.80;
    }
    else if (unit>=600 )
    {
        amount=unit*8;
    }
    else
    {
        cout<<"invalid unit\n"<<endl;
        exit(0);
    }

    if (amount<200)
    {
        amount=200;
    }
    if (amount>=1000)
    {
        surcharg=(amount*15.0)/100.0;
    }
    
    cout<<"Amount ="<<amount<<endl;
    cout<<"Surcharge ="<<surcharg<<endl;
    amount=amount+surcharg;
    cout<<"Net amount ="<<amount;
    getch();
    return 0;

    
    
}