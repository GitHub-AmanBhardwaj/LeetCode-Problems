class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a;
        vector<int>v(nums1.size()+nums2.size());
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        auto it=set_intersection(nums1.begin(),nums1.end(),nums2.begin(),nums2.end() ,v.begin());
        for(auto i=v.begin();i!=it;i++){
            a.push_back(*i);
        }
        return a;
    }
};