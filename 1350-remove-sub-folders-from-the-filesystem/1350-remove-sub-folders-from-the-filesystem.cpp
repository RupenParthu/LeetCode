class Solution {
public:
    vector<string> removeSubfolders(vector<string>& folder) {
        sort(folder.begin(),folder.end());
        vector<string>result;
        for(string i: folder){
            if(result.empty()){
                result.push_back(i);
            }else{
                string str = result.back();
                if(i.find(str + "/")==0){
                    continue;
                }else{
                    result.push_back(i);
                }
            }
        }
        return result;
    }
};