class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> a(candies.size());
        for(int i=0;i<candies.size();i++){
            int t=candies[i]+extraCandies;
            int c=0;
            for(int j=0;j<candies.size();j++){
                if(t>=candies[j]){
                    c=1;
                }else{
                    c=0;
                    break;
                }
            }
            if(c){
                a[i]=1;
            }else{
                a[i]=0;
            }
        }
        return a;
    }
};