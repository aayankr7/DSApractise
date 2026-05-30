#include <iostream>
using namespace std;

void quickSort(int*x, int s, int e)
{   
    if(s>=e)
    {
        return;
    }
    int p = e;
    int j = 0;
    int* y = (int*)malloc((e-s+1)*sizeof(int));
    for(int i = s; i<e;i++)
    {
        if(*(x+i)<=*(x+p))
        {
            *(y+j) = *(x+i);
            j++;
        }
    }
    *(y+j) = *(x+p);
    int temp = j;
    j++;
    for(int i = s; i<e;i++)
    {
        if(*(x+i)>*(x+p))
        {
            *(y+j) = *(x+i);
            j++;
        }
    }
    for(int i=s;i<=e;i++)
    {
        *(x+i) = *(y+i-s);
    }
    free(y);
    quickSort(x, s, s+temp-1);
    quickSort(x,s+temp+1,e);
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

    quickSort(x,0,n);

    cout<<"The sorted list is : ";

    for(int i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }
}