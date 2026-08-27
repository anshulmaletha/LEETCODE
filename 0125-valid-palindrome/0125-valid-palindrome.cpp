class Solution {
public:
    bool isPalindrome(string s) {

        int left = 0;
        int right = s.size() - 1;

        while(left < right) {

            while(left < right && !isalnum(s[left]))
                left++;

            while(left < right && !isalnum(s[right]))
                right--;

            if(tolower(s[left]) != tolower(s[right]))
                return false;

            left++;
            right--;
        }

        return true;
    }
};

        // string s1 = "";

        // for(int i = 0; i < s.size(); i++){
        //     if(isalnum(s[i])){
        //         s1 += tolower(s[i]);
        //     }
        // }

        // int left = 0;
        // int right = s1.size() - 1;

        // while(left < right){
        //     if(s1[left] != s1[right])
        //         return false;

        //     left++;
        //     right--;
        // }

        // return true;
