class Solution {
public:
    int largestAltitude(vector<int>& gain) {
        int max=0;
        int p=0;
        for(int i=0;i<gain.size();i++){
            p=gain[i]+p;
            if(max<p){
                max=p;
            }
        }
        return max;
    }
};