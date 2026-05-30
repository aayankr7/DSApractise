#include <iostream>
using namespace std;

void swap(int* x, int* y)
{
    int temp;
    temp = *x;
    *x = *y;
    *y = temp;
}

void selectionSort(int* x, int n){
    int i,j;
    int* min = x;
    for (i=0; i<n; i++)
    {   
        for(j=i;j<n;j++)
        {
            if(*(x+j)<=*(min))
            {
                min = (x+j);
            }
        }
        swap(min,x+i);
        min = x+i+1;
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

    selectionSort(x,n);

    cout<<"The sorted list is : ";

    for(int i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }

}