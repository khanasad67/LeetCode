class Solution {
public:
    vector<int> findAnagrams(string s, string p) {

        vector<int> ans;

        if(p.size() > s.size())
            return ans;

        vector<int> countP(26, 0);
        vector<int> countS(26, 0);

        for(char c : p) {
            countP[c - 'a']++;
        }

        int k = p.size();

        for(int i = 0; i < k; i++) {
            countS[s[i] - 'a']++;
        }

        if(countP == countS) {
            ans.push_back(0);
        }

        for(int i = k; i < s.size(); i++) {

            countS[s[i] - 'a']++;

            countS[s[i - k] - 'a']--;

            if(countP == countS) {
                ans.push_back(i - k + 1);
            }
        }

        return ans;
    }
};