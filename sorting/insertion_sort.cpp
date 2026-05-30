#include <iostream>
using namespace std;

void moveRight(int* x)
{
    *(x+1) = *x;
}

void insertionSort(int *x, int n)
{
    int y[n];
    int i, j;
    y[0] = *x;
    for(i=1;i<n;i++)
    {
        for(j=i;j>=0;j--)
        {
            if(j==0)
            {
                *(&y[0]) = *(x+i);
                break;
            }

            if(*(x+i)<*(&y[0]+j-1))
            {
                moveRight(&y[0]+j-1);
            }else if(*(x+i)>=*(&y[0]+j-1))
            {
                *(&y[0]+j)=*(x+i);
                break;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        *(x+i) = y[i];
    }
}

int main()
{
    cout<<"Enter how many numbers you'll enter : ";
    int n;
    cin>>n;
    int x[n];
    cout<<"Enter them here : ";
    for(int i = 0; i<n; i++)
    {
        cin>>x[i];
    }

    insertionSort(x,n);

    cout<<"The sorted list is : ";

    for(int i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }
}