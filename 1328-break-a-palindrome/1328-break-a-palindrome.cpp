class Solution {
public:
    string breakPalindrome(string palindrome) {
        if(palindrome.length() == 1){
            return "";
        }
        int cnt = 0;
        for(int i =0;i<palindrome.length();i++){
            if(palindrome[i]!='a'){
                palindrome[i] = 'a';
                return palindrome;
            }else if(palindrome[i] == 'a'){
                cnt ++;
                if(cnt == palindrome.length()/2){
                    palindrome[palindrome.length()-1] = 'b';
                    return palindrome;
                }
            }
        }
        
        return palindrome;
    }
};