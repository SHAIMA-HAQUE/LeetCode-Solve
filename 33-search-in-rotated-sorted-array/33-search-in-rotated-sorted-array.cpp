class Solution {
public:
    int search(vector<int>& nums, int target) {
        int key = target;
        int start = 0, end = nums.size() - 1;
        while(start <= end){
            int mid = start + (end - start)/2;
            
            if(nums[mid] == key){
                return mid;
            }
            //first part
            if(nums[start] <= nums[mid]){
                //start to mid is sorted
                if(key >= nums[start] && key <= nums[mid]){
                    end = mid -1;
                    
                }else{
                    start = mid +1;
                }
            }else{
                if(key >= nums[mid] && key <= nums[end]){
                    start = mid + 1;
                }else{
                    end = mid -1;
                }
            }
        }
        return -1;
    }
};