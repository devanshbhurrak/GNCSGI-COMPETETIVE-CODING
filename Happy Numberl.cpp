// Problem : https://leetcode.com/problems/happy-number/

class Solution {
public:
    bool isHappy(int n) {
        vector<int> arr;
        while(n!=1){
            int sum = 0;
            while(n > 0) {
                int digit = n%10;
                sum += (digit*digit);
                n /= 10;
            }
            if(find(arr.begin(),arr.end(),sum) != arr.end())
                return false;
            arr.push_back(sum);
            n = sum;
        }
        return true;
    }
};
