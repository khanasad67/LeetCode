#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> intersection(vector<vector<int>>& nums) {
        unordered_map<int, int> mp;

        int n = nums.size();

        // Count frequency
        for(auto &arr : nums){
            for(auto &x : arr){
                mp[x]++;
            }
        }

        vector<int> ans;

        // Collect elements present in all arrays
        for(auto &it : mp){
            if(it.second == n){
                ans.push_back(it.first);
            }
        }

        // Sort result
        sort(ans.begin(), ans.end());

        return ans;
    }
};