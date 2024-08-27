class Solution {
public:
    int reverse(int x) {
        int n=abs(x);
        long long int ans=0;
        int c=0;
        while(n>0){
            n/=10;
            c++;
        }
        c--;
        n=abs(x);
        int i=pow(10,c);
        while(n>0){
            long long int h=i;
            h*=(n%10);
            ans+=h;
            n/=10;
            i/=10;
        }
        if(ans>2147483647||ans<-2147483648){
            return 0;
        }
        if(x<0){
            return -ans;
        }
        return ans;
    }
};