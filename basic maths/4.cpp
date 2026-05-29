#include <iostream>
using namespace std;

int main()
{   
    int n1, n2;
    int i, gcd = 1;
    cout<<"Enter the first number : ";
    cin>>n1;
    cout<<"Enter the second number : ";
    cin>>n2;

    if(n1>n2)
    {
        for(i=1;i<=n2;i++)
        {
            if(n1%i==0 && n2%i ==0 && i>gcd)
            {
                gcd = i;
            }
        }
    }else
    {
        for(i=1;i<=n1;i++)
        {
            if(n1%i==0 && n2%i ==0 && i>gcd)
            {
                gcd = i;
            }
        }
    }
    cout<<"The GCD of the two numbers are : "<<gcd;
}