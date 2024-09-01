class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
        if(nums.size()<=1){
            return nums;
        }
        vector<int>a;
        for(int i:nums){
            if(i%2==0){
                a.push_back(i);
            }
        }
        for(int i:nums){
            if(i%2!=0){
                a.push_back(i);
            }
        }
        return a;
    }
};