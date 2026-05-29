#include <iostream>
#include <vector>
using namespace std;

void series(vector<int>* x,int N, int i)
{   
    int* a = (*x).data();
    if(i==0)
    {
        (*x).push_back((*a) + *(a+1));
    }else
    {
        series(x,N,i-1);
        a = (*x).data();
        (*x).push_back(*(a+i) + *(a+i+1));

    }
}
int main()
{   
    int n;
    cout<<"Enter the number : ";
    cin>>n;
    vector<int> x;
    x.push_back(0);
    x.push_back(1);
    series(&x,n,n-2);
    int i;
    for(i=0;i<(x.size());i++)
    {
        cout<<x[i]<<" ";
    }
}