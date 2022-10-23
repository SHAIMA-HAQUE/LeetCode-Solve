class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int>s;
        int v1, v2;
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=nums[i];
            if(s.find(nums[i])!=s.end()){
                v1=nums[i];
            }
            s.insert(nums[i]);
        }
        int TSum = (n*(n+1))/2;
        v2=TSum-sum;
        vector<int> v;
        v.push_back(v1);
        v.push_back(v1+v2);
        return v;
    }
};