/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int count(int n){
    int cnt = 0;
    while(n>0){
        cnt++;
        n &= n-1;
    }
    return cnt;
}

int* countBits(int n, int* returnSize) {
    int *ans = (int*)malloc((n+1)*sizeof(int));
    ans[0] = 0;
    for(int i=1; i<=n; i++) ans[i] = count(i);
    *returnSize = n+1;
    return ans;
}