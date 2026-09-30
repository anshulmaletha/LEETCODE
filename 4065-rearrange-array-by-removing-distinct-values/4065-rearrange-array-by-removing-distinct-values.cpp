class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        map<int,int> mp;
        vector<int> ans;

        for(auto i: nums) mp[i]++;

        while(ans.size() < nums.size()){
            for(auto &i: mp){
                if(i.second > 0){
                    ans.push_back(i.first);
                    i.second--;
                }
            }
        }
        return ans;
    }
};

        // map<int,int> mp;
        // vector<int> ans;

        // for(auto i: nums) mp[i]++;

        // while(!mp.empty()){
        //     vector<int> rem;

        //     for(auto it: mp){
        //         ans.push_back(it.first);
        //         it.second--;

        //         if(it.second == 0) rem.push_back(it.first);
        //     }

        //     for(int i: rem) mp.erase(i);
        // }

        // return ans;