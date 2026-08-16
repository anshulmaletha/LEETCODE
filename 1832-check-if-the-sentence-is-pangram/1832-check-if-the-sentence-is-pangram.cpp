class Solution {
public:
    bool checkIfPangram(string s) {
        unordered_map<char,int> mp;

        for(auto i: s){
            mp[i]++;
        }

        return mp.size() == 26;
    }
};