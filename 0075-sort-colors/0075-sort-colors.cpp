class Solution {
public:
    void sortColors(vector<int>& nums) {
        int noz = 0;
        int noo = 0;
        int no2 = 0;

        for(int i =0 ; i<nums.size(); i++){
            if (nums[i]==0){
                noz++;
            }
            else if(nums[i]==1){
                noo++;
            }
            else{
                no2++;
            }
        }

        int index = 0;

        for(int i = 0; i < noz; i++){
            nums[index++] = 0;
        }
        for(int i = 0; i < noo; i++){
            nums[index++] = 1;
        }
        for(int i = 0; i < no2; i++){
            nums[index++] = 2;
        }
    }
};