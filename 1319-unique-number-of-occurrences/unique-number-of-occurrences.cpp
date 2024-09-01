class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int>t(arr);
        sort(t.begin(),t.end());
        auto i =unique(t.begin(), t.end());
        t.erase(i, t.end());
        vector<int>o(t.size());
        for(int x: arr){
            for(int i=0;i<t.size();i++){
                if(x==t[i]){
                    o[i]++;
                }
            }
        }
        int c=o.size();
        sort(o.begin(),o.end());
        i =unique(o.begin(), o.end());
        o.erase(i, o.end());
        if(c==o.size()){
            return 1;
        }
        return 0;
    }
};