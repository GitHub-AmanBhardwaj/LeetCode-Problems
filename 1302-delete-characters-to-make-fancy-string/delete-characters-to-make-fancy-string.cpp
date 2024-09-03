class Solution {
public:
    string makeFancyString(string s) {
        if(s.size()<3){
            return s;
        }
        string a;
        a+=s[0];
        for(int i=1;i+1<s.size();i++){
            if(s[i-1]==s[i]&&s[i]==s[i+1]){
            }else
            a.push_back(s[i]);
        }
        a.push_back(s[s.size()-1]);
        return a;
    }
};