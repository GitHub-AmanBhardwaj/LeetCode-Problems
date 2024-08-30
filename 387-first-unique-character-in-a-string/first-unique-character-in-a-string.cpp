class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;i<s.size();i++){
            bool c=1;
            for(int j=0;j<s.size();j++){
                if(i!=j&&s[i]==s[j]){
                    c=0;
                    break;
                }else{
                    c=1;
                }
            }
            if(c==1){
                return i;
            }
        }
        return -1;
    }
};