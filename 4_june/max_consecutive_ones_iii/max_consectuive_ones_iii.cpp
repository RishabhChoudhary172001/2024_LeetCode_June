#include <bits/stdc++.h>
using namespace std;
class Solution
{public:
    int longestOnes(vector<int> &nums, int k)
    {
        int maxSize = 0;
        int currCoun = 0;

        int i = 0, j = 0;
        while (j < nums.size())
        {
            if (nums[j] == 0)
            {
                currCoun++;
            }
            while (currCoun > k)
            {
                if (nums[i] == 0)
                {
                    currCoun--;
                }

                i++;
            }
            maxSize = max(maxSize, (j - i) + 1);
            j++;
        }
        return maxSize;
    }
};