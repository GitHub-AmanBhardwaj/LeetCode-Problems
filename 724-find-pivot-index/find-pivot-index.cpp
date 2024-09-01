class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int al[nums.size()];
        int ar[nums.size()];
        for(int i=0;i<nums.size();i++){
            int tl=0;
            for(int j=0;j<i;j++){
                tl+=nums[j];   
            }if(i==0){
                al[i]=0;
            }else{
                al[i]=tl;
            }
            
            int tr=0;
            for(int j=nums.size()-1;j>i;j--){
                tr+=nums[j];   
            }
            if(i==nums.size()-1){
                ar[i]=0;
            }else{
                ar[i]=tr;
            }
            if(ar[i]==al[i]){
                return i;
            }
        }

    return -1;
    }
};