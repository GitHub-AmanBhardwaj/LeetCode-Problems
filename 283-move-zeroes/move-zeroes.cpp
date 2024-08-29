class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        auto it=nums.begin();
        int c=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0){
                nums.erase(it+i);
                i--;
                c++;
            }
        }
        while(c){
            nums.push_back(0);
            c--;
        }   
    }
};