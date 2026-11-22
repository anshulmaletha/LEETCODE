class Solution {
public:
    bool checkString(string s) {
        for(int i = 0; (i+2) <= s.size(); i++){
            if(s.substr(i,2) == "ba") return false;
        }
        return true;
    }
};

//    int res=s.size();
//         for(int i=0;i<s.size();i++){
//             if(s[i]=='b'){
//                 res=i;
//                 break;
//             }
//         }
//         for(int j=res;j<s.size();j++){
//             if(s[j]=='a') return false;
//         }
//         return true;