int gcd(int a, int b){
    if(!b) return a;
    return gcd(b, a%b);
}

char* gcdOfStrings(char* str1, char* str2) {
    int len1 = strlen(str1), len2 = strlen(str2);
    int len = len1+len2+1;
    char *concat1 = (char*)malloc(len*sizeof(char));
    char *concat2 = (char*)malloc(len*sizeof(char));

    strcpy(concat1, str1);
    strcat(concat1, str2);
    strcpy(concat2, str2);
    strcat(concat2, str1);

    if(strcmp(concat1, concat2)){
        free(concat1);
        free(concat2);
        return "";
    }

    free(concat1);
    free(concat2);

    int length = gcd(len1, len2);
    char *ans = (char*)malloc((length+1)*sizeof(char));
    strncpy(ans, str1, length);
    ans[length] = '\0';

    return ans;
}