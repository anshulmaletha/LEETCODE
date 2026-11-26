class Solution {
public:
    int minSteps(string s, string t) {
        unordered_map<char, int> mp;
        int count = 0;

        for (char c : s) mp[c]++;
        for (char c : t) mp[c]--; 

        for (auto it : mp) {
            count += abs(it.second); 
        }
        return count;
    }
};
