class Solution {
public:
    int alternateDigitSum(int n) {
        vector<int>a;
        while(n>0){
            a.push_back(n%10);
            n/=10;
        }
        int ans=0;
        bool f=1;
        for(int i=a.size()-1;i>=0;i--){
            if(f){
                ans+=a[i];
                f=0;
            }else{
                ans-=a[i];
                f=1;
            }
        }
        return ans;
    }
};