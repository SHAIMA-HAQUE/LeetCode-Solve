class Solution {
public:
    int titleToNumber(string columnTitle) {
        int num = 0;
        for(int i = 0;i<columnTitle.length();i++){
            int last_char_add = (char)columnTitle[i] - 'A' +1;
            num = num*26 + last_char_add;
        }
        return num;
    }
};