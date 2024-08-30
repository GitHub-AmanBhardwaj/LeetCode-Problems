class Solution {
public:
    string reverseVowels(string s) {
        int i=0;
        int c=0;
        int c1=0;
        int j=s.size()-1;
        while(i<j){
            do{
                if(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'||s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'){
                c=1;
                
                break;
                
            
            }i++;

            }while(i<j);
            do{
                if(s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U'||s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'){
               c1=1;
               
               break;
               
            }j--;
            }while(i<j);
 
            
            


            
         if(c&&c1){
            char t=s[i];
            s[i]=s[j];
            s[j]=t;
            
        }
        i++;
        j--;
        
        c=0;
        c1=0;
    }return s;
    }
    
};