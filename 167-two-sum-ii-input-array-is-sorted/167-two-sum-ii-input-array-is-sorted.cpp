class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> res;
        int start = 0;
        int end = numbers.size()-1;
        while(start < end){
            if(numbers[start] + numbers[end] == target){
                res = {start+1, end +1};
                return res;
            }else if(numbers[start] + numbers[end] < target){
                start++;
            }else{
                end --;
            }
        }
        return res;
    }
};