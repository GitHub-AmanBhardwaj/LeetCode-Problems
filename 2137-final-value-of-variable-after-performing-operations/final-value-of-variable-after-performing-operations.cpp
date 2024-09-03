class Solution {
public:
    int finalValueAfterOperations(vector<string>& o) {
        int x=0;
        for(string s:o){
            for(char c:s){
                if(c=='-'){
                    x--;
                    break;
                }else if(c=='+'){
                    x++;
                    break;
                }
            }
        }
        return x;
    }
};