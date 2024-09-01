class Solution {
public:
    string reverseOnlyLetters(string s) {
        stack<int>st;
        for(char c:s){
            if((c>64&&c<91)||(c>96&&c<123)){
                st.push(c);
            }
        }
        for(int i=0;i<s.size();i++){
            if((s[i]>64&&s[i]<91)||(s[i]>96&&s[i]<123)){
                s[i]=st.top();
                st.pop();
            }
        }
        return s;
    }
};