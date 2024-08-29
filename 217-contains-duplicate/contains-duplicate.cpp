class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int s=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        if(s==nums.size()){
            return 0;
        }
        return 1;
    }
};