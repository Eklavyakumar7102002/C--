#include<iostream>
using namespace std;
int main()
{
    int s1,s2,commonCount=0;
    cout<<"Enter the size of Frist Array"<<endl;
    cin>>s1;
    cout<<"Enter the size of Second Array"<<endl;
    cin>>s2;

    int arr1[s1], arr2[s2];
    int max=(s1>s2)?s1:s2;
    int arr3[max];
    cout<<"Enter first array"<<endl;
    for (int i = 0; i < s1; i++)
    {
        cin>>arr1[i];
    }
    cout<<"Enter Second array"<<endl;
    for (int i = 0; i < s2; i++)
    {
        cin>>arr2[i];
    }
    for (int i = 0; i < s1; i++)
    {
        for (int j = 0; j < s2; j++)
        {
            if (arr1[i]==arr2[j])
            {
                arr3[commonCount]=arr1[i];
                commonCount++;
            }
            
        }
        
    }
    cout<<"The common element are :\n";
    for (int i = 0; i < commonCount; i++)
    {
        cout<<arr3[i]<<",";
    }
    cout<<("\b "); 
}