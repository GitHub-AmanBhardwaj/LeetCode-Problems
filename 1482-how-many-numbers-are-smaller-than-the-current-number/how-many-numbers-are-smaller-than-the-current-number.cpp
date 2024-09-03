class Solution {
public:
    vector<int> smallerNumbersThanCurrent(vector<int>& nums) {
        vector<int>a(nums);
        sort(nums.begin(),nums.end());
        vector<int>ans;
        for(int i:a){
            for(int j=0;j<nums.size();j++){
                if(i==nums[j]){
                    ans.push_back(j);
                    break;
                }
            }
        }
        return ans;
    }
};