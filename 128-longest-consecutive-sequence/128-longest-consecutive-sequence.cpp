class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        unordered_set<int>s;
        
        if(n==0){
            return 0;
        }
        for(int x:nums){
            s.insert(x);
        }
        
        int largest = 1;
        for(auto elem: s){
            int parent = elem -1;
            if(s.find(parent) == s.end()){
                int next_no = elem+1;
                int cnt = 1;
                while(s.find(next_no) != s.end()){
                    next_no++;
                    cnt ++;
                }
                if(largest<cnt){
                    largest = cnt;
                }
            }
        }
        return largest;
    }
    
};