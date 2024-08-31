class Solution {
public:
    bool validPalindrome(string s) {
        int i,j;
        bool b=0;
        bool ans=1;
        i=0;
        j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                if(b==0){
                    b=1;
                }else{
                    ans=0;
                }
                j--;
            }else{
            i++;
            j--;}
        }if(ans==1){
            return ans;
        }else{
            ans=1;
        }
        b=0;
        i=0;
        j=s.size()-1;
        while(i<=j){
            if(s[i]!=s[j]){
                if(b==0){
                    b=1;
                }else{
                    ans=0;
                }
                i++;
            }else{
            i++;
            j--;}
        }
        return ans;
    }
};