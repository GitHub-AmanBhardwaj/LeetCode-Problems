class Solution {
public:
    bool isPowerOfThree(int n) {
        for(int i=0;pow(3,i)<=n;i++){
            if(pow(3,i)==n){
                return 1;
            }
        }
        return 0;
    }
};
