// #include<iostream>
// using namespace std;

// class car
// {
//     string chasisNo="6524%6h@hdgf";
//     public:
//     string color;
//     string model;
//     string fuletype;

//     void inputDetail()
//     {
//         cout<<"Enter car Details\n";
//         cin>>color;
//         cin>>model;
//         cin>>fuletype;
//         cin>>chasisNo;
//     }
//     void showCarDetails()
//     {
//         cout<<"-------------------------------Car Details-----------------------------\n";
//         cout<<"Color :"<<color<<endl;
//         cout<<"Model :"<<model<<endl;
//         cout<<"Fule type :"<<fuletype<<endl;
//         cout<<"Chasis No. :"<<chasisNo<<endl;
//     }
// };
// int main()
// {
//     car car1;
//     car1.inputDetail();
//     car1.showCarDetails();

//     return 0;
// }

#include<iostream>
using namespace std;
//class -> class is a set of object which shares a common structure and behaviour
//class -> blue print(attribute and behaviour)

class Car
{
    string chasisNo;
    public:
    string color;
    string model;
    string fueltype;
    
    void showCarDetails()
    {
        cout<<" -------------------- Car Details ------------"<<endl;
        cout<<" Colour :"<<color<<endl;
        cin>>color;
        cout<<" Model :"<<model<<endl;
        cin>>model;
        cout<<" Fuel type :"<<fueltype<<endl;
        cin>>fueltype;
    }
};
int main()
{
    Car car1;//object (Real world entity)
    car1.showCarDetails();

    return 0;
}