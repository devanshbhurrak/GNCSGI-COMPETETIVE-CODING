// Problem : https://leetcode.com/problems/contains-duplicate/

class Solution {
public:
    bool containsDuplicate(std::vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();

        for (int i=0; i<n-1; i++)
            if (nums[i] == nums[i + 1])
                return true;

        return false;
    }
};
