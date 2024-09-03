class Solution {
public:
    int findLucky(vector<int>& arr) {
        map<int,int,greater<int>>s;
        for(int i:arr){
            s[i]=0;
        }
        for(auto it=s.begin();it!=s.end();it++){
            for(int i:arr){
                if(it->first==i){
                    it->second++;
                }
            }
        }

        for(auto it=s.begin();it!=s.end();it++){
            if(it->first==it->second){
                return it->first;
            }
        }
        
        return -1;
        
    }
};