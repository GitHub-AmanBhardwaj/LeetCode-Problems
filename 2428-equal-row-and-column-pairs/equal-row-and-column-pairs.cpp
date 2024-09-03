class Solution {
public:
    int equalPairs(vector<vector<int>>& grid) {
        vector<int>a;
        int c=0;
        for(int j=0;j<grid.size();j++){
            a.clear();
            for(int i=0;i<grid.size();i++){
                a.push_back(grid[i][j]);
            }
            for(int k=0;k<grid.size();k++){
                if(grid[k]==a){
                c++;
                }
            }
        }
            
        return c;
    }
};