#include<iostream>
using namespace std;
void swap(int num1, int num2)
{
    
    int c;
    c=num1;
    num1=num2;
    num2=c;
    cout<<"the value after sawaping is swap fxn num1 ="<<num1<<"and num2 ="<<num2<<endl;
}
int main()
{
    int num1, num2;
    cout<<"Enter 2 number \n";
    cin>>num1>>num2;
    cout<<"the value before swapping is swap fxn num1 ="<<num1<<"and num2 ="<<num2<<endl;
    swap(num1,num2);
    return 0;
}
