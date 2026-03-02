class Solution {
public:
    void sortColors(vector<int>& nums) {

        int lo =0;
        int mid = 0;
        int high = nums.size()-1;

        while(mid<=high){
            if(nums[mid]==2){
                int temp = nums[mid];
                nums [mid] = nums[high];
                nums[high]=temp;
                high--;
            }
            else if (nums[mid]==0){
                int temp = nums[mid];
                nums [mid] = nums[lo];
                nums[lo]=temp;
                lo++;
                mid++;
            }
            else{
                mid++;
            }
        }
    }
};