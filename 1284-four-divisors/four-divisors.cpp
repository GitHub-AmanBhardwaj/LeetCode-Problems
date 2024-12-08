class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        vector<int>factt;
        vector<int>fact;
        for(int i=0;i<nums.size();i++){
            for(int j=1;j*j<=nums[i];j++){
                if(nums[i]%j==0){
                    fact.push_back(j);
                    if(j!=nums[i]/j){
                        fact.push_back(nums[i]/j);
                    }
                }
            }
            if(fact.size()==4){
                factt.insert(factt.end(),fact.begin(),fact.end());
            }
            fact.clear();
        }
        return int(accumulate(factt.begin(),factt.end(),0));
    }  
};