class Solution {
public:
    int singleNumber(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[0];
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==a){
                c++;
            }else{
                if(c==1){
                    return a;
                }
                a=nums[i];
                c=1;
            }
        }
        if(c==1)
        return a;

        return -1;
    }
};