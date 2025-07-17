class Solution {
public:
    int firstUniqChar(string s) {
        unordered_map<char,int>maps;
        for(char i:s){
            maps[i]++;
        }
        for(int j = 0;j<s.length();j++){
            if(maps[s[j]]==1){
                return j;
            }
        }
        return -1;
    }
};