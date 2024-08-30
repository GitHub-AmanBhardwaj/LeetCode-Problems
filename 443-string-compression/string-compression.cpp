class Solution {
public:
    int compress(vector<char>& chars) {
        vector<char>a(chars);
        chars.clear();
        int c=1;
        chars.push_back(a[0]);
        for(int i=1;i<a.size();i++){
            c=1;
            while(i<a.size()&&a[i-1]==a[i]){
                c++;
                i++;
            }if(i<a.size()&&a[i-1]!=a[i]){
                if(c>1&&c<10)
                chars.push_back(c+48);
                if(c>=10){
                    string s=to_string(c);
                    for(char co:s){
                        chars.push_back(co);
                    }
                }
                chars.push_back(a[i]);
            }if(i==a.size()){
                if(c>1&&c<10)
                chars.push_back(c+48);
                if(c>=10){
                    string s=to_string(c);
                    for(char co:s){
                        chars.push_back(co);
                    }
                }
            }
        }
        return chars.size();
    }
};