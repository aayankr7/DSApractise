#include <iostream>
using namespace std;

int main()
{
    int j, i;

    for(i=1;i<=5;i++)
    {
        for(j = 1; j<=i; j++)
        {
            char x = 'A' + i - 1;
            cout<<x;
        }
        cout<<endl;
    }
}