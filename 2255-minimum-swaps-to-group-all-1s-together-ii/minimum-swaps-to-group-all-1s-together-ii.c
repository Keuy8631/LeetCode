#define max(a,b) ((a)>(b)?(a):(b))
int minSwaps(int* nums, int numsSize) {
    int one = 0, n = numsSize;
    for(int i=0; i<n; i++) if(nums[i]) one++;
    if(one<=1) return 0;
    int cnt = 0;
    // find max nums of 1's group
    for(int i=0; i<one; i++) if(nums[i]) cnt++;
    int max = cnt;
    for(int i=1; i<n; i++){
        int end = (i+one-1)%n;
        if(nums[i-1]) cnt--;
        if(nums[end]) cnt++;
        max = max(max, cnt);
    }
    return one-max;
}