int largestAltitude(int* gain, int gainSize) {
    int *ans = (int*)malloc(gainSize*sizeof(int));
    int max = 0, curr = 0;
    for(int i=0; i<gainSize; i++){
        curr += gain[i];
        if(max<curr) max = curr;
    }

    return max;
}