int jump(int* nums, int numsSize) {
    if(numsSize==1) return 0;
    int jump = 0, step = 0, max = 0;
    for(int i=0; i<numsSize-1; i++){
        if(i+nums[i]>max) max = i+nums[i];
        if(i==step){
            jump++;
            step = max;
        }
    }
    
    return jump;
}