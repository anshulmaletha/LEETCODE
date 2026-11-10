class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
        unordered_map<string,int> mp;
        vector<string> temp;

        for(int i = 0; i + 10 <= s.size(); i++){
            mp[s.substr(i,10)]++;
        }
        
        for(auto it: mp) {
            if(it.second >= 2)  temp.push_back(it.first);
        }
        return temp;
    }
};