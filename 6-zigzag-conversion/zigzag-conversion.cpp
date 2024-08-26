class Solution {
public:
    string convert(string s, int n) {
        if(n<=1)return s;
        vector<string>a(n);
        int i=0;
        bool b=1;
        for(char c:s){
            a[i].push_back(c);
            if(b){
                i++;
                if(i==n-1){
                    b=0;
                }
            }else {
                i--;
                if(i==0){
                    b=1;
                }
            }
        }
        string ans;
        for(string st:a){
            ans+=st;

        }
        return ans;
    }
};