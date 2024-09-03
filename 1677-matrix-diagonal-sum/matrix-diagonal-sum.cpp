class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int dia=0;
        if(mat.size()==1){
            return mat[0][0];
        }
        for(int i=0;i<mat.size();i++){
            dia+=(mat[i][i]);
            int j=mat.size()-1-i;
            if(i!=j){
                dia+=mat[i][j];
            } 
        }

        return dia;
    }
};