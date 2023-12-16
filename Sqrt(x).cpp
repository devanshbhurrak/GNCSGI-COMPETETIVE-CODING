//Problem : https://leetcode.com/problems/sqrtx/

class Solution {
public:
    int mySqrt(int x) {
        int l = 0; 
        int r = x;
        long long int ans = -1;

        while(l<=r){
            long long int mid = l+(r-l)/2;
            long long int sqrt = mid*mid;

            if(sqrt == x){
                return mid;
            }
            if(sqrt <= x){
                ans = mid;
                l = mid + 1;
            }
            else {
                r = mid-1;
            }
        }
       return ans;
    }
};
