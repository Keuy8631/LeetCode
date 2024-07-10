int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

bool closeStrings(char* word1, char* word2) {
    int n1 = strlen(word1), n2 = strlen(word2);
    if(n1!=n2) return false;
    int *t1 = (int*)calloc(26, sizeof(int));
    int *t2 = (int*)calloc(26, sizeof(int));
    for(int i=0; i<n1; i++) t1[word1[i]-'a']++;
    for(int i=0; i<n2; i++) t2[word2[i]-'a']++;
    for(int i=0; i<26; i++){
        if((t1[i]&&!t2[i])||(!t1[i]&&t2[i])) return false;
    }
    qsort(t1, 26, sizeof(int), compare);
    qsort(t2, 26, sizeof(int), compare);
    for(int i=0; i<26; i++){
        if(t1[i]!=t2[i]) return false;
    }

    return true;
}