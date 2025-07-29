class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int> result;
        unordered_map<int,int>maps;
        for(int  i : nums){
            maps[i]++;
        }
        vector<pair<int,int>> vec(maps.begin(),maps.end());
        sort(vec.begin(),vec.end(),[](auto& a, auto& b){
            return a.second > b.second;
        });
        
        for(int i = 0;i<k;i++){
            result.push_back(vec[i].first);
        }
        return result;
    }
};