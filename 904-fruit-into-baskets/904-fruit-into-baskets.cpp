class Solution {
public:
    int totalFruit(vector<int>& fruits) {
        int window_start =0;
        int max_fruit = 0;
        unordered_map<int, int> freq;
        for(int window_end = 0;window_end < fruits.size();window_end++){
            freq[fruits[window_end]]++;
            while(freq.size() > 2){
                freq[fruits[window_start]]--;
                if(freq[fruits[window_start]]==0){
                    freq.erase(fruits[window_start]);
                }
                window_start ++;
            }
            
            max_fruit = max(max_fruit, window_end - window_start +1);
        }
        return max_fruit;
    }
};