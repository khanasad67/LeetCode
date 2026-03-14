class Solution {
public:
    vector<int> sumZero(int n) {
        vector<int> arr(n);
        int a=1;
       
        for(int i=0; i<n/2; i++){
            arr[2*i]=a;
            arr[2*i+1]=-a;
            a++;
        }
        if(n%2 ==1){
            arr[n-1]=0;
        }
        return arr;
    }
};