class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int>v(min(nums1.size(),nums2.size()));
        auto it = set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end(), v.begin());
        for(auto i=v.end()-1;i!=it-1;i--){
            v.pop_back();
        }
        v.erase(unique(v.begin(),v.end()),v.end());
        return v;
    }
};