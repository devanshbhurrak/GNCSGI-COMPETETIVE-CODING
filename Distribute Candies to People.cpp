// Problem : https://leetcode.com/problems/distribute-candies-to-people/submissions/1173384597/

class Solution {
public:
    vector<int> distributeCandies(int candies, int num_people) {
        vector<int> ans(num_people,0);
        int i=0;

        while(candies >= 0) {
            ans[i % num_people] += min(i+1, candies);
            i++;
            candies-=i;
        }
        return ans;
    }
};
