class Solution {
public:
    int strStr(string h, string n) {

        for(int i=0;i<h.size();i++){
            int j=0;
            int c=0;
            int k=i;
            while(i<h.size()&&j<n.size()&&h[i]==n[j]){
                c++;
                j++;
                i++;
            }
            i=k;
            if(c==n.size()){
                return i;
            }
        }
        return -1;
    }
};