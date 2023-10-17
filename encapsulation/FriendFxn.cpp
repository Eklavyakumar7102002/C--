#include<iostream>
using namespace std;
class Box
{
    private:
        int lenght;
    public:
        Box()
        {
            lenght=10;
        }    
        friend int printLenght(Box);
};
int printLenght(Box b)
{
    b.lenght = b.lenght + 10;
    return b.lenght;
}
int main()
{
    Box b;
    cout<<"Lenght of box: "<<printLenght(b)<<endl;
    return 0;
}

