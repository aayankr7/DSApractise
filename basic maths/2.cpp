#include <iostream>
using namespace std;

int main()
{
    int x, temp;
    cin>>x;    
    temp = 0;
    while(x!=0)
    {
        temp = (temp*10) + (x%10);
        x= x/10;
    }
    cout<<"The reversed number is : " << temp;

}