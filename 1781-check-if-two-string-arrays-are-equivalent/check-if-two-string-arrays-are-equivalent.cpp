class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        string a,b;
        for(string s:word1){
            a+=s;
        }
        for(string s:word2){
            b+=s;
        }
        if(a==b){
            return 1;
        }     
        return 0;
    }
};