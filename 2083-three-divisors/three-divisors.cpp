class Solution {
public:
    bool isThree(int n) {
        int a=1;
        int c=1;
        while(a<=n/2){
            if(n%a==0){
                c++;
            }
            a++;
        }
        if(c==3){
            return 1;
        }
        return 0;
        
    }
};