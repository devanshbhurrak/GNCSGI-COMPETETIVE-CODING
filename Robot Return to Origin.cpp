// Problem : https://leetcode.com/problems/robot-return-to-origin/description/

class Solution {
public:
    bool judgeCircle(string moves) {
        int h = 0, v = 0;
        int n = moves.size();
        for(int i=0; i<n; i++) {
            char ch = moves[i];
            if(ch == 'R')
                h++;
            else if(ch == 'L')
                h--;
            else if(ch == 'D')
                v++;
            else if(ch == 'U')  
                v--;
        }
        return (h == 0 && v== 0);
    }
};
