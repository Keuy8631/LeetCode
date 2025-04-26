bool uniqueOccurrences(int* arr, int arrSize) {
    int hashtable[2001] = {0};
    int countTable[1001] = {0};
    for(int i=0; i<arrSize; i++){
        hashtable[arr[i]+1000]++;
    }
    for(int i=0; i<2001; i++){
        if(hashtable[i] && countTable[hashtable[i]]++)
            return false;
    }
    return true;
}