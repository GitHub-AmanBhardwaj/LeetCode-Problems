class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(s.length()==0){
            return 1;
        }
        int c=0;
        int i=0;
        int max=0;
        int j=0;
        while(i<s.length()){
            while(j<=t.length()){
                if(j==t.length()&&!c){
                    return 0;
                }
                if(s[i]==t[j]){
                    c=1;
                    j++;
                    break;
                }else{
                    c=0;
                    j++;
                }
            }
            if(c==0){
                return 0;
            }
            i++;
        }
        if(c){
            return 1;
        }
        return 0;
    }
};