#include <iostream>
using namespace std;

int main()
{
    int j, i, temp = 1;

    for(i=1;i<=5;i++)
    {
        for(j = 1; j<=i; j++)
        {
            cout<<temp<<" ";
            temp++;
        }
        cout<<endl;
    }
}