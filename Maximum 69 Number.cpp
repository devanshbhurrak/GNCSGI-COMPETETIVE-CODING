// Problem : https://leetcode.com/problems/maximum-69-number/

class Solution {
public:
    int maximum69Number (int num) {
    int x = num;
    int n = 0;

    while (x) {
        n++;
        x /= 10;
    }
    x = num;
    vector<int> v(n, 0);

    for (int i = n - 1; i >= 0; i--) {
        v[i] = x % 10;
        x /= 10;
    }

    for (int i = 0; i < n; i++) {
        if (v[i] == 6) {
            v[i] = 9;
            i = n;
        }
    }

    int ans = 0;
    for (int i = 0; i < n; i++)
    {
        ans += v[i];
        if(i<n-1) ans*=10;
    }
    return ans;
    }
};
