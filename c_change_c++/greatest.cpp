#include<iostream>
using namespace std;
int main()
{
    int Number[10];
    int i;
    int greatest;
    cout<<"Enter the Values"<<endl;
    for (i = 0; i < 10; i++)
    {
       cin>>Number[i];
    }
    greatest = Number[0];
    for ( i = 0; i < 10; i++)
    {
      if (Number[i]> greatest)
      {
        greatest = Number[i];
      }
      
    }
    cout<<"Greatest of the number is " <<greatest<<endl;
    return 0;  
}