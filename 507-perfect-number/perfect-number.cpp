class Solution {
public:
    bool checkPerfectNumber(int num) {
        int m=0;
        for(int i=1;i<=num/2;i++){
            if(num%i==0){
                m+=i;
            }
        }
        if(m==num){
            return 1;
        }
        return 0;
    }
};