class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        bool b=0;
        int c=0;
        int m=0;
        for(int j=0;j<nums.size();j++){
            c=0;
            b=0;
            for(int i=j;i<nums.size();i++){
                if(nums[i]==0){
                    if(b){
                        break;
                    }else{
                        b=1;
                    }
                }
                c++;
            }
            if(c>m){
                m=c;
            }
        }
        return m-1;
    }
};