class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int>dupli;
        int n = nums.size();
        for(int i = 0;i<n;i++){
            if(dupli[nums[i]]>0){
                return true;
            }
            dupli[nums[i]] ++;
        }
        return false;
    }
};