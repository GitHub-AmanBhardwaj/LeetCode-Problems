class Solution {
public:
    int divide(int a, int divisor) {
        long int ans=0;
        long int d=abs(a);
        long int di=abs(divisor);
        int i=2;
        while (d>=di) {
            long long t=di,m=1;
            while(d>=(t<<1)){
                t<<=1;
                m<<=1;
            }
            d-=t;
            ans+=m;
        }
        bool isNegative=(a<0)^(divisor<0);
        if(isNegative){
            ans=-ans;
        } 
        if (ans > INT_MAX) return INT_MAX;
        if (ans < INT_MIN) return INT_MIN;

        return ans;
    }
};