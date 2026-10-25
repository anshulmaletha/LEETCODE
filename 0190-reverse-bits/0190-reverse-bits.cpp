class Solution {
public:
    int reverseBits(int n) {
        vector<long long> bits;

        for(int i = 0; i<32; i++){
            bits.push_back(n % 2);
            n /= 2;
        }
        long long num = 0;
        
        for(long long bit: bits){
            num = num*2 + bit; 
        }

        return num;
    }
};