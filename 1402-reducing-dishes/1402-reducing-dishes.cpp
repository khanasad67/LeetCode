class Solution {
public:
    int maxSatisfaction(vector<int>& satisfaction) {
        
        sort(satisfaction.begin(),satisfaction.end());

        int ss=0;
        int res=0;

        for(int i= satisfaction.size()-1; i>=0; i--){

            ss=ss+satisfaction[i];

            if(ss>0){
                res=res+ss;
            }else{
                break;
            }
        }
        return res;
    }
};