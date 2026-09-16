class Solution {
public:
     bool isIsomorphic(string s, string t) {
    //     if(s.length()!=t.length()) return false;
    //     vector<int> v(150 , 1000);
    //     for (int i =0; i<s.length(); i++){
    //         int idx= (int) s[i];
    //         if(v[idx]==1000) v[idx] = s[i]-t[i];
    //         else if (v[idx]!= (s[i]-t[i])) return false;
    //     }
    //     for(int i=0; i<150; i++)
    //         v[i]= 1000;
    //     for(int i =0; i<t.length(); i++){
    //         int idx= (int) t[i];
    //         if(v[idx]==1000) v[idx] = t[i]-s[i];
    //         else if (v[idx]!= (t[i]-s[i])) return false;
    //     }   
    //     return true;
        
    // }
    
        unordered_map<char, char> mp1;
        unordered_map<char, char> mp2;

        for(int i = 0; i < s.size(); i++) {

            // Check s -> t mapping
            if(mp1.find(s[i]) != mp1.end()) {
                if(mp1[s[i]] != t[i])
                    return false;
            }
            else {
                mp1[s[i]] = t[i];
            }

            // Check t -> s mapping
            if(mp2.find(t[i]) != mp2.end()) {
                if(mp2[t[i]] != s[i])
                    return false;
            }
            else {
                mp2[t[i]] = s[i];
            }
        }

        return true;
     }
};