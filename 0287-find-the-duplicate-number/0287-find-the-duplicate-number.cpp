class Solution {
public:
    int findDuplicate(vector<int>& nums) {
//         sort(nums.begin(), nums.end());
        
//         int start = 1, end = nums.size() -1;
//         while(start <= end){
//             int mid = start + (end - start)/2;
//             int cnt = 0;
//             for(int n: nums){
//                 if(n <= mid){
//                     cnt ++;
//                 }
//             }
//             if(cnt <= mid){
//                 start = mid + 1;
//             }else{
//                 end = mid - 1;
//             }
//         }
//         return start;
        int slow = nums[0];
        int fast = nums[0];
        
        do{
            slow = nums[slow];
            fast = nums[nums[fast]];
        }while(slow != fast);
        
        fast = nums[0];
        while(slow != fast){
            slow  = nums[slow];
            fast = nums[fast];
        }
        return slow;
    }
};