class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int a=nums[nums.size()-1];
        int b=nums[0];
        if(a%b==0){
            return b;
        }else{
            int i=b-1;
            while(i>1){
                if(a%i==0&&b%i==0){
                    return i;
                }i--;
            }
        }
        return 1;
    }
};