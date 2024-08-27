class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int ns=nums.size();
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int c=1;
        for(int i:nums){
            if(i>0){
                if(i!=c){
                    return c;
                }else if(i==c){
                    c++;
                }
            }
        }
        if(c<=ns){
            return c;
        }
        return ns+1;
        
    }
};