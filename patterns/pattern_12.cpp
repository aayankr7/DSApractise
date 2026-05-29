#include <iostream>
using namespace std;

int main()
{
    int i,j;
    for(i=1;i<=4;i++)
    {
        for(j=1;j<=i;j++)
        {
            cout<<j;
        }
        for(j=1;j<=(8-(2*i));j++)
        {
            cout<<" ";
        }
        for(j=i;j>0;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}