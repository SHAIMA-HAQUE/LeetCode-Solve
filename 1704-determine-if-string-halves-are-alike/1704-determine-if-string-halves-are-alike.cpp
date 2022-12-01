class Solution {
public:
    bool halvesAreAlike(string s) {
        set<char> vowels = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        int start = 0;
        int end = s.length()-1;
        int cnt = 0;
        while(start < end){
            if(vowels.find(s[start]) != vowels.end()){
                cnt ++;
            }
            if(vowels.find(s[end]) != vowels.end()){
                cnt --;
            }
            start ++;
            end --;
        }
        if(cnt == 0){
            return true;
        }else{
            return false;
        }
    }
};