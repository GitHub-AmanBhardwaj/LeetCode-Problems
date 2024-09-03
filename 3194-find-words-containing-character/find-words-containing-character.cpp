class Solution {
public:
    vector<int> findWordsContaining(vector<string>& words, char x) {
        vector<int> a;
        int i=0;
        for(string s:words){
            for(char c: s){
                if(c==x){
                    a.push_back(i);
                    break;
                }
            }
            i++;
        }
    return a;
    }
};