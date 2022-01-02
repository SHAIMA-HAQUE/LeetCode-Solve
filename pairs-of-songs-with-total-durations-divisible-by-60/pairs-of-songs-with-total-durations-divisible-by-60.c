

int numPairsDivisibleBy60(int* time, int timeSize){
    int count = 0;
    int i, j;
    int a[60] = {0};
    for(i = 0;i<timeSize;i++){
        a[time[i] %60]++;
    }
    i = 1;
    j = 59;
    while(i<j){
        count += a[i] * a[j];
        i++;
        j--;
        
    }
    count+=(a[0]*(a[0]-1)/2)+(a[30]*(a[30]-1)/2);
	
	return count;
}