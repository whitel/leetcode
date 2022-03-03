class Solution {
public:
    bool isValid(string s) {
        stack<char> buf;
        int length = s.length();
        if(length % 2 == 1)
            return false;
        for(int i = 0; i < length; i++) {
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') {
                buf.push(s[i]);
            } else if(s[i] == ')'){
                if(buf.empty() || buf.top() != '(')
                    return false;
                buf.pop();
            } else if(s[i] == '}') {
                if(buf.empty() || buf.top() != '{')
                    return false;
                buf.pop();
            } else if(s[i] == ']') {
                if(buf.empty() || buf.top() != '[')
                    return false;
                buf.pop();
            }
        }
        if(buf.empty())
            return true;
        else
            return false;
    }
};
