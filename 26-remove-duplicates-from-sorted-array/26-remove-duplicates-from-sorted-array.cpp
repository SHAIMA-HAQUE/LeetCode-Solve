class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int start = 0;
        for(int end = 1;end<nums.size();end++){
            if(nums[end] != nums[start]){
                swap(nums[end], nums[start+1]);
                start ++;
            }
        }
        return start+1;
    }
};