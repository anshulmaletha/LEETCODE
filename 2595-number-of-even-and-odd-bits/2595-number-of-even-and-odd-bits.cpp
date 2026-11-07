class Solution {
public:
    vector<int> evenOddBit(int n) {
        vector<int> temp;

        while(n != 0){
            temp.push_back(n % 2);
            n /= 2;
        }
        int even = 0;
        int odd = 0;

        for(int i = 0; i< temp.size(); i++){
            if(temp[i] == 1){
                if(i % 2 == 0) even++;
                else odd++;
            }
       }
       return {even,odd};
        
    }
};