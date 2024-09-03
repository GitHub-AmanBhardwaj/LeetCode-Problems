class Solution {
public:
    int pivotInteger(int n) {
        int a=0;
        int b=0;
        for(int i=1;i<=n;i++){
            b+=i;
        }
        int i=1;
        while(i<=n){
            a+=i;
            b-=i-1;
            if(a==b){
                return i;
            }
            i++;
        }

        return -1;
    }
};