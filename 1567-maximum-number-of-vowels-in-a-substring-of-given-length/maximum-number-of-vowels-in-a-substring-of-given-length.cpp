class Solution {
public:
    int maxVowels(string s, int k) {
        int max=0;
        for(int i=0;i<k;i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                max++;
            }
        }
        int t=max;
        for(int i=0;i+k<s.size();i++){
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                t--;
            }if(s[k+i]=='a'||s[k+i]=='e'||s[k+i]=='i'||s[k+i]=='o'||s[k+i]=='u'){
                t++;
            }
            if(t>max){
                max=t;
            }
        }
        return max;
    }
};