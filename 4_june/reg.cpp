#include <bits/stdc++.h>
using namespace std;
class Solution
{
public:
    int appendCharacters(string s, string t)
    {
        int i = 0, j = 0;
        int ans = 0;
        while (j < t.size() && i < s.size())
        {
            if (s[i] == t[j])
            {
                i++, j++;
            }
            else
            {
                i++;
            }
        }
        ans += (t.size()) - j;
        return ans;
    }
};


// this will be solved using simple two pointer for subsequence