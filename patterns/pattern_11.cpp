#include <iostream>
using namespace std;

int main()
{
    int j, i;

    for(i=1;i<=5;i++)
    {
        for(j = 1; j<=i; j++)
        {
           if(i%2)
            {
            cout<<(j%2);
            }else
            {
                j++;
                cout<<(j%2);
                j--;
            }
        }
        cout<<endl;
    }

}