class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        
        string result = "";
        
        // Traverse each word
        for(string &word : words) {
            
            int totalWeight = 0;
            
            // Calculate weight of word
            for(char c : word) {
                totalWeight += weights[c - 'a'];
            }
            
            // Take modulo 26
            int mod = totalWeight % 26;
            
            // Map using reverse alphabetical order
            char mappedChar = 'z' - mod;
            
            // Append to result
            result.push_back(mappedChar);
        }
        
        return result;
    }
};
