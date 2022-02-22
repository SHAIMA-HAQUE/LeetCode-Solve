class Solution {
public:
    bool isValid(string s) {
    stack <char> st;
    //     int len = s.length();
    //     for(int i = 0;i<len;i++){
    //         if(s[i] == '(' || s[i] == '{' || s[i] == '['){
    //             st.push(s[i]);
    //         }else{
    //             if(st.empty()){
    //                 return false;
    //             }
    //             int top = st.top();
    //             if(s[i] == ')' && top == '(' || s[i] == '}' && top == '{' || s[i] == ']' && s[i] == '['){
    //                 st.pop();
    //             }else{
    //                 return false;
    //             }
    //         }
    //     }
    //     if(st.empty()){
    //         return true;
    //     }else{
    //         return false;
    //     }
        for (int i = 0; i < s.size(); ++i) {
        if (s[i] == '('
          or s[i] == '{'
          or s[i] == '[')
          st.push(s[i]);

        else if (s[i] == ')') {
          if (st.empty() or st.top() != '(')
            return false;
          st.pop();
        } else if (s[i] == '}') {
          if (st.empty() or st.top() != '{')
            return false;
          st.pop();
        } else {
          if (st.empty() or st.top() != '[')
            return false;
          st.pop();
        }
      }

      if (st.empty())
        return true;

      return false;
    }
};