class Solution {
public:
    int maxPower(string s) {
        int c=1;
        int m=1;
        for(int i=0;i+1<s.size();i++){
            c=1;
            while(i+1<s.size()&&s[i]==s[i+1]){
                c++;
                i++;
            }
            if(m<c){
                m=c;
            }
        }
        return m;
    }
};