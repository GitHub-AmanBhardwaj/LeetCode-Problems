class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n=nums.size();
        int a=0;
        int b=0;
        for(auto i=nums.begin();i!=nums.end();i++){
            
            for(auto j=nums.begin();j!=nums.end();j++){
                if(i!=j&&*i+*j==target){
                    vector<int>out({a,b});
                    return out;
                }
                b++;
            }
            a++;
            b=0;
        }
            vector<int>out;
            return out;
            
    }
};