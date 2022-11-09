class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int k = 1;
        for(int i = 0;i<nums.size();i++){
            if(k == nums[i]){
                k++;
            }
        }
        return k;
    }
};