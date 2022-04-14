class Solution {
public:
    int countBits(int n){
        int ans = 0;
        while(n>0){
            n = n &(n-1);
            ans ++;
        }
        return ans;
    }
    vector<int> sortByBits(vector<int>& arr) {
        sort(arr.begin(), arr.end());
        multimap<int, int> m{};
        for(int &num : arr){
            m.insert({countBits(num), num});
        }
        vector<int> ans{};
        
        for(auto &item: m)
            ans.push_back(item.second);
        
        return ans;
    }
};