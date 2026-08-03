int maximumWealth(int** accounts, int accountsSize, int* accountsColSize) {
    int wealth = 0;
    int maxwealth = 0;
    for(int i = 0; i<accountsSize; i++){
        wealth = 0;
        for(int j = 0; j<accountsColSize[0]; j++){
            wealth = accounts[i][j] + wealth;
        }
        if(wealth >= maxwealth){
            maxwealth = wealth;
        }
    }
    return maxwealth;
}