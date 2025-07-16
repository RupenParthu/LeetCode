class Solution {
public:
    int findNumbers(vector<int>& nums) {
        // we can convert the int to string to see how many letters
        int count = 0;
        for(int i : nums){
            string str = to_string(i);
            if(str.size()%2==0){
                count++;
            }
        }
        return count;
    }
};