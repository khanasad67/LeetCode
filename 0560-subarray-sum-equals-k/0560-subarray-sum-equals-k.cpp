class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {

        // unordered_map<int, int> mp;

        // mp[0] = 1;

        // int sum = 0;
        // int ans = 0;

        // for(int i = 0; i < nums.size(); i++) {

        //     sum += nums[i];

        //     if(mp.find(sum - k) != mp.end()) {
        //         ans += mp[sum - k];
        //     }

        //     mp[sum]++;
        // }

        // return ans;

        int n = arr.size();
        vector<int> pre(n,0);
        pre[0]=arr[0];
        for(int i=1;i<n;i++){
            pre[i]= arr[i]+pre[i-1];
        }

        unordered_map<int,int>mp;
        int count =0;
        for(int i=0; i<n;i++){
            if(pre[i]==k){
                count++;
            }
            int rem = pre[i]-k;
            if(mp.find(rem)!=mp.end()) count+= mp[rem];
            mp[pre[i]]++;

        }
        return count;
    }
};