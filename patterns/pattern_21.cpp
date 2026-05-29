#include <iostream>
using namespace std;

int main()
{
    char x[4][4];
    char *p = &x[0][0];
    int i, j = 0;
    for(i=0; i<16; i++)
    {   
        *(p+i) = ' ';    
    }
    // a1j, ai1, ain, anj

    for(i=0; i<4; i++)
    {
        x[0][i] = '*';
    }
    for(i=0; i<4; i++)
    {
        x[i][0] = '*';
    }
    for(i=0; i<4; i++)
    {
        x[i][3] = '*';
    }
    for(i=0; i<4; i++)
    {
        x[3][i] = '*';
    }
    for(i=0; i<16; i++)
    {   
        if(j%4==0 && j!=0)
        {
            cout<<endl;
        }
        j++;
        cout<<*(p+i);        
    }
}