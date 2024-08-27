class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if(strs.size()==0) return s;
        for(int j=0;j<strs[0].size();j++){
            char c=(strs[0][j]);
            bool a=1;
            for(int i=1;i<strs.size();i++){
                if(j>=strs[i].size()||strs[i][j]!=c){
                    a=0;
                    break;
                }
            }
            if(a){
                s.push_back(c);
            }else{
                break;
            }
        }
        return s;
    }
};