#include<iostream>
using namespace std;

int main()
{
    int arr[10], i ;

    cout<<"Enter the 10 Number \n";

    for (int i = 0; i < 10; i++)
         cin>>arr[i];
    cout<<"\n\nThe Reversed Number is \n";
    for (int i = (10-1); i >= 0; i--)
         cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}