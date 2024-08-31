class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double t=0;
        for(int j=0;j<k;j++){
                t+=nums[j];
            }
            double max=t;
        for(int i=0;i+k<nums.size();i++){
            t=t+nums[k+i]-nums[i];
            if(t>max){
                max=t;
            }
        }
        return max/k;     
    }
};