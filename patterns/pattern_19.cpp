#include <iostream>
using namespace std;

int main()
{
    int i, j, k;
    for(i=1;i<=10;i++)
    {
        if(i<=5)
        {
            for(j=1;j<=6-i;j++)
            {
                cout<<"*";
            }
            for(k=1;k<=((2*i)-2);k++)
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
            for(j=1;j<=i-5;j++)
            {
                cout<<"*";
            }
            for(k=1;k<=(20-(2*i));k++)
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