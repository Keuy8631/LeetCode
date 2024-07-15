/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decode(int* encoded, int encodedSize, int first, int* returnSize) {
    int *arr = (int*)malloc((encodedSize+1)*sizeof(int));
    arr[0] = first;
    for(int i=0; i<encodedSize; i++)
        arr[i+1] = arr[i]^encoded[i];
    *returnSize = encodedSize+1;
    return arr;
}