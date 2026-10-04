class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        unordered_map<int,int> mp;
        int count = 0;

        for(auto i: jewels){
            mp[i]++;
        }

        for(auto i: stones){
            if(mp.find(i) != mp.end()) count++;
        }
        return count;        
    }
};