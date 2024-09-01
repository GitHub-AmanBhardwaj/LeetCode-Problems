class Solution {
public:
    bool buddyStrings(string s, string goal) {
        if(s.size()!=goal.size()){
            return false;
        }
        if(s==goal){
            vector<int>count(26,0);
            for(char ch:s){
                count[ch-'a']++;
                if(count[ch-'a']>1){
                    return true;
                }
            }
            return false;
        }
        int a=-1,b=-1;

        for(int i=0;i<s.size();++i){
            if(s[i]!=goal[i]){
                if(a==-1){
                    a=i;
                }else if(b==-1){
                    b=i;
                }else{
                    return false;
                }
            }
        }
        if(b!=-1&&s[a]==goal[b]&&s[b]==goal[a]){
            return true;
        }
        return false;
    }
};