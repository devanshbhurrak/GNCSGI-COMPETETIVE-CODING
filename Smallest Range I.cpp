// Problem : https://leetcode.com/problems/smallest-range-i/

class Solution {
public:
    int smallestRangeI(vector<int>& nums, int k) {
        int min_val = nums[0];
        int max_val = nums[0];

        for(int i=1; i<nums.size(); i++) {
            min_val = min(min_val, nums[i]);
            max_val = max(max_val, nums[i]);
        }

        if(max_val - k <= min_val +k)
            return 0;
        else
            return (max_val - k) - (min_val + k);
    }
};
