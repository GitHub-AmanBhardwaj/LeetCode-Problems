class Solution {
public:
    int differenceOfSum(vector<int>& nums) {
        int a=0;
        int b=0;
        for(int i:nums){
            a+=i;
            while(i>0){
                b+=i%10;
                i/=10;
            }
        }
        return a-b;
    }
};