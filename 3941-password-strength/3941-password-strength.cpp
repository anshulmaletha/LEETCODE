class Solution {
public:
    int passwordStrength(string password) {
        unordered_map<char,int> mp;
        int count = 0;
        
        for(auto i: password) mp[i]++;
        for(auto it: mp){
            if(it.first >= 'a' && it.first <= 'z') count += 1;
            if(it.first >= 'A' && it.first <= 'Z') count += 2;
            if(isdigit(it.first)) count += 3;
            if(it.first == '!' || it.first == '@' || it.first == '#' || it.first == '$') count += 5;
        }

        return count;
    }
};