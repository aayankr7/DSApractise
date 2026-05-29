#include <iostream>
using namespace std;

int N;

void swap (int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void rev(int* x,int n)
{
    if(n==2 || n==3)
    {
        swap(x+N-n,x+n-1);
    }else
    {
        swap(x+N-n,x+n-1);
        rev(x,n-2);
    }
}


int main()
{
    int x[8], n, i;
    n=8;
    N=n;
    cout<<"Enter the numbers : ";
    for(i=0;i<8;i++)
    {
        cin>>x[i];
    }

    rev(&x[0],n);

    for(i=0;i<8;i++)
    {
        cout<<x[i]<<" ";
    }

}