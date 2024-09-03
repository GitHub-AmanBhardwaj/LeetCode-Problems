class Solution {
public:
    string removeStars(string s) {
        string a;
        for(char c :s){
            if(c!='*'){
                a.push_back(c);
            }else{
                a.pop_back();
            }
        }
        return a;
    }
};