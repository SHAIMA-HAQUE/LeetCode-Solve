class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        unordered_map<int, int> map;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(map.count(nums[i])){
                if(abs(i-map[nums[i]])<=k)
                    return true;
            }
            map[nums[i]] = i;
        }
        return false;
    }
};