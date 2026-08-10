class Solution {
public:
    vector<long long> sumOfThree(long long num) {
        // no. are consecutive: x-1,x,x+1
        // 3x = num

        long long temp = num/3;

        if(num%3 == 0) return{temp-1,temp,temp+1};
        else return {};
        
    }
};