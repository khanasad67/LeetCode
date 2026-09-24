class Solution {
public:
    int maxScore(vector<int>& arr, int k) {
        int n= arr.size();
        int total =0;

        for(int x:arr){
            total+=x;
        }

        int winsize=n-k;

        int winsum=0;

        for(int i=0; i<winsize; i++){
            winsum+=arr[i];
        }

        int minwin=winsum;

        int i=0;
        int j=winsize;

        while(j<n){
            winsum+=arr[j];
            winsum-=arr[i];

            minwin=min(minwin,winsum);
            i++;
            j++;
        }

        return total-minwin;
    }
};