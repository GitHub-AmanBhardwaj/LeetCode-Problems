class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string f;
        int i=0;
        int a=1;
        int b=1;
        while((a&&word1[i]!='\0')||(b&&word2[i]!='\0')){
            if(a&&word1[i]!='\0'){
           
                f+=word1[i];
            }
            if(b&&word2[i]!='\0'){
                f+=word2[i];
            }
            if(a&&word1[i]=='\0'){
                a=0;
             
            }
            if(b&&word2[i]=='\0'){
                b=0;
            }
            i++;
        }

        return f;
        
    }
};