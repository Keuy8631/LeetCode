void swap(int *a, int *b){
    *a^=*b;
    *b^=*a;
    *a^=*b;
}

void moveZeroes(int* nums, int numsSize) {
    if(numsSize<=1) return;
    for(int i=0; i<numsSize-1; i++){
        int ptr = i+1;
        if(!nums[i]){
            while(ptr<numsSize){
                if(nums[ptr]){
                    swap(&nums[i], &nums[ptr]);
                    break;
                }
                else ptr++;
            }
        }
    }
}