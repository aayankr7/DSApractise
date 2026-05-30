#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void bubbleSort(int* x, int n)
{
    int i, k;
    k = 1;
    while(k!=0)
    {   
        k=0;
        for(i=0;i<n-1;i++)
        {
            if(x[i]>x[i+1])
            {
                swap(&x[i], &x[i+1]);
                k++;
            }
        }
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

    bubbleSort(x,n);

    cout<<"The sorted list is : ";

    for(int i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }
}