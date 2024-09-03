class Solution {
public:
    int passThePillow(int n, int t) {
        int a=1;
        bool c=0;
        while(t>0){
            if(a==n){
                c=1;
            }else if (a==1){
                c=0;
            }
            if(c){
                a--;
            }else{
                a++;
            }
            t--;
        }
        return a;
    }
};