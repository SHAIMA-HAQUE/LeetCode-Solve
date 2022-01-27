

int maximumWealth(int** accounts, int accountsSize, int* accountsColSize){
    int i, j, sum = 0, max = 0;
    for(i=0;i<accountsSize;i++){
        sum =0;
        for(j = 0;j<*accountsColSize;j++){
            sum = sum + accounts[i][j];
        }
        if(sum > max){
        max = sum;
    }
    }
    return max;
    
}