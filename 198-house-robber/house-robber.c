int max(int a, int b){
    if(a>b) return a;
    return b;
}

int rob(int* nums, int numsSize) {
    if(!numsSize) return 0;
    if(numsSize==1) return nums[0];
    int dp[numsSize];
    dp[0] = nums[0], dp[1] = max(nums[0], nums[1]);
    for(int i=2; i<numsSize; i++)
        dp[i] = max(dp[i-1], nums[i]+dp[i-2]);

    return dp[numsSize-1];
}