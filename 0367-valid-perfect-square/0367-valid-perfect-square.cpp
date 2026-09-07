class Solution {
public:
    bool isPerfectSquare(int num) {
        int low = 0;
        int high = num;

        while(low <= high){
            long long mid = low + (high-low)/2;

            if(mid*mid == num) return true;
            else if(mid*mid < num) low = mid + 1;
            else high = mid - 1;
        }

        return false;
    
    }
};

    // int odd = 1;
    // while(num>0){
    //     num = num-odd;
    //     odd += 2;
    // }

    // if(num == 0) return true;
    // else return false;