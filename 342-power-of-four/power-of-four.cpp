class Solution {
public:
    bool isPowerOfFour(int n) {
        for(int i=0;i<16;i++){
            if(pow(4,i)==n){
                return 1;
            }
        }
        return 0;
        
    }
};