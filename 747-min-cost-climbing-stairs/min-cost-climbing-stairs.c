int compare(int a, int b){
    if(a>b) return b;
    else return a;
}

int minCostClimbingStairs(int* cost, int costSize) {
    if(!costSize) return 0;
    if(costSize==1) return cost[0];
    int* dp = (int*)calloc(costSize, sizeof(int));
    dp[0] = cost[0], dp[1] = cost[1];
    for(int i=2; i<costSize; i++)
        dp[i] = cost[i] + compare(dp[i-2], dp[i-1]);

    return compare(dp[costSize-2], dp[costSize-1]);
}