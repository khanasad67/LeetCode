class Solution {
public:
    int missingNumber(vector<int>& nums) {
    //    int n= nums.size();

    //    int expected= n*(n+1)/2;
    //    int actual =0;

    //    for(int x: nums){
    //     actual += x;
    //    }

    //    return expected-actual;

    int n= nums.size();
    int ans =n;

    for(int i=0; i<n; i++){
        ans= ans^i;
        ans= ans^nums[i];
    }
    return ans;
    } 
};