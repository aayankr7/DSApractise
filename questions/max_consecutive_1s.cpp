#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int i,j=0;
        vector<int> y;
        for(i=0; i<nums.size(); i++)
        {
            if(nums[i]==1)
            {
                j++;
            }else
            {
                y.push_back(j);
                j=0;
            }

            if(i==nums.size()-1)
            {
                y.push_back(j);
            }
        }
        int max = 0;

        for(i=0;i<y.size();i++)
        {
            if(y[i]>max)
            {
                max = y[i];
            }
        }

        return max;
    }
};