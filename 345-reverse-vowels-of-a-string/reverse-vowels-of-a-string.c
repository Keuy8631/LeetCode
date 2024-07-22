int isVowel(char letter){
    return letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u' ||
           letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U';
}

char* reverseVowels(char* s) {
    int l=0, r=strlen(s)-1;
    while(l<r){
        while(l<r && !isVowel(s[l])) l++;
        while(l<r && !isVowel(s[r])) r--;
        if(isVowel(s[l])&&isVowel(s[r])){
            char tmp = s[l];
            s[l] = s[r];
            s[r] = tmp;
            l++;
            r--;
        }
    }
    return s;
}