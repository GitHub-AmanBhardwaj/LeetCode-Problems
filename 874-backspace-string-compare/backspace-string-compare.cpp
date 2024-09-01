class Solution {
public:
    bool backspaceCompare(string s, string t) {
        string a,b;
        for(char c:s){
            if(c!='#'){
                a.push_back(c);
            }else{
                if(a.size()){
                    a.pop_back();
                }
            }
        }for(char c:t){
            if(c!='#'){
                b.push_back(c);
            }else{
                if(b.size()){
                    b.pop_back();
                }
            }
        }
        if(a==b){
            return 1;
        }
        return 0;
    }
};