class Solution {
public:
    int maxScore(string nums) {
        int m=0;
        for(int i=0;i<nums.size()-1;i++){
            int a=0;
            for(int j=0;j<=i;j++){
                if(nums[j]=='0'){
                    a++;
                }
            }
            for(int k=i+1;k<nums.size();k++){
                if(nums[k]=='1'){
                    a++;
                }
            }
            if(m<a){
                m=a;
            }
        }
        return m;
    }
};