class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>result;
        if(numRows<=0) return result;
        result.push_back({1});
        for(int i = 1; i < numRows;i++){
            vector<int>row;
            vector<int>&prev = result[i-1];
            row.push_back(1);
            for(int i = 1;i<prev.size();i++){
                row.push_back(prev[i-1] + prev[i]);
            }
            row.push_back(1);
            result.push_back(row);
        }
        return result;
    }
};