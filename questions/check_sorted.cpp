#include<bits/stdc++.h>
#include <cstdlib>
using namespace std;
class Solution {
public:
    bool check(vector<int>& nums) {
        int i,j;
        int* p;
        
        if(nums.size() == 1)
        {
            return true;
        }

        for(i=0; i<nums.size(); i++)
        {
            p = (int*)malloc((nums.size())*sizeof(int));
            for(j=0;j<nums.size();j++)
            {
                *(p+j) = nums[(j+i)%(nums.size())];
            }
            for(j=0;j<(nums.size())-1;j++)
            {
                if(*(p+j+1)>=*(p+j))
                {
                    if(j==(nums.size())-2)
                    {
                        return true;
                    }
                }else
                {
                    break;
                }
            }
            free(p);
        }
        return false;
    }
};