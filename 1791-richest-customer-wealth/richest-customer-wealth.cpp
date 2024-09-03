class Solution {
public:
    int maximumWealth(vector<vector<int>>& a) {
        int max=0;
        for(int i=0;i<a.size();i++){
            int t=0;
            for(int j=0;j<a[0].size();j++){
                t+=a[i][j];
            }
            if(t>max){
                max=t;
            }
        }
    return max;
    }
};