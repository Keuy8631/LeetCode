/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int** findDifference(int* nums1, int nums1Size, int* nums2, int nums2Size, int* returnSize, int** returnColumnSizes) {
    // int** ans = (int**)malloc(2*sizeof(int*));
    // for(int i=0; i<2; i++) ans[i]=malloc((nums2Size)*(int*));

    // int (*arr)[nums2Size] = malloc(sizeof(int[2][nums2Size]));
    // Use a hash table for quick lookup (covering -1000 to 1000)
    int table1[2001] = {0};
    int table2[2001] = {0};

    // Mark the presence of numbers in each set
    for (int i = 0; i < nums1Size; i++) table1[nums1[i] + 1000] = 1;
    for (int i = 0; i < nums2Size; i++) table2[nums2[i] + 1000] = 1;

    // Find unique elements in nums1 that are not in nums2
    int* list1 = (int*)malloc(nums1Size * sizeof(int));
    int list1Size = 0;

    for (int i = 0; i < 2001; i++) {
        if (table1[i] && !table2[i]) {
            list1[list1Size++] = i - 1000;  // Adjust back to original value
        }
    }

    // Find unique elements in nums2 that are not in nums1
    int* list2 = (int*)malloc(nums2Size * sizeof(int));
    int list2Size = 0;

    for (int i = 0; i < 2001; i++) {
        if (table2[i] && !table1[i]) {
            list2[list2Size++] = i - 1000;  // Adjust back to original value
        }
    }

    // Allocate result array
    int** result = (int**)malloc(2 * sizeof(int*));
    result[0] = list1;
    result[1] = list2;

    // Allocate and set column sizes
    *returnColumnSizes = (int*)malloc(2 * sizeof(int));
    (*returnColumnSizes)[0] = list1Size;
    (*returnColumnSizes)[1] = list2Size;

    *returnSize = 2;  // Always returning two lists

    return result;
}