class Solution {
public:
    int maxProfit(vector<int>& p) {
        int mp=0;
        int min=9999;
        for(int i=0;i<p.size();i++){
            int a=p[i];
            if(a<min){
                min=a;
            }else if(mp<a-min){
                mp=a-min;
            }
        }
        return mp;
    }
};