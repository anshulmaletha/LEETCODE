        // unordered_map<char,int> mp;
        // int i = 0;
        // int j = 0;
        // int maxx = 0;
        // int length = 0;

        // while(i <= j && j<s.size()){
        //     if(mp.find(s[j]) != mp.end()){
        //             length = (j-i+1) - 1;
        //             i = j;
        //             j++;
        //             maxx = max(maxx,length);
        //         }
                
        //         mp[s[j]]++;
        //         j++; 
        //     }
        
        // return maxx;

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> mp;
        int i = 0;
        int j = 0;
        int maxx = 0;
        int length = 0;

        while(j < s.size()) {
            mp[s[j]]++;

            while(mp[s[j]] > 1) {
                mp[s[i]]--;
                i++;
            }
            length = j - i + 1;
            maxx = max(maxx, length);
            j++;
        }

        return maxx;
    }
};