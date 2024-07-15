#define compare(a, b) ((a)<(b)?(a):(b))

int minCostClimbingStairs(int* cost, int costSize) {
    if(!costSize) return 0;
    if(costSize==1) return cost[0];
    int dp[costSize];
    dp[0] = cost[0], dp[1] = cost[1];
    for(int i=2; i<costSize; i++)
        dp[i] = cost[i] + compare(dp[i-2], dp[i-1]);

    return compare(dp[costSize-2], dp[costSize-1]);
}