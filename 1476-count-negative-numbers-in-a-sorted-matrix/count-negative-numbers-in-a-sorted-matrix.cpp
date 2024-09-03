class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int c=0;
        for(vector<int>a:grid){
            for(int o:a){
                if(o<0){
                    c++;
                }
            }
        }
        return c;
    }
};