class Solution {
public:
    int strStr(string haystack, string needle) {
        int k = needle.size();

        for(int i = 0; (i+k) <= haystack.size(); i++){
            if(haystack.substr(i,k) == needle) return i;
        }
        return -1;
    }
};