class Solution {
public:
    int singleNumber(vector<int>& v) {
        int n = v.size();
        for(int i=0; i<n; i++){
            bool flag = false;
            for(int j=0; j<n ; j++){
                if(j==i) continue;
                if(v[i]==v[j]){
                    flag=true;
                    break;
                }
            }
            if(flag == false) return v[i];
        }
        return 4;
    }
};