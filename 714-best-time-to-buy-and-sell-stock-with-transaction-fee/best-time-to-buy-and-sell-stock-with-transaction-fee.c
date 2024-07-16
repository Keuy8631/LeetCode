#define max(a, b) ((a)>(b)?(a):(b))
int maxProfit(int* prices, int pricesSize, int fee) {
    int n = pricesSize;
    int buy = INT_MIN, sell = 0;
    for(int i=0; i<pricesSize; i++){
        buy = max(buy, sell-prices[i]);
        sell = max(sell, buy+prices[i]-fee);
    }
    return sell;
}