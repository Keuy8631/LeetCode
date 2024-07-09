bool isVowel(char s){
    return (s=='a' || s=='e' || s=='i' || s=='o' || s=='u');
}

int maxVowels(char* s, int k) {
    int max = 0, cnt = 0, len = strlen(s);
    for(int i=0; i<k; i++){
        if(isVowel(s[i])) cnt++;
    }
    max = cnt;
    for(int i=k; i<len; i++){
        if(isVowel(s[i])) cnt++;
        if(isVowel(s[i-k])) cnt--;
        if(cnt>max) max = cnt;
    }
    return max;
}