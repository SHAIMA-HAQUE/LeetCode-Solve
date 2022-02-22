class Solution {
public:
    bool isAnagram(string s, string t) {
        int count[256] = {0};
        for(int i = 0; s[i] && t[i]; i++)
        {
            count[s[i]] ++;
            count[t[i]] --;
        }        
        if(s.length() != t.length()){
            return false;
        }
        for(int i = 0;i<256;i++){
            if(count[i]){
                return false;
            }
        }
                  return true;
    }
};


