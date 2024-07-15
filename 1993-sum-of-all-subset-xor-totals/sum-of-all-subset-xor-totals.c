int subsetXORSum(int* nums, int numsSize) {
    int ans = 0;
    // 1<<numsSize == 2^numsSize -> Total num of subset
    for(int i=0; i<(1<<numsSize); i++){
        int xor = 0;
        // if numsSize = 3 -> i<8, j<3
        //  i    j
        // 0000 0001
        // 0001 0010
        // 0010 0100
        // 0011
        // 0100
        // 0101
        // 0110
        // 0111
        // i為排列組合，j用來判斷index有沒有包含在subset裡面
        for(int j=0; j<numsSize; j++)
            if(i&(1<<j)) xor ^= nums[j];
        ans += xor;
    }
    return ans;
}