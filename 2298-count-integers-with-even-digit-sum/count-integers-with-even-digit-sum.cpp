class Solution {
public:
    int countEven(int n) {
        int c=0;
        while(n>0){
            int t=n;
            int a=0;
            while(t>0){
                a+=t%10;
                t/=10;
            }
            if(a%2==0){
                c++;
            }
            n--;
        }
        return c;
    }
};