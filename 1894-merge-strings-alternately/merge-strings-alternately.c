char * mergeAlternately(char * word1, char * word2){
    int n1 = strlen(word1), n2 = strlen(word2);
    char *ans = (char*)malloc((n1+n2+1)*sizeof(char));
    char *res = ans;
    while(*word1 && *word2){
        *ans++ = *word1++;
        *ans++ = *word2++;
    }
    while(*word1) *ans++ = *word1++;
    while(*word2) *ans++ = *word2++;
    *ans = '\0';
    return res;
}