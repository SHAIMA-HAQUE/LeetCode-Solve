class Solution {
public:
    bool isVowel(char c){
        c = tolower(c);
        return c == 'a' || c=='e' || c=='i'|| c=='o'|| c=='u';
    }
    string reverseVowels(string s) {
        int n = s.size();
        int l = 0, r = n-1;
        while(l<r){
            while(l<r && !isVowel(s[l])){
                l++;
            }
            while(r>l && !isVowel(s[r])){
                r--;
            }
            swap(s[l], s[r]);
            l+=1;
            r-=1;
        }
        return s;
    }
};