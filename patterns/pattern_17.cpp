#include <iostream>
using namespace std;

void mirror(char x[][7])
{   
    int i,j;
    
   for(i=0;i<4;i++)
   {
        for(j=4; j<7;j++)
        {
            x[i][j] = x[i][6-j];
        }
   }
     
    
}

int main()
{
    int i,j,temp;
    char x[4][7];

    for(i=0;i<4;i++)
    {   
        temp = 0;
        for(j=0;j<3-i;j++)
        {
            x[i][j] = ' ';
        }
        while(j<4)
        {
            x[i][j] = 'A' + temp;
            temp++;
            j++;
        }
    }
    mirror(x);

    for(i=0;i<4;i++)
    {
        for(j=0;j<7;j++)
        {
            cout<<x[i][j];
        }
        cout<<endl;
    }
}