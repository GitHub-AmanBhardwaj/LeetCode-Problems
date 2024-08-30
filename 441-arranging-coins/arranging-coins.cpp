class Solution {
public:
    int arrangeCoins(int n) {
        int i=0;
        while(n>0){
            n-=(i+1);
            if(n<0){
                return i;
            }
            i++;
        }
        return i;
    }
};