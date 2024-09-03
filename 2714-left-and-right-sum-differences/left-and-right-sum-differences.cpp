class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>a(nums.size());
        int in=0;
        for(int i=0;i<a.size();i++){
            for(int j=i+1;j<a.size();j++){
                a[i]+=nums[j];
            }
        }
        for(int i=0;i<a.size();i++){
            int t=0;
            for(int j=i-1;j>=0;j--){
                t+=nums[j];
            }a[i]=abs(a[i]-t);
        }

        return a;
    }
};