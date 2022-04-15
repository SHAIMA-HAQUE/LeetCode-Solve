class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int size = nums.size();
        int max_so_far = nums[0];
        int curr_so_far = nums[0];
        for(int i = 1;i<size;i++){
            curr_so_far = max(nums[i], curr_so_far+nums[i]);
            max_so_far = max(max_so_far,curr_so_far);
        }
        return max_so_far;
    }
};