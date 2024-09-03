class Solution {
public:
    char repeatedCharacter(string s) {
        char c;
        for(int i=s.size()-1;i>=0;i--){
            for(int j=i-1;j>=0;j--){
                if(s[i]==s[j]){
                    c=s[i];
                }
            }
        }
        return c;
    }
};