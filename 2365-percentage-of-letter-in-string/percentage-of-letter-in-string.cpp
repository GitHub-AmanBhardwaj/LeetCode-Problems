class Solution {
public:
    int percentageLetter(string s, char letter) {
        int i=0;
        for(char c:s){
            if(c==letter){
                i++;
            }
        }
        i*=100;
        return i/s.size();
        
    }
};