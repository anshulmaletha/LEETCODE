class Solution {
public:
    string reverseStr(string s, int k) {
        int l = 0;
        int r = k;
        if(s.size() <= k) {
            reverse(s.begin(), s.end());
            return s;
        }

        // while(l<=r){
        //     swap(s[l],s[r]);
        //     l++;
        //     r--;
        // }

        for(int i = 0; i < s.size(); i += 2*k){
            int l = i;
            int r =  min(i + k - 1, (int)s.size() - 1);
            while(l<=r){
                swap(s[l],s[r]); 
                l++;
                r--;
            }
        }


        return s;
    }
};