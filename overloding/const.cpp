#include<iostream>
using namespace std;
class calc 

{
    int x;
    public:
    calc(){}
    calc(int i){ x=i; }
    int operator+(calc a)
    {
       cout<<"X = "<<x<<  " a.x = "<<a.x<<endl;
       int m=x/a.x;
       return m;
    }
};

int main()
{
   calc a1(625);
   calc a2(5);
   int sum=a1+a2;
   cout<<"sum = "<<sum<<endl;
   // cout<< a3+a2<<endl; 
   return 0;
}


