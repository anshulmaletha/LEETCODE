class Solution {
public:
    bool checkString(string s) {
        for(int i = 0; (i+2) <= s.size(); i++){
            if(s.substr(i,2) == "ba") return false;
        }
        return true;
    }
};