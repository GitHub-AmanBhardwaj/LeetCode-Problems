class Solution {
public:
    int mySqrt(int x) {
        long int sq=0;
        while(sq*sq<x){
            ++sq;
        }
        if(sq*sq==x){
            return sq;
        }
        return sq-1;
    }
};