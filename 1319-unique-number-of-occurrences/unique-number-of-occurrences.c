bool uniqueOccurrences(int* arr, int arrSize) {
    int hashtable[2001] = {0};
    int countTable[1001] = {0};
    for(int i=0; i<arrSize; i++){
        hashtable[arr[i]+1000]++;
    }
    for (int i=0; i<2001; i++) {
        int f = hashtable[i];
        if(f){
            if(countTable[f]) return false;
            countTable[f] = 1;
        }
    }
    return true;
}