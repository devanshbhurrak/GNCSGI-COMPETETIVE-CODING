// Problem : https://leetcode.com/problems/destination-city/description/

class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n = paths.size();
        int city = 0;
        while(true){
            bool found = false;
            for(int i=0; i<n; i++) {
                if(paths[city][1] == paths[i][0]){
                    city = i;
                    found = true;
                }
            }
            if(!found) break;
        }
        return paths[city][1];
    }
};
