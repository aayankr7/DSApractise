#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void swap(int *x, int* y)
    {
        int temp;
        temp = *x;
        *x = *y;
        *y = temp; 
    }
    void moveZeroes(vector<int>& nums) {
        int i,j=0,k=0;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i]!=0)
            {
                swap(&nums[i], &nums[j]);
                j++;
            }
        }    
    }
};