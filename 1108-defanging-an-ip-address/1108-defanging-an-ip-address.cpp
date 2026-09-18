class Solution {
public:
    string defangIPaddr(string address) {
        string addr ="";
        for(int i = 0;i<address.size();i++){
            if(address[i]=='.'){
                addr+="[.]";
            }
            else{
                addr+=address[i];
            }
        }
        return addr;
    }
};