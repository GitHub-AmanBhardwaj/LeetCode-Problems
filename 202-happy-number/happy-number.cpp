class Solution {
public:
    bool isHappy(int n) {
        int p=0;
        while(n>0){
            p+=pow(n%10,2);
            n/=10;
        }
        int a=0;
        while(p>9){
            while(p>0){
                a+=pow(p%10,2);
                p/=10;
            }
            p=a;
            a=0;
        }
        if(p==1||p==7){
            return 1;
        }
        return 0;
    }
};