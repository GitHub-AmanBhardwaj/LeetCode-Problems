class Solution {
public:
    int scoreOfString(string s) {
        int a=0;
        for(int i=1;i<s.size();i++){
            int t1=s[i-1];
            int t2=s[i];
            a+=abs(t1-t2);
        }
        return a;
    }
};