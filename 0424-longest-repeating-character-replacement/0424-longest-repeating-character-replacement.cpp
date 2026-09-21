class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int>mp;
       int i =0;
       int maxfreq=0;
       int ans=0;

       for(int j=0; j<s.size(); j++ ){
        mp[s[j]]++;
         maxfreq= max(maxfreq,mp[s[j]]);
       
       
            while((j-i+1)-maxfreq>k){
                mp[s[i]]--;
                i++;
            }
             ans=max(ans,j-i+1);
       }
       return ans;
       
    }
};