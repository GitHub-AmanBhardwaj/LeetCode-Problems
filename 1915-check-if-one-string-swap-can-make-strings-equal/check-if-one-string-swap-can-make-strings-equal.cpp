class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
        if(s1.size()!=s2.size()){
            return 0;
        }
        int a=-1;
        int b;
        int m=0;
        for(int i=0;i<s1.size();i++){
            if(s1[i]!=s2[i]){
                if(a==-1){
                    a=i;
                }else{
                    b=i;
                }
                m++;
            }
        }
        if(!m){
            return 1;
        }
        if(m==2&&s1[a]==s2[b]&&s1[b]==s2[a]){
            return 1;
        }
        return 0;
    }
};