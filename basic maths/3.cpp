#include <iostream>
using namespace std;

int main()
{
    int x, temp, og;
    cin>>x; 
    og = x;   
    temp = 0;
    while(x!=0)
    {
        temp = (temp*10) + (x%10);
        x= x/10;
    }
    if(temp == og)
    {
        cout<<"The number is a plaindrome";
    }else
    {
        cout<<"The number is not a plaindrome";
    }

}