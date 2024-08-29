class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int j=0;
        while(j<=nums.size()){
            int c=1;
            for(int i:nums){
                if(i==j){
                    c=0;
                }
            }
            if(c){
                return j;
            }
            j++;
        }
        return j;
    }
};