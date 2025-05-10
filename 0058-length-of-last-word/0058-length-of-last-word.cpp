class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;

        //removing extra space at the end if exists
        while (i >= 0 && s[i] == ' ') {
             i--;
        }

        int count = 0;
        
        while(i>=0 && s[i] != ' '){
             count++;
             i--;
        }
    
    return count;
    }
};