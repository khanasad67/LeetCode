class Solution {
public:

    int reverseNum(int n) {
        int rev = 0;

        while(n > 0) {
            int digit = n % 10;
            rev = rev * 10 + digit;
            n = n / 10;
        }

        return rev;
    }

    int countNicePairs(vector<int>& nums) {

        unordered_map<int, int> mp;

        long long ans = 0;
        int mod = 1000000007;

        for(int x : nums) {

            int rev = reverseNum(x);

            int key = x - rev;

            ans = (ans + mp[key]) % mod;

            mp[key]++;
        }

        return ans;
    }
};