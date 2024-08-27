class Solution {
public:
    bool isPalindrome(int x) {
        int c=0;
        if(x<0){
            return 0;
        }else{
            string s=to_string(x);
            int c=s.size();
            for(int i=0;i<=(c/2);i++){
                if(s[i]!=s[c-1-i]){
                    return 0;
                }  
            }
        }
        return 1;
    }
};