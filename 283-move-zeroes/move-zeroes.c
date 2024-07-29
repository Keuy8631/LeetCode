void moveZeroes(int* nums, int numsSize) {
    int ptr=0;
    for(int i=0; i<numsSize; i++){
        if(nums[i]) nums[ptr++] = nums[i];
    }
    while(ptr<numsSize) nums[ptr++] = 0;
}