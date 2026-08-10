class Solution {
public:
    int scoreDifference(vector<int>& nums) {
        int p1 = 0;
        int p2 = 0;
        bool check = true;

        for(int i = 0; i < nums.size(); i++) {

            if(nums[i] % 2 != 0)
                check = !check;

            if((i - 5) % 6 == 0)
                check = !check;

            if(check)
                p1 += nums[i];
            else
                p2 += nums[i];
        }

        return p1 - p2;
    }
};

// check means p1 is active and p2 is inactive