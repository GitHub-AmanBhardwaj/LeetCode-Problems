class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>a(nums1.size(),-1); 
        int h=0;
        for(int n:nums1){
            bool f=0;
            for(int i=0;i<nums2.size();i++){
                if(n==nums2[i]){
                    f=0;
                    for(int j=i+1;j<nums2.size();j++){
                        if(nums2[j]>n){
                            a[h]=nums2[j];
                            f=1;
                            break;
                        }
                    }
                    break;
                }
            }h++;
        }
        return a;
    }
};