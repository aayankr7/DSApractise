#include <iostream>
using namespace std;

void printNumbers(int n)
{
    if(n==1)
    {
        cout<<n<<endl;
    }
    else
    {
        printNumbers(n-1);
        cout<<n<<endl;
    }
}



int main()
{   int n;
    cout<<"Enter thevalue of n : ";
    cin>>n;
    printNumbers(n);
}