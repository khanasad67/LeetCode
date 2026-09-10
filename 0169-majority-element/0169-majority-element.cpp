class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> mp;

        for(int x:nums){
            mp[x]++;
        }
        for(auto it : mp){
            if(it.second>nums.size()/2){  //it.first   // 2  → the number
                                          //it.second  // 3  → how many times it appeared
                return it.first;
            }
        }
        return -1;
    }
};