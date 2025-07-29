class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int>maps{
            {'I',1},
            {'V',5},
            {'X',10},
            {'L',50},
            {'C',100},
            {'D',500},
            {'M',1000},
        };
        int result = 0;
        for(int i = 0 ; i < s.size(); i++){
            int next = (i+1<s.size())?maps[s[i+1]] : 0 ;
            if(maps[s[i]]>=next){
                result+=maps[s[i]];
            }else{
                result-=maps[s[i]];
            }
        }
        return result;
    
    }
};