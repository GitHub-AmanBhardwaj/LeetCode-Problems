class Solution {
public:
    int minStartValue(vector<int>& nums) {
        int t=1;
        int n=t;
        for(int i=0;i<nums.size();i++){
            n+=nums[i];
            if(n<1){
                t++;
                n=t;
                i=-1;
            }
        }
        return t;
    }
};