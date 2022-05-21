class Solution {
public:
    int longestMountain(vector<int>& arr) {
        int n = arr.size();
        
        int largest = 0;
        for(int i = 1;i<=n-2;){
            if(arr[i]>arr[i-1] && arr[i]>arr[i+1]){
                int cnt = 1;
                int j = i;
                while(j>=1 && arr[j]>arr[j-1]){
                    j--;
                    cnt++;
                }
                while(i<=n-2 && arr[i]>arr[i+1]){
                    i++;
                    cnt++;
                }
                largest = max(largest, cnt);
            }else{
                i++;
            }
        }
        return largest;
    }
};