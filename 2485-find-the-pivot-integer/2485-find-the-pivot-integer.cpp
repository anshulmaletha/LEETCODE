class Solution {
public:
    int pivotInteger(int n) {
        int sum = (n*(n+1))/2;

        int temp = sqrt(sum);

        if(temp*temp == sum) return temp;
        else return -1;
        
    }
};