#include <iostream>
using namespace std;
int PrimeOrNot(int);
int main()
{
    int n1, prime;
    
    cout<<"Input a positive number"<<endl;
    cin>>n1;
    prime = PrimeOrNot(n1);
    if (prime==1)
    
        cout<<"The Number "<<n1<<" is a prime number \n";
    else
       cout<<"The Number "<<n1<<" is a not Prime Number \n";
    return 0;    
}
int PrimeOrNot(int n1)
{
    int i=2;
    while (i<n1/2)
    {
        if (n1%i==0)
            return 0;
        else
          i++;
    }
    return 1;
    
}