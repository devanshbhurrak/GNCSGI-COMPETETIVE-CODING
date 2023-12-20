// Problem : https://leetcode.com/problems/length-of-last-word/description/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int n = s.length()-1;
        int i = 0;
        while(s[n] == ' ')
            n--;
        for(i=n; i>=0; i--) 
            if(s[i] == ' ')
                return n-i;
        return n-i;
    }
};
