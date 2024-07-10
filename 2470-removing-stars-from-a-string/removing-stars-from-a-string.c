char* removeStars(char* s) {
    int len = strlen(s);
    char *ans = (char*)malloc((len+1)*sizeof(char));
    int tmp = 0;
    for(int i=0; i<len; i++){
        if(s[i]=='*') tmp--;
        else ans[tmp++] = s[i];
    }
    ans[tmp] = '\0';
    return ans;
}