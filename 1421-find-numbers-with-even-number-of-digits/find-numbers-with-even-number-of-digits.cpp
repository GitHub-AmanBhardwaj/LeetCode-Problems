class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int c=0;
        int d;
        for(int num:nums){
            d=0;
            while(num>0){
                num/=10;
                d++;
            }
            if(d%2==0){
                c++;
            }
        }
        return c;
    }
};