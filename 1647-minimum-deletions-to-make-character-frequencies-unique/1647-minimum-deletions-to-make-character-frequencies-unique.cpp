class Solution {
public:
    int minDeletions(string s) {
        map<char, int> mp;
        set<int> st;
        int count = 0;

        for(char c : s) {
            mp[c]++;
        }

        for(auto it : mp) {
            int x = it.second;

            while(x > 0 && st.find(x) != st.end()) {
                x--;
                count++;
            }

            if(x > 0) {
                st.insert(x);
            }
        }

        return count;
    }
};