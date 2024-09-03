class Solution {
public:
    int countSeniors(vector<string>& details) {
        int c=0;
        for(string s:details){
            if(s[11]==54&&s[12]==48){

            }else if(s[11]>53){
                c++;
            }
        }
        return c;
    }
};