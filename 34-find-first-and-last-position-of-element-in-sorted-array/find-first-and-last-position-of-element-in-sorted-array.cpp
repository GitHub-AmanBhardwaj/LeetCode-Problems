class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int>a(2,-1);
        for(int i=0;i<nums.size();i++){
            if(nums[i]==target&&a[0]==-1){
                a[0]=i;
            }else if(nums[i]==target){
                a[1]=i;
            }
        }
        if(a[1]==-1&&a[0]!=-1){
            a[1]=a[0];
        }
        return a;
    }
};