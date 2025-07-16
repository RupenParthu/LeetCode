class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<char,int>result;

        for(char i : t){
            result[i]++;
        }
        for(char j : s){
            result[j]--;
            if(result[j]==0){
                result.erase(j);
            }
        }
        return result.begin()->first;
    }
};