class Solution {
public:
    int minEatingSpeed(vector<int>& a, int h) {
        int hi=*max_element (a.begin(),a.end());
        int l=1;
        int k;
        while(l<hi){
            k=l+(hi-l)/2;
            long long int x=0;
            for(int i=0;i<a.size();i++){
                double d=((double)a[i])/((double)k);
                x+=ceil(d);
            }
            if(x<=h){
                hi=k;
            }else{
                l=k+1;
            }
        }
    return l;
    }
};