// Problem : https://leetcode.com/problems/reverse-words-in-a-string-iii/

class Solution {
public:
    string reverseWords(string s) {
        string revStr = "";
        string str = "";
        for(int i=0; i<=s.length(); i++) {
            if(s[i] != ' ' and i != s.length()) {
                str.push_back(s[i]);
            }
            else {
                reverse(str.begin(), str.end());
                if(i != s.length())
                    str.push_back(' ');
                revStr += str;
                str = "";
            }
        }
        return revStr;
    }
};
