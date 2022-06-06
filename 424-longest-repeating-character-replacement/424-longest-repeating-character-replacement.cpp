class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char, int>freq;
        int window_start = 0;
        int max_length = 0, max_repeat;
        for(int window_end =0;window_end< s.length();window_end++){
            char right_char = s[window_end];
            freq[right_char]++;
            
            max_repeat = max(max_repeat, freq[right_char]);
            
            if(window_end-window_start+1-max_repeat >k){
                char left_char = s[window_start];
                freq[left_char]--;
                window_start ++;
            }
            max_length = max(max_length, window_end-window_start +1);
            
        }
        return max_length;
    }
};