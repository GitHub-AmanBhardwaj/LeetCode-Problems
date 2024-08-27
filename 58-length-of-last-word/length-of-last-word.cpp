class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.size()-1;
        int c=0;
        while(i<s.size()&&s[i]==' '){
            i--;
        }
        while(i<s.size()&&s[i]!=' '){
            c++;
            i--;
        }
        return c;
    }
};