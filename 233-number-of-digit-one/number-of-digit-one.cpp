class Solution {
public:
    int countDigitOne(int n) {
        // int c=0;
        // for(int i=1;i<=n;i++){
        //     int t=i;
        //     while(t>0){
        //         if(t%10==1){
        //             c++;
        //         }
        //         t/=10;
        //     }
        // }
        // return c;
        int count = 0;
        for(long long i=1;i<=n;i*=10){
            long long divider=i*10;
            count+=(n/divider)*i+min(max(n%divider-i+1,0LL),i);
        }
        return count;
    
    }
};