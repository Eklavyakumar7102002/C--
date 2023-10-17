#include<iostream>
using namespace std;

class stringLite
{
    string msg;
    public:
    stringLite()
    {
        msg = "Eklavya";
    }
    stringLite(string msg)
    {
        this->msg = msg;
    }
    void showMsg()
    {
        cout<<"msg: "<<msg<<endl;
    }
};

stringLite s4("Good Morning");
stringLite s5("Today I will come on New Topic");