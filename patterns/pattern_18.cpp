#include <iostream>
using namespace std;

int main()
{
    int i,j;
    char ch = 'E';
    for(i=1;i<=5;i++)
    {
        for(j=0;j<i;j++)
        {
            cout<<(char)(ch+j)<<' ';
        }
        cout<<endl;
        ch--;
    }
}
