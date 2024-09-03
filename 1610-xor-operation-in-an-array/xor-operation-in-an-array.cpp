class Solution {
public:
    int xorOperation(int n, int start) {
        int a=0;
        int nums[n];
        for(int i=0;i<n;i++){
            nums[i]=start+2*i;
            if(i==0)
            a=nums[i];
            if(i>0)
            a^=nums[i];
            
        }
        return a;
    }
};