/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* asteroidCollision(int* asteroids, int asteroidsSize, int* returnSize) {
    int *ans = (int*)malloc(asteroidsSize*sizeof(int));
    int tmp = 0;
    for(int i=0; i<asteroidsSize; i++){
        int curr = asteroids[i];
        int flag = 1;
        while(tmp>0 && ans[tmp-1]>0 && curr<0){
            if(ans[tmp-1]<-curr){
                tmp--;
                continue;
            }
            else if(ans[tmp-1]==-curr) tmp--;
            flag = 0;
            break;
        }
        if(flag) ans[tmp++] = curr;
    }
    *returnSize = tmp;
    return ans;
}