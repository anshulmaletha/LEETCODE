class Solution {
public:
    int trailingZeroes(int n) {
        int count5 = 0;
        
        while (n > 0) {
            n /= 5;
            count5 += n;
        }

        return count5;
    }
};