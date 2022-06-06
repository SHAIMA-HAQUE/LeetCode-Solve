class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int min_length = INT_MAX;
        int window_start = 0, sum = 0;
        for(int window_end = 0;window_end<nums.size();window_end ++){
            sum += nums[window_end];
            while(sum >= target){
                min_length = min(min_length, window_end - window_start + 1);
                sum -= nums[window_start];
                window_start ++;
            }
        }
        return min_length == INT_MAX ? 0:min_length;
    }
};