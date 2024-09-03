class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<vector<int>> a(2);
        sort(nums1.begin(), nums1.end()); 
        sort(nums2.begin(), nums2.end());
        auto i=unique(nums1.begin(), nums1.end());
        nums1.erase(i, nums1.end());
        i=unique(nums2.begin(), nums2.end());
        nums2.erase(i, nums2.end());
        set_difference(nums1.begin(), nums1.end(), nums2.begin(),nums2.end(), back_inserter(a[0]));
        set_difference(nums2.begin(), nums2.end(), nums1.begin(),nums1.end(), back_inserter(a[1]));

        return a;        
    }
};