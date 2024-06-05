#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int totalFruit(vector<int> &fruits)
    {
        unordered_map<int, int> mp;
        int maxVal = 0;
        int i = 0, j = 0;
        while (j < fruits.size())
        {
            mp[fruits[j]]++;
            while (mp.size() > 2)
            {
                mp[fruits[i]]--;
                if (mp[fruits[i]] == 0)
                {
                    mp.erase(fruits[i]);
                }
                i++;
            }
            maxVal = max(maxVal, (j - i) + 1);
            j++;
        }
        return maxVal;
    }
};

// here we use the two pointer concepts because it wants CONSECUTIVE max val where we use the
// sliding window with at most 2 same type of fruits. here the variation is that we are using map also
// 1 - sliding window
// 2 - pointer
// 3 - sliding window type 4 where there is need to track the window character using unordered_map
