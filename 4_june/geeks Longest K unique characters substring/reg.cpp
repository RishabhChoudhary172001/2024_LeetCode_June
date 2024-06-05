#include <bits/stdc++.h>
using namespace std;
class Solution 
{
public:
    int longestKSubstr(string s, int k)
    {
        int longestVal = -1;
        unordered_map<char, int> mp;
        int i = 0, j = 0;
        while (j < s.size())
        {
            mp[s[j]]++;
            while (mp.size() > k)
            {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                {
                    mp.erase(s[i]);
                }
                i++;
            }
            if (mp.size() == k)
            {
                longestVal = max(longestVal, (j - i) + 1);
            }
            j++;
        }
        return longestVal;
    }
};

// it is the same as the fruit into baskets but here we need to have exactly k types character in the subarray
// 1 - sliding window
// 2 - pointer
// 3 - sliding window type 4 where there is need to track the window character using unordered_map
// 4 - here there is extension in the problem with the condition to store only k character types in a subarray