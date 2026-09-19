class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int n = customers.size();

        int MaxUnsatCust=0;

        int CurrUnsat =0;

        for(int i=0; i<minutes; i++){
            CurrUnsat += customers[i]*grumpy[i];
        }

        MaxUnsatCust = CurrUnsat;

        int i=0;
        int j=minutes;

        while(j<n){
            CurrUnsat += customers[j]*grumpy[j];
            CurrUnsat -= customers[i]*grumpy[i];

             MaxUnsatCust= max(MaxUnsatCust,CurrUnsat);

             i++;
             j++;
        }

        int totalSat= MaxUnsatCust;
        for(int i=0; i<n; i++){
            totalSat+=customers[i]*(1-grumpy[i]);
        }

        return totalSat;
    }
};