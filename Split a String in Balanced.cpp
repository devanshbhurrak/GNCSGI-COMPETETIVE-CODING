// Problem : https://leetcode.com/problems/split-a-string-in-balanced-strings/

class Solution {
public:
    int balancedStringSplit(string s) {
        int n = s.length();
        int balanceStr = 0;
        int cnt = 0;
        for(int i=0; i<n; i++) {
            if(s[i] == 'R')
                cnt++;
            else if(s[i] == 'L')
                cnt--;
            if(cnt == 0)
                balanceStr++;
        }
        return balanceStr;
    }
};
