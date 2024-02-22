// Problem : https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/

class Solution {
public:
    int findMin(vector<int>& nums) {
        int l = 0;
        int r = nums.size()-1;
        
        if(nums[l] < nums[r])
            return nums[l];

        while(l<r) {
            int mid = l + (r-l)/2;
            if(nums[mid] < nums[r])
                r = mid;
            else
                l = mid+1;
        }
        return nums[l];
    }
};
