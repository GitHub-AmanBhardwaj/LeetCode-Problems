class Solution {
public:
    bool isCircularSentence(string s) {
        char c;
        for(int i=0;i+1<s.size();i++){
            if(s[i+1]==' '){
                c=s[i];
                i++;
                if(c!=s[i+1]){
                    return 0;
                }
            }

        }

        if(s[0]!=s[s.size()-1]){
            return 0;
        }
        
        return 1;
    }
};