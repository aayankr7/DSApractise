#include <bits/stdc++.h>
#include <cstdlib>
using namespace std;

class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        int s = nums.size();
        int *p = (int*)malloc(s*sizeof(int));
        for(int i =0; i<s;i++)
        {
            *(p+((k+i)%s)) = nums[i];
        }
        for(int i =0; i<s; i++)
        {
            nums[i] = *(p+i);
        }
        free(p);
    }
};