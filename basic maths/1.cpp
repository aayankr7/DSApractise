#include <iostream>
using namespace std;

int main()
{
    int x, j=0;
    cin>>x;
    while(x!=0)
    {
        x= x/10;
        j++;
    }
    cout<<"The number of digits is : "<<j;
}