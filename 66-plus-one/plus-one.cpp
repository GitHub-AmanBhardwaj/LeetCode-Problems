class Solution {
public:
    vector<int> plusOne(vector<int>& d) {
        vector<int>a;
        int c=1;
        int t;
        for(int i=d.size()-1;i>=0;i--){
            t=d[i]+c;
            a.push_back(t%10);
            c=t/10;
        }
        if(c!=0){
            a.push_back(c);
        }
        reverse(a.begin(),a.end());
        return a;
    }
};