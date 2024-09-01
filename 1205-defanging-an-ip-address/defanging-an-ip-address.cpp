class Solution {
public:
    string defangIPaddr(string a){
        string ans;
        for(char c:a){
            if(c!='.'){
                ans.push_back(c);
            }else{
                ans.push_back('[');
                ans.push_back(c);
                ans.push_back(']');
            }
        }
        return ans;
    }
};