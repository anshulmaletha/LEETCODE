class Solution {
public:
    string reverseWords(string s) {
        int n = s.length();
        string ans = "";
        reverse(s.begin(), s.end());
        for (int i = 0; i < n;) {
            string word = "";
            
            while (i < n && s[i] != ' ') {
                word += s[i];
                i++;
            }
            while (i < n && s[i] == ' ') {
                i++;
            }
            if (!word.empty()) {
                if (!ans.empty()) {
                    ans += " ";  
                }
                reverse(word.begin(), word.end());
                ans += word;
            }
        }
        
        return ans;
    }
};


        // string s1 = "";

        // for(int i = s.size() - 1; i >= 0; i--) {
        //     s1 += s[i];
        // }

        // int i = 0;
        // int j = 0;

        // while(i < s1.size()) {

        //     while(i < s1.size() && s1[i] == ' ')
        //         i++;

        //     j = i;
            
        //     while(j < s1.size() && s1[j] != ' ')
        //         j++;

        //     reverse(s1.begin() + i, s1.begin() + j);

        //     i = j;
        // }

        // return s1;