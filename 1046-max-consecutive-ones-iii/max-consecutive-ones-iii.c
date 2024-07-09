int longestOnes(int* nums, int numsSize, int k) {
    int l = 0, cnt = 0;
    for(int i=0; i<numsSize; i++){
        if(!nums[i]) k--;
        if(k<0){
            if(!nums[l]) k++;
            l++;
        }
        printf("nums[%d]=%d l=%d\n", i, nums[i], l);
        cnt = i-l+1;
    }
    return cnt;
}