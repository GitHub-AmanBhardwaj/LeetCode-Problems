class Solution {
public:
    int findJudge(int n, vector<vector<int>>& t) {
        if(n==1)return 1;
        map<int,int>m;
        for(int i=1;i<=n;i++){
            m[i]=0;
        }
        for(int j=0;j<t.size();j++){
            m[t[j][0]]--;
            m[t[j][1]]++;
        }
        for(auto it=m.begin();it!=m.end();it++){
            if(it->second==n-1){
                return it->first;
            }
        }

        return -1;
    }
};