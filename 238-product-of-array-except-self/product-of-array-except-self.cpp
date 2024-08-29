class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>a(nums.size(),0);
        int t=1;
        int te=1;
        int c=0;
        for(int i:nums){
            if(i==0){
                c++;
            }if(c>1){
                t=0;
                break;
            }
            t*=i;
            if(i!=0)
            te*=i;

        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]!=0)
            a[i]=t/nums[i];
            else if(nums[i]==0&&c==1){
                a[i]=te;
            }
            else if(nums[i]==0&&c>1){
                a[i]=0;
            }else{
                a[i]=te;
            }
            
        }
        return a;
    }
};