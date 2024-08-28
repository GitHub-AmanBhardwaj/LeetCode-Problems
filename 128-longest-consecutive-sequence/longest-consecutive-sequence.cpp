class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0){
            return 0;
        }
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());

        int m=0;
        int a=0;
        for(int i=1;i<nums.size();i++){
            a=0;
            while(i<nums.size()&&nums[i-1]+1==nums[i]){
                a++;
                i++;
            }
            if(a>m){
                m=a;
            }
        }
        return m+1;
    }
};