// Problem : https://leetcode.com/problems/unique-number-of-occurrences/description/

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int n = arr.size();
        unordered_map<int,int> m;
        unordered_set<int> freq;
        for(int i : arr)
            m[i]++;

        for(auto i : m)
            if(!freq.insert(i.second).second)
                return false;
        
        return true;
    }
};
