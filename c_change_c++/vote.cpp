#include<iostream>
using namespace std;
int main()
{
    int age;
    cout<<"Enter your Age"<<endl;
    cin>>age;
    if (age>150 || age<1)
    {
       cout<<"Invalid vote";
    }
    else if (age>=18)
    {
       cout<<"you Right to vote";
    }
   
    else
    {
        cout<<"You cannot vote";
    }
    return 0;
}
