class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int m=0;
        int t=0;
        int a=0;
        for(int i=1;i<nums.size();i++){
            t=0;
            t++;
            if(nums[i-1]==nums[i]){
                t++;
            }
            if(m<t){
                a=nums[i];
                m=t;
            }
        }
        return a;
    }
};