/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int findmax(int *arr, int n){
    int max = -1;
    for(int i=0; i<n; i++) if(max<arr[i]) max = arr[i];
    return max;
}

bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    bool *ans = (bool*)malloc(candiesSize*sizeof(bool));
    int max = findmax(candies, candiesSize);
    for(int i=0; i<candiesSize; i++){
        if(candies[i]+extraCandies>=max) ans[i] = true;
        else ans[i] = false;
    }
    *returnSize = candiesSize;
    return ans;
}