class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        map<int,int>m;
        for(int num:nums){
            m[num]++;
            if(m[num]>1){
                return num;
            }
        }
        return -1;
    }
};