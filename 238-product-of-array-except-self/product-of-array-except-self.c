/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *ans = (int*)malloc(numsSize*sizeof(int));
    int *left = (int*)malloc(numsSize*sizeof(int));
    int *right = (int*)malloc(numsSize*sizeof(int));
    int n = numsSize;
    left[0] = 1;
    for(int i=1; i<n; i++) left[i] = left[i-1]*nums[i-1];
    right[n-1] = 1;
    for(int i=n-2; i>=0; i--) right[i] = right[i+1]*nums[i+1];
    for(int i=0; i<n; i++) ans[i] = left[i]*right[i];
    *returnSize = n;

    return ans;
}