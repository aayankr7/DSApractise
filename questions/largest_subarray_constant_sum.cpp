#include<bits/stdc++.h>
#include<unordered_map>
using namespace std;

void subarray(int*x, int* s, int* e, int k, int n)
{
    unordered_map<int, int> y;
    int sum = 0;
    for(int i=0; i<n;i++)
    {
        sum = sum + *(x+i);
        y[sum]=i;
    }
    for(auto &p: y)
    {
        if(y.find(k-p.first)!=y.end())
        {
            *s = p.second;
            *e = y[k-p.first];
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

}