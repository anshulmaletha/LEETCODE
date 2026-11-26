class Solution {
public:
    bool canAliceWin(int n) {
        if (n < 10) return false;
        int alice = 10;
        int bob = 9;
        int ans = 0;

        for (int i = 0; i < n; i++) {
            if (n < alice) return false;
            n -= alice;
            alice -= 2;
            ans++;

            if (n == 0 && ans % 2 != 0)
                return true;

            if (n < bob) return true;
            n -= bob;
            bob -= 2;
            ans++;

            if (n == 0 && ans % 2 == 0)
                return false;
        }

        return false;
    }
};