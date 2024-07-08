/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize*sizeof(int));
    int n = numsSize;
    ans[0] = 1;
    for(int i=1; i<n; i++) ans[i] = ans[i-1]*nums[i-1];
    int right = 1;
    for(int i=n-1; i>=0; i--){
        ans[i] *= right;
        right *= nums[i];
    } 

    *returnSize = n;

    return ans;
}