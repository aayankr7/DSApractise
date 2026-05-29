#include <iostream>
using namespace std;

int main()
{
    int j, i;

    for(i=1;i<=5;i++)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

    for(i=4;i>0;i--)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<"*";
        }
        cout<<endl;
    }

}