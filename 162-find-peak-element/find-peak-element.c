int findPeakElement(int* nums, int numsSize) {
    if(numsSize==1) return 0;
    int l = 0, r = numsSize-1;
    while(l<r){
        int mid = l+(r-l)/2;
        if(nums[mid]>nums[mid+1]) r = mid;
        else l = mid+1;
    }
    return l;
}