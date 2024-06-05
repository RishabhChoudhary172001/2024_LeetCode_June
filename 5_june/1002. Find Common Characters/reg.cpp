#include<bits/stdc++.h>
using namespace std;
class Solution
{
public:
    vector<string> commonChars(vector<string> &words)
    {
        vector<int> vec(26, INT_MAX);

        for (int i = 0; i < words.size(); i++)
        {
            vector<int> current(26, 0);

            for (char w : words[i])
            {
                current[w - 'a']++;
            }

            for (int k = 0; k < 26; k++)
            {
                vec[k] = min(vec[k], current[k]);
            }
        }

        vector<string> ans;
        for (int i = 0; i < vec.size(); i++)
        {
            if (vec[i] > 0)
            {
                for (int j = 0; j < vec[i]; j++)
                {
                    ans.push_back(string(1, i + 'a'));
                }
            }
        }

        return ans;
    }
};