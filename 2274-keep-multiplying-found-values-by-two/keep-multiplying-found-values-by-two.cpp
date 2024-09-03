class Solution {
public:
    int findFinalValue(vector<int>& nums, int o) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==o){
                o*=2;
                i=-1;
            }
        }
        return o;
    }
};