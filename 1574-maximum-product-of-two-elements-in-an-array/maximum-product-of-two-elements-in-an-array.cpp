class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int m=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                int t=(nums[i]-1)*(nums[j]-1);
                if(t>m){
                    m=t;
                }
            }
        }
        return m;
    }
};