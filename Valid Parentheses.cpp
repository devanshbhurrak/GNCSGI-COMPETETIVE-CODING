// Problem : https://leetcode.com/problems/valid-parentheses/description/

class Solution {
public:
    bool isValid(string s) {
        stack<char> st;
        for(char c : s){
            if(c=='(' || c=='{' || c=='[')
                st.push(c);
            else {
                char top = st.top();
                if( st.empty() || (top=='(' && c!=')') ||
                  (top=='{' && c!='}') || (top=='[' && c!=']'))
                    return false;
                st.pop();
            }
        }
        return st.empty();
    }
};
