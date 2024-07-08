int compress(char* chars, int charsSize) {
    int cnt = 1, size = 0, idx = 0;
    for(int i=0; i<charsSize; i++){
        if(i+1<charsSize && chars[i]==chars[i+1]) cnt++;
        else{
            chars[idx++] = chars[i];
            if(cnt>1){
                int cntStart = idx;
                while(cnt>0){
                    chars[idx++] = '0' + cnt%10;
                    cnt/=10;
                }
                for(int left=cntStart, right=idx-1; left<right; left++, right--){
                    char tmp = chars[left];
                    chars[left] = chars[right];
                    chars[right] = tmp;
                }
            }
            cnt = 1;
        }
    }
    return idx;
}