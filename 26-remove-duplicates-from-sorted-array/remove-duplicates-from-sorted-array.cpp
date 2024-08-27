class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        vector<int>a(nums);
        sort(nums.begin(),nums.end());
        a.erase(unique(a.begin(),a.end()),a.end());
        for(int i=0;i<a.size();i++){
            nums[i]=a[i];
        }
        return a.size();
    }
};