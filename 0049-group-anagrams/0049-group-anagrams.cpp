class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> map;
        for(string i: strs){
            string temp = i;
            sort(temp.begin(),temp.end());
            map[temp].push_back(i);
        }
        vector<vector<string>> result;
        for(auto entry: map){
            result.push_back(entry.second);
        }
         return result;
    }
};