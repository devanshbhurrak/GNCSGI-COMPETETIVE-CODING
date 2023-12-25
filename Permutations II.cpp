// Problem : https://leetcode.com/problems/permutations-ii/

class Solution {
    vector<vector<int>> ans;

    void prem(vector<int> &nums, int i) {
        if(i == nums.size()) {
            ans.push_back(nums);
            return;
        }
        unordered_set <int> s; 
        for(int j=i; j<nums.size(); j++) {
            if(s.find(nums[j]) != s.end())
                continue;
            s.insert(nums[j]);
            swap(nums[i], nums[j]);
            prem(nums, i+1);
            swap(nums[i], nums[j]);
        }
    }
public:
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        prem(nums,0);
        return ans;
    }
};
