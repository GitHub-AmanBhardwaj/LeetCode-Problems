class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int>a;
        for(int i:nums){
            vector<int>s;
            while(i>0){
                s.push_back(i%10);
                i/=10;
            }
            while(!s.empty()){
                a.push_back(s.back());
                s.pop_back();
            }
        }
        return a;
    }
};