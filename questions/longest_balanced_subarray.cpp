//leetcode hard

#include <bits/stdc++.h>
using namespace std;
class Solution {
public:

    int distinctEvenNumbers(int *x, int b, int e)
    {
        int max=0, j=0;
        for(int i =b; i<=e; i++)
        {
          if(*(x+i)>max)
          {
            max = *(x+i);
          }
        }
        int y[max+1];

        for(int i = 0; i<max+1; i++)
        {
            y[i] = 0;
        }

        for(int i =b; i<=e; i++)
        {
            y[*(x+i)]++;
        }
        for(int i = 0; i<max+1; i++)
        {
            if(i%2==0)
            {
                if(y[i]>0)
                {
                    j++;
                }
            }
        }

        return j;
    }

    int distinctOddNumbers(int *x, int b, int e)
    {
        int max=0, j=0;
        for(int i =b; i<=e; i++)
        {
          if(*(x+i)>max)
          {
            max = *(x+i);
          }
        }
        int y[max+1];

        for(int i = 0; i<max+1; i++)
        {
            y[i] = 0;
        }

        for(int i =b; i<=e; i++)
        {
            y[*(x+i)]++;
        }
        for(int i = 0; i<max+1; i++)
        {
            if(i%2!=0)
            {
                if(y[i]>0)
                {
                    j++;
                }
            }
        }

        return j;
    }

    int longestBalanced(vector<int>& nums) {
        int s = nums.size();
        int i, j, k=0;

        int y[(s*(s+1))/2][2];

        for(i=0;i<nums.size();i++)
        {
            for(j=i;j<nums.size();j++)
            {
                y[k][0]= i;
                y[k][1]= j;
                k++;
            }
        }

        int max = 0;

        for(i=0; i<((s*(s+1))/2); i++)
        {
            if(distinctEvenNumbers(&nums[0],y[i][0], y[i][1])==distinctOddNumbers(&nums[0],y[i][0], y[i][1]))
            {
                if((y[i][1]-y[i][0])+1>max)
                {
                    max = y[i][1]-y[i][0]+1;
                }
            }
        }

        return max;

        
    }
};