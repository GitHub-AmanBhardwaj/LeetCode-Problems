class Solution {
public:
    int heightChecker(vector<int>& h) {
        vector<int>o(h);
        sort(h.begin(),h.end());
        int c=0;
        for(int i=0;i<h.size();i++){
            if(h[i]!=o[i]){
                c++;
            }
        }
        return c;
    }
};