class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();

        int totalsum=0;

        for(int i=0; i<n; i++){
            totalsum+=nums[i];
        }

        int prefixsum=0;

        for(int i=0;i<n;i++){
            int leftsum=prefixsum;
            int rightsum= totalsum-prefixsum-nums[i];

            if(leftsum==rightsum){
                return i;
            }
            prefixsum +=nums[i];
        }
        return -1;
    }
};