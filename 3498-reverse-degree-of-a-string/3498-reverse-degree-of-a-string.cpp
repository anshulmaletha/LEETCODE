class Solution {
public:
    int reverseDegree(string s) {

        int sum = 0;

        for(int i = 0; i < s.size(); i++) {

            int rev = 26-(s[i]-'a'); // s[i] - 'a' --> index alphabet || 26 - (s[i] - 'a') --> Index in Reversed Alphabet
            sum+= rev*(i+1);
        }
        return sum;
    }
};