class Solution {
public:
    bool isValid(std::string s) {
        std::stack<char> parth;

        for (int i = 0; i < s.length(); i++) {
            if (s[i] == '(' || s[i] == '{' || s[i] == '[') {
                parth.push(s[i]);
            } else {
                if (parth.empty()) return false;
                if ((s[i] == ')' && parth.top() == '(') ||
                    (s[i] == '}' && parth.top() == '{') ||
                    (s[i] == ']' && parth.top() == '[')) {
                    parth.pop();
                } else {
                    return false;
                }
            }
        }

        return parth.empty(); 
    }
};