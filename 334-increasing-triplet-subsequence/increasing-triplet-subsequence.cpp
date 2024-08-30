class Solution {
public:
    bool increasingTriplet(vector<int>& nums) {
        if(nums.size()<3){
            return false;
        }
        int f=2147483647,s=2147483647;
        for(int i:nums){
            if(i<=f){
                f=i;
            }else if(i<=s){
                s=i;
            }else{
                return true;
            }
        }
        return false;
    }
};