class Solution {
public:
    void sortColors(vector<int>& nums) {
        //smaller - red, middle = white, largest = blue
        int smaller=0, equal=0, larger = nums.size();
        while(equal<larger){
            if(nums[equal] == 0){
                swap(nums[equal++], nums[smaller++]);
            }else if(nums[equal] == 1){
                ++equal;
            }else{
                swap(nums[equal], nums[--larger]);
            }
        }
    }
};