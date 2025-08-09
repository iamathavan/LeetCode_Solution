//Valid paranthieses
//time:0ms
//size:7.8
bool isValid(char* s) {
    int len=strlen(s);
    if (len==0) return true;
    if (len%2!=0) return false;
    char* stack=(char*)malloc(len *sizeof(char));
    int top= -1;
    for(int i=0;i<len;i++){
        char c=s[i];
        if(c=='(' || c=='{' || c=='['){
            stack[++top]=c;
        }
        else if(c==')' || c=='}' || c==']'){
            if(top==-1){
                free(stack);
                return false;
            }
            char opening=stack[top--];
            if((c==')' && opening != '(') || (c=='}' && opening != '{') || (c==']' && opening != '[')){
                free(stack);
                return false;
            }
        }
    }
    bool result = (top==-1);
    free(stack);
    return result;
}
