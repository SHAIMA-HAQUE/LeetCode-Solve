class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int total_sum = 0, left= 0;
        for(int x: nums){
            total_sum += x;
        }
        for(int i = 0;i<nums.size();i++){
            total_sum -= nums[i];
            if(left == total_sum){
                return i;
            }
            left += nums[i];
        }
        return -1;
    }
};