int longestSubarray(int* nums, int numsSize) {
    int prev = 0, cnt = 0, ans = 0;
    for(int i=0; i<numsSize; i++){
        if(!nums[i]) cnt++;
        if(cnt>1){
            if(!nums[prev]) cnt--;
            prev++;
        }
        ans = i-prev;
    }
    return ans;
}