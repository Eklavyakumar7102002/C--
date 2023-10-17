#include <iostream>
using namespace std;

class person
{
private:
    int age;
    float height;

public:
    void setAge(int a)
    {
        if (a > 1 && a<= 200)
        {
            age = a;
        }
    }
    int getAge()
    {
        return age;
    }
    void setHeight(float h)
    {
        height = h;
    }
    float getHeight()
    {
        return height;
    }
};
int main()
{
    person Eklavya;
    Eklavya.setAge(21);
    Eklavya.setHeight(5.9);
    cout<<"Age: "<<Eklavya.getAge()<<endl;
    cout<<"Height: "<<Eklavya.getHeight()<<endl;

    return 0;
}
