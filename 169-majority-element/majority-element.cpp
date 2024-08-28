class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int f=1;
        int m=1;
        int j=0;
        if(nums.size()==1){
            return nums[0];
        }
        sort(nums.begin(),nums.end());
        for(int i=0;i+1<nums.size();i++){
            if(nums[i]==nums[i+1]){
                f++;
            }else{
                f=1;
            }
            if(f>m){
                m=f;
                j=nums[i];
            }
        }
        return j;
    }
};