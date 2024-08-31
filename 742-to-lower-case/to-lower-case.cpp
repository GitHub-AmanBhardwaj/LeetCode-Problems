class Solution {
public:
    string toLowerCase(string s) {
        string a;
        for(int i:s){
            if(i>64&&i<91){
                i+=32;
            }
            char c=i;
            a.push_back(c);
        }
        return a;
    }
};