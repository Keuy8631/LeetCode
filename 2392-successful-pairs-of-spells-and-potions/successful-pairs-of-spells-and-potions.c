/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int compare(const void *a, const void *b){
    return *(int*)a-*(int*)b;
}

int* successfulPairs(int* spells, int spellsSize, int* potions, int potionsSize, long long success, int* returnSize) {
    qsort(potions, potionsSize, sizeof(int), compare);
    *returnSize = spellsSize;
    int *ans = (int*)malloc(spellsSize*sizeof(int));
    for(int i=0; i<spellsSize; i++){
        int l = 0, r = potionsSize-1;
        while(l<=r){
            int mid = l+(r-l)/2;
            if((long long)spells[i]*potions[mid]>=success) r = mid-1;
            else l = mid+1;
        }
        ans[i] = potionsSize-l;
    }
    return ans;
}