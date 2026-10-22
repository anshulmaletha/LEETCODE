class Solution {
public:
    bool halvesAreAlike(string s) {
        string s1 = "";
        string s2 = "";
        int count = 0;
        int countt = 0;

        for(int i = 0; i<s.size()/2; i++) s1 += tolower(s[i]);
        for(int i = s.size()/2 ; i<s.size(); i++) s2 += tolower(s[i]);

        for(int i = 0; i<s1.size(); i++){
            if(s1[i] == 'a' || s1[i] == 'e' || s1[i] == 'i' || s1[i] == 'o' || s1[i] == 'u') count++;
        }

        for(int i = 0; i<s2.size(); i++){
            if(s2[i] == 'a' || s2[i] == 'e' || s2[i] == 'i' || s2[i] == 'o' || s2[i] == 'u') countt++;
        }

        return count == countt;

    }
};