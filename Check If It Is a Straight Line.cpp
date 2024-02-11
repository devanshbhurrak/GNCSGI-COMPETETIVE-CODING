// Problem : https://leetcode.com/problems/check-if-it-is-a-straight-line/

class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        int n = coordinates.size();

        int xdiff = coordinates[1][0] - coordinates[0][0];
        int ydiff = coordinates[1][1] - coordinates[0][1];

        for(int i=2; i<n; i++) {
            if(xdiff*(coordinates[i][1] - coordinates[i-1][1]) != ydiff*(coordinates[i][0] - coordinates[i-1][0]))
                return false;
        }

        return true;
    }
};
