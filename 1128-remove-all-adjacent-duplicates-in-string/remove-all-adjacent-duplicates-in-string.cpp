class Solution {
public:
    string removeDuplicates(string st) {
        string s;
        for(char c:st){
            if(!s.size()){
                s.push_back(c);
            }else if(c==s[s.size()-1]){
                s.pop_back();
            }else{
                s.push_back(c);
            }
        }
        return s;
    }
};