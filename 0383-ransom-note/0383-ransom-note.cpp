class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> result;
        for(int i = 0; i < magazine.length(); i++){
            result[magazine[i]]++;
        }
        for(int i = 0; i < ransomNote.length();i++){
            if(result[ransomNote[i]]<=0){
                return false;
            }
            result[ransomNote[i]]--;
        }
        return true;
    }
};