class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        vector<int>ans(nums.size(),0);
        int i=0;
        int j=1;
        for(int a:nums){
            if(i<nums.size()&&a%2==0){
                ans[i]=a;
                i+=2;
            }else{
                ans[j]=a;
                j+=2;
            }
        }
        return ans;
    }
};