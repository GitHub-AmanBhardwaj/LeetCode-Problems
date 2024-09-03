class Solution {
public:
    int maxAscendingSum(vector<int>& s) {
        int c=0;
        int m=0;
        int si=s.size();
        if(si==1){
            return s[0]; 
        }
        for(int i=0;i+1<si;i++){
            c=0;
            while(i+1<si&&s[i]<s[i+1]){
                c+=s[i];
                i++;
            }c+=s[i];
            if(m<c){
                m=c;
            }
        }
        return m;
        
    }
};