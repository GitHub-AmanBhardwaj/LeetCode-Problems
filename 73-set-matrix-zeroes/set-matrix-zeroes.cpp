class Solution {
public:
    void setZeroes(vector<vector<int>>& m) {
        vector<int>r;
        vector<int>c;
        for(int i=0;i<m.size();i++){
            for(int j=0;j<m[0].size();j++){
                if(m[i][j]==0){
                    r.push_back(i);
                    c.push_back(j);
                }
            }
        }
        for(int i : r){
            for(int j=0;j<m[0].size();j++){
                m[i][j]=0;
            }
        }
        for(int j:c){
            for(int i=0;i<m.size();i++){
                m[i][j]=0;
            }
        }

    }
};