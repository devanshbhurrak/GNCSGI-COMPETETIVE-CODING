// Problem : https://leetcode.com/problems/find-common-characters/description/

class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<string> ans;
        
        vector<int> common(26, INT_MAX);
        
        for(auto s : words) {
            vector<int> count(26, 0);
            for(auto c : s) count[c-'a']++;
            for(int i=0; i<26; ++i)
                common[i] = min(common[i], count[i]);
        }
        for(int i=0; i<26; ++i) {
            if(common[i] > 0) {
                while(common[i]--)
                    ans.push_back(string(1, i+'a'));
            }
        }
        return ans;
    }
};
