char* reverseWords(char* s) {
    int len = strlen(s), cnt = 0;
    char *ans = (char*)malloc((len+1)*sizeof(char));

    for(int i=len-1; i>=0; i--){
        while(i>=0 && s[i]==' ') i--;
        int end = i;
        while(i>=0 && s[i]!=' ') i--;
        int start = i+1;
        for(int j=start; j<=end; j++)
            ans[cnt++] = s[j];
        if(cnt<len && end>=start) ans[cnt++] = ' ';
    }
    if(cnt>0 && ans[cnt-1] == ' ') ans[cnt-1] = '\0';
    else ans[cnt] = '\0';

    return ans;
}