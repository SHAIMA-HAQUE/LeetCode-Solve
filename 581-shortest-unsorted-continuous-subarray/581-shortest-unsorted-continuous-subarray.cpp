class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        vector<int> b(nums);
        int left = 0, right = nums.size()-1;
        int n = nums.size();
        sort(nums.begin(), nums.end());
        while(left<n && nums[left] == b[left]){
            left ++;
        }
        while(right >= 0 && nums[right] == b[right]){
            right --;
        }
        if(left == nums.size()){
            return 0;
        }
        return right-left+1;
    }
};