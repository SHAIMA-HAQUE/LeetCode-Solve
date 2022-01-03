

int findJudge(int n, int** trust, int trustSize, int* trustColSize){
    int *trust_count=(int *)malloc(sizeof(int)*(n+1));
			for(int i=0;i<n+1;i++){
				trust_count[i]=0;
			}
			int j;

			for(int i=0;i<trustSize;i++){
				j=0;
				trust_count[trust[i][j]]-=1;
				j++;
				trust_count[trust[i][j]]+=1;
			}
			for(int i=1;i<n+1;i++){
				if(trust_count[i]==n-1){
					return i;
				}
    
    }
    return -1;
}