class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int c=0;
        vector<int>a{0,0};
        for(int i=0;i<mat.size();i++){
            c=0;
            for(int n:mat[i]){
                if(n==1){
                    c++;
                }
            }
            if(c>a[1]){
                a[1]=c;
                a[0]=i;
            }
        }
        return a; 
    }
};