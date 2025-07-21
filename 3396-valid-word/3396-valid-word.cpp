class Solution {
public:
    bool isValid(string word) {
        if(word.size()<3) return false;
        int vow = 0, cons = 0;
        string vowels = "aeiouAEIOU";
        for(char i : word){
            if(!isalnum(i)){
                return false;
            }
            if(isalpha(i)){
                 if(vowels.find(i)!=string::npos){
                    vow++;
                 }else{
                    cons++;
                 }
            }
        }
        if(vow && cons){
            return true;
        }else{
            return false;
        }
    }
};