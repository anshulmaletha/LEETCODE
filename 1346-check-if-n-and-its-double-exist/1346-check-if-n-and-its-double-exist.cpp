class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
        unordered_map<int,int> mp;

        for(int i = 0; i<arr.size(); i++){
            int a = arr[i];
            int b = 2*a;

            if (mp.find(2*a) != mp.end() || (a % 2 == 0 && mp.find(a/2) != mp.end())) return true;

            mp[a] = 2*a;
        }

        return false;
    }
};