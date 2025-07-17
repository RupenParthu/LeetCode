class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int count = 0;
        for(char i : stones){
            for(char j : jewels){
                if(i==j){
                    count++;
                }
            }
        }
        return count;
    }
};