#include<iostream>
using namespace std;
 int main()
 {
    int max , min , arr[5];
    cout<<"Enter 5 Element\n";
    for (int i = 0; i < 5; i++)
    {
        cin>>arr[i];
    }

    max= arr[0];
    min= arr[0];

    for (int i = 0; i < 5; i++)
    {
        if (arr[i]>max)
        {
            max= arr[i];
        }
        if (arr[i]<min)
        {
            min= arr[i];
        }
    }
    cout<<"min = "<<min<<endl;
    cout<<"max = "<<max<<endl;
    
    return 0;
 }