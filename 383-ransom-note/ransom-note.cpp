class Solution {
public:
    bool canConstruct(string r, string m) {
        sort(r.begin(),r.end());
        sort(m.begin(),m.end());
        int i=0;
        while(i<m.size()&&r[0]!=m[i]){
            i++;
        }
        if(i==m.size()){
            return 0;
        }

        for(int j=0;j<r.size();){
            while(i<m.size()&&r[j]!=m[i]){
                i++;
            }if(i<m.size()&&r[j]==m[i]){
                j++;
                i++;
            }
            if(j!=r.size()&&i==m.size()){
                return false;
            }
            if(j==r.size()){
                break;
            }
        }
        return true;
    }
};