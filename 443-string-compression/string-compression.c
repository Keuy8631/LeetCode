int compress(char* chars, int charsSize) {
    int cnt = 1, size = 0, idx = 0;
    for(int i=0; i<charsSize; i++){
        if(i+1<charsSize && chars[i]==chars[i+1]) cnt++;
        else{
            chars[idx++] = chars[i];
            if(cnt>1){
                int len = snprintf(NULL, 0, "%d", cnt);
                char* cntStr = (char*)malloc((len + 1) * sizeof(char));
                snprintf(cntStr, len + 1, "%d", cnt);
                for (int j = 0; j < len; j++)
                    chars[idx++] = cntStr[j];
                free(cntStr);
            }
            cnt = 1;
        }
    }
    return idx;
}