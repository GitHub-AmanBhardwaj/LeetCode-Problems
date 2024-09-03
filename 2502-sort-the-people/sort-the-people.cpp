class Solution {
public:
    vector<string> sortPeople(vector<string>& n, vector<int>& h) {
        map<int,string>m;
        for(int i=0;i<n.size();i++){
            m[h[i]]=n[i];
        }
        auto it=m.end();
        it--;
        for(int i=0;i<n.size();i++){
            n[i]=it->second;
            it--;
        }
        return n;
        
    }
};