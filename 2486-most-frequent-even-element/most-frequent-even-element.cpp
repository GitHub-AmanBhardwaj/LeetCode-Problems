class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        map<int,int>m;
        for(int i:nums){
            if(i%2==0){
                m[i]=0;
            }
        }
        for(auto it=m.begin();it!=m.end();it++){
            for(int i:nums){
                if(it->first==i){
                    it->second++;
                }
            }
        }
        int ma=0;
        int a=-1;
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second>ma){
                ma=it->second;
                a=it->first;
            }
        }
        return a;
    }
};