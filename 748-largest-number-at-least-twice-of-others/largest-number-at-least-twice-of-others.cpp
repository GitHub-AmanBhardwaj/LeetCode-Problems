class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int max=0;
        int mi=0;
        for(int i=0;i<nums.size();i++){
            if(max<nums[i]){
                max=nums[i];
                mi=i;
            }
        }
        sort(nums.begin(),nums.end());
        if((nums[nums.size()-2])*2<=nums[nums.size()-1]){
            return mi;
        }
        return -1;
    }
};