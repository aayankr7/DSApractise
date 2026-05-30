#include <iostream>
using namespace std;

void mergeSort(int*x, int s, int e)
{
    if(s==e)
    {
        return;
    }
    mergeSort(x, s, (s+e)/2);
    mergeSort(x, ((s+e)/2)+1, e);

    int i,j,k=0;
    i=s;
    j=((s+e)/2)+1;
    int* y = (int *)malloc((e-s+1)*sizeof(int));
    while(i<=(s+e)/2 && j<= e)
    {
        if(*(x+i)<*(x+j))
        {
            *(y + k) = *(x+i);
            k++;
            i++;
        }else if(*(x+i)>*(x+j))
        {
            *(y + k) = *(x+j);
            k++;
            j++;
        }else if(*(x+i)==*(x+j))
        {
            *(y + k) = *(x+j);
            k++;
            *(y + k) = *(x+i);
            k++;

            i++;
            j++;
        }

        if(j>e)
        {
            while(i<=(s+e)/2)
            {
                *(y + k) = *(x+i);
                k++;
                i++;
            }
        }else if(i>(s+e)/2)
        {
            while(j<=e)
            {
                *(y + k) = *(x+j);
                k++;
                j++;
            }
        }
    }

    for(i=s;i<=e;i++)
    {
        *(x+i) = *(y+i-s);
    }

    free(y);

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

    mergeSort(x,0,n);

    cout<<"The sorted list is : ";

    for(int i = 0; i<n ; i++)
    {
        cout<<x[i]<<" ";
    }
}