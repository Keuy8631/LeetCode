bool isSubsequence(char* s, char* t) {
    int ptr = 0;
    if(strlen(s)>strlen(t)) return false;
    for(int i=0; i<strlen(t); i++)
        if(s[ptr]==t[i]) ptr++;
    return ptr==strlen(s);
}