int maxProfit(int* prices, int pricesSize) {
    int minprice = prices[0];
    int currentprofit = 0;
    int maxprofit = 0;
    for(int i=0; i<pricesSize; i++){
        if(prices[i] <= minprice){
            minprice = prices[i];
        }
        currentprofit = prices[i] - minprice;
        if(currentprofit > maxprofit){
            maxprofit = currentprofit;
        }
    }
    return maxprofit;
}