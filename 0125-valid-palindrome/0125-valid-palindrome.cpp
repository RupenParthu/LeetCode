class Solution {
public:
    bool isPalindrome(string s) {
        vector<char> str;

        for(int i=0;i<s.length();i++){
            if(isalnum(s[i])){
                str.push_back(tolower(s[i]));
            }
        } 
        vector<char> rev = str;
        reverse(rev.begin(), rev.end());
        return str == rev;
    }
};