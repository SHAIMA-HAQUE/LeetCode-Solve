//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
    public:
    int searchInsertK(vector<int>Arr, int N, int k)
    {
        
        int hi = Arr.size()-1, lo=0;
       while(hi >= lo)
       {
         int mid = (hi + lo)/2;

         if(Arr[mid]==k) return mid;
    
         else if(Arr[mid] > k) hi = mid - 1;
         
         else lo = mid + 1;
       }

      return lo;
    }
};

//{ Driver Code Starts.
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int N;
        cin >> N;
        vector<int>Arr(N);
        for(int i=0;i<N;i++)    
            cin>>Arr[i];
        int k;
        cin>>k;
        Solution obj;
        cout<<obj.searchInsertK(Arr, N, k)<<endl;
    }
    return 0;
}
// } Driver Code Ends