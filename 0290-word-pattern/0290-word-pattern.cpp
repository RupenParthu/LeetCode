class Solution {
public:
    bool wordPattern(string pattern, string s) {
        vector<string> words;
        unordered_map<char,string>map1;
        unordered_map<string,char>map2;

        s.push_back(' ');
        string temp = "";

        for(int i = 0;i<s.size();i++){
            if(s[i]==' '){
               if (!temp.empty()) {
                    words.push_back(temp);
                    temp = "";
               }
            }else{
                temp+=s[i];
            }
        }

        if(words.size() != pattern.size()) return false;

        for(int i=0; i<pattern.size();i++){
            char c = pattern[i];
            string str = words[i];

            // char to string maping
            if(map1.count(c)){
                if(map1[c] != str){
                    return false;
                }
            }else{
                map1[c] = str;
            }

            // string to char mapping for bijection
            if(map2.count(str)){
                if(map2[str]!=c){
                    return false;
                }
            }else{
                map2[str] = c;
            }
           
        }
            return true;
    }
};