class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int smallestdiff = INT_MAX;
        for(int i = 0;i<nums.size()-2;i++){
            int left = i+1, right = nums.size() - 1;
            while(left<right){
                int targetDiff = target - nums[left] - nums[right] - nums[i];
                if(targetDiff == 0){
                    return target;
                }
                
                if (abs(targetDiff) < abs(smallestdiff) ||
              (abs(targetDiff) == abs(smallestdiff) && targetDiff > smallestdiff)) {
          smallestdiff = targetDiff;  // save the closest difference
        }
                
                if(targetDiff > 0){
                    left ++;
                }else{
                    right --;
                }
            }
        }
        return target - smallestdiff;
    }
};