
#include<iostream>
using namespace std;

class student{
   public:
        int getPercentage(int marks)
        {
            return (marks*100)/100;
        }
};

int main(){

    int marks;
    cout<<"Enter your Marks"<<endl;
    cin>>marks;
   
   student student1;
   cout<<"Percentage = "<<student1.getPercentage(marks)<<endl;
}