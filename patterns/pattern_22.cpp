#include <iostream>
using namespace std;

int main()
{
    int x[7][7];
    int *p = &x[0][0];
    int i, j;
    for(i=0;i<49;i++)
    {
        *(p+i) = 0;
    }
    //(4,7)(3,5) -> the side length of matrix is 2i-1
    for(i=4;i>0;i--)
    {
        //a0j, aj0, anj, ajn
        //(4,0)(3,1) -> 0 = 4-i
        for(j=0;j<((2*i)-1);j++)
        {
            x[4-i][4-i +j] = i;
        }
        for(j=0;j<((2*i)-1);j++)
        {
            x[4-i+j][4-i] = i;
        }
        for(j=0;j<((2*i)-1);j++)
        {
            x[i+2][4-i+j] = i;
        }
        for(j=0;j<((2*i)-1);j++)
        {
            x[4-i+j][i+2] = i;
        }
    }
    j=0;
    for(i=0; i<49;i++)
    {
        if(j%7==0 && j!=0)
        {
            cout<<endl;
        }
        j++;
        cout<<*(p+i); 
    }    
}