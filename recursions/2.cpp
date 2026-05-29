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
        cout<<n<<endl;
        printNumbers(n-1);
        
    }
}



int main()
{   int n;
    cout<<"Enter thevalue of n : ";
    cin>>n;
    printNumbers(n);
}