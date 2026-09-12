class Solution {
public:
    int bestClosingTime(string customers) {
        int n= customers.size();

        int penalty =0;

        for(int i=0; i<n; i++){
            if(customers[i]=='Y'){
                penalty++;
            }
        }

        int minpenalty=penalty;
        int besthour=0;

        for(int i=0; i<n; i++){
            if(customers[i]=='Y'){
                penalty--;
            }else{
                penalty++;
            }

            if(penalty<minpenalty){
                minpenalty=penalty;
                besthour=i+1;
            }
        }
        return besthour;
    }
};