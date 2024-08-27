class Solution {
public:
    int myAtoi(string s) {
        int i=0;
        while(i<s.size()&&s[i]==' '){
            i++;
        }
        if(i==s.size())return 0;
        bool neg=0;
        if(s[i]=='-'){
            i++;
            neg=1;
        }else if(s[i]=='+'){
            i++;
        }
        string a;
        while(i<s.size()&&s[i]>47&&s[i]<58){
            a.push_back(s[i]);
            i++;
        }
        int ans=0;
        if(a.empty()) return 0;
        try{
            int ans=stoi(a);
            return neg?-ans:ans;
        }catch(...){
            return neg ?-2147483648:2147483647;
        }
        return 0;
    }
};