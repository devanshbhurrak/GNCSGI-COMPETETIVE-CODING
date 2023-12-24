// Problem : https://leetcode.com/problems/average-salary-excluding-the-minimum-and-maximum-salary/submissions/1127524774/

class Solution {
public:
    double average(vector<int>& salary) {
        double avgSalary = 0;
        int mini = INT_MAX;
        int maxi = INT_MIN;
        int n = salary.size();
        for(int i = 0; i < n; ++i) {
            avgSalary += salary[i];
            mini = min(mini, salary[i]);
            maxi = max(maxi, salary[i]);
        }
        avgSalary -= (mini + maxi);
        return avgSalary/(n-2);
    }
};
