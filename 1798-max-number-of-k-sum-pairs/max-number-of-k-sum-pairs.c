int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int maxOperations(int* nums, int numsSize, int k){
    qsort(nums, numsSize, sizeof(int), compare);
    for(int i=0; i<numsSize; i++) printf("%d ", nums[i]);
    printf("\n");
    int l = 0, r = numsSize-1, cnt = 0;
    while(l<r){
        printf("nums[%d]=%d nums[%d]=%d\n", l, nums[l], r, nums[r]);
        if(nums[l]+nums[r]==k){
            l++;
            r--;
            cnt++;
        }
        else if(nums[l]+nums[r]<k) l++;
        else if(nums[l]+nums[r]>k) r--;
    }

    return cnt;
}