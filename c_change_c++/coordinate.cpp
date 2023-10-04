#include<iostream>
using namespace std;
int main()
{
    int x , y;
    cout<<"Enter the X and Y coordinate \n";
    cin>>x>>y;

    if (x>0 && y>0)
    {
       cout<<"first coordinate"<<endl;
    }
    else if (x>0 && y<0)
    {
        cout<<"Second coordinate"<<endl;
    }
    else if (x<0 && y<0)
    {
        cout<<"Third coordinate"<<endl;
    }
    else if (x<0 && y>0)
    {
        cout<<"Fourth coordinate"<<endl;
    }
    else
    {
        cout<<"Coordinater in line"<<endl;
    }
    return 0;

     
    
} 
