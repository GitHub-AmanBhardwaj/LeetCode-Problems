class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int a=nums[0];
        for(int i=0;i+1<nums.size();i++){
            nums[i]=a;
            a+=nums[i+1];
        }
        nums[nums.size()-1]=a;
        return nums;
        
    }
};