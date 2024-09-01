class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int i=0;
        for(char j:jewels){
            for(char s:stones){
                if(j==s){
                    i++;
                }
            }
        }
        return i;
    }
};