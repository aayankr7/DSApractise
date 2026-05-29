#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for(i=1;i<=10;i++)
    {
       if(i<=5)
       {
        for(j=1;j<=i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=10-(2*i);k++)
        {
            cout<<" ";
            j++;
        }
        while(j<=10)
        {
            cout<<"*";
            j++;
        }
       }
       if(i>5)
       {
        for(j=1;j<=10-i;j++)
        {
            cout<<"*";
        }
        for(k=1;k<=(2*i)-10;k++)
        {
            cout<<" ";
            j++;
        }
        while(j<=10)
        {
            cout<<"*";
            j++;
        }
       }
       cout<<endl;
    }
}