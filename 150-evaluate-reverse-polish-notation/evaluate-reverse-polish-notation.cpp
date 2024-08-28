class Solution {
public:
    int evalRPN(vector<string>& t) {
        stack<int>s;
        int a,b;
        for(string c:t){
            if(c=="+"||c=="-"||c=="*"||c=="/"){
                a=s.top();
                s.pop();
                b=s.top();
                s.pop();
            }
            if(c=="+"){
                s.push(b+a);
            }else if(c=="-"){
                s.push(b-a);
            }else if(c=="*"){
                s.push(b*a);
            }else if(c=="/"){
                s.push(b/a);
            }else{
                s.push(stoi(c));
            }
        }
        return s.top();
    }
};