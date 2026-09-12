class Solution {
public:
    vector<int> answerQueries(vector<int>& nums, vector<int>& queries) {
        
        sort(nums.begin(),nums.end());

        vector<int>ans(queries.size());

        for(int i=1; i<nums.size(); i++){
            nums[i]=nums[i]+nums[i-1];
        }

        for(int j=0; j<queries.size();j++){
            int len =0;
            for(int i=0; i<nums.size(); i++){
                if(nums[i]>queries[j]){
                    break;

                }else{
                    len++;
                }
            }
            ans[j]=len;
        }
        return ans;
    }
};