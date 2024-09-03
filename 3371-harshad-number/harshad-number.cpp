class Solution {
public:
    int sumOfTheDigitsOfHarshadNumber(int x) {
        int t=x;
        int s=0;
        while(x){
            s+=x%10;
            x/=10;
        }
        if(t%s){
            return -1;
        }
        return s;
    }
};