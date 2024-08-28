class Solution {
public:
    bool isPalindrome(string s) {
        string a;
        for(char c:s){
            if(c<91&&c>64){
                a.push_back(c+32);
            }else if((c<123&&c>96)||(c<58&&c>47)){
                a.push_back(c);
            }
        }
        int i=0;
        int j=a.size()-1;
        while(i<a.size()){
            if(a[i]!=a[j]){
                return 0;
            }
            i++;
            j--;
        }
        return 1;
    }
};