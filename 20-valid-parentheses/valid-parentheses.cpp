class Solution {
public:
    bool isValid(string s) {
    struct node{
        char data;
        node*next;
    }*tos=NULL;
    int check=1;
    int i=0;
    while(s[i]!='\0'){
        if(s[i]=='['||s[i]=='{'||s[i]=='('){
            node*p=new node;
            p->next=tos;
            tos=p;
            tos->data=s[i];
         }else if(s[i]==')'&&tos==NULL){
            return 0;
            check=0;   
         }else if(s[i]=='}'&&tos==NULL){
            return 0;
            check=0;
         }else if(s[i]==']'&&tos==NULL){
            return 0;
            check=0;
         }else if(s[i]==')'){
            if(tos->data=='('){
                tos=tos->next;
            }else{
                return 0;
            }
            
         }else if(s[i]=='}'){
            if(tos->data=='{'){
                tos=tos->next;
            }else{
                return 0;
            }
         }else if(s[i]==']'){
            if(tos->data=='['){
                tos=tos->next;
            }else{
                return 0;
            }
         }        i++;
    }
    if(tos==NULL&&check!=0){
        return 1;
    }else{
        return 0;
    }
    return 0;
    }
};