class Solution {
public:
    int maxArea(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;
        int maxx = 0;

        while (left < right) {
            int amount = (right - left) * min(height[left], height[right]);
            maxx = max(maxx, amount);

            if (height[left] < height[right])
                left++;
            else
                right--;
        }

        return maxx;
    }
};


        // int left = 0;
        // int right = height.size() - 1;
        // int maxx = 0;

        // while(left < right){
        //     if(height[left] < height[right]){
        //         int amount = (right-left)*height[left];
        //         maxx = max(maxx,amount);
        //         left++;
        //     }

        //     else if(height[left] > height[right]){
        //         int amount = (right-left)*height[right];
        //         maxx = max(maxx,amount);
        //         right--;
        //     }

        //     else{
        //         int amount = (right-left)*height[left];
        //         maxx = max(maxx,amount);
        //         left++;
        //     }
        // }

        // return maxx;
    