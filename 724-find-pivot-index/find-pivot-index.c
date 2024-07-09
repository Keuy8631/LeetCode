int pivotIndex(int* nums, int numsSize) {
    int *prev = (int*)calloc(numsSize, sizeof(int));
    int *sub = (int*)calloc(numsSize, sizeof(int));
    prev[0] = nums[0];
    for(int i=1; i<numsSize; i++) prev[i] = prev[i-1] + nums[i];
    sub[numsSize-1] = nums[numsSize-1];
    for(int i=numsSize-2; i>=0; i--) sub[i] = sub[i+1] + nums[i];

    for(int i=0; i<numsSize; i++){ 
        if(prev[i]==sub[i]){
            free(prev);
            free(sub);
            return i;
        }
    }
    free(prev);
    free(sub);
    return -1;
}