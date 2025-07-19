class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        vector<int>result;
        int i = 0, j=0;
          while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]>nums2[j]){
                result.push_back(nums2[j++]);
            }else{
                result.push_back(nums1[i++]);
            }
          }
          while(i<nums1.size()) result.push_back(nums1[i++]);
          while(j<nums2.size()) result.push_back(nums2[j++]);
          
          int n = result.size();
          if(n % 2!=0){
            return result[n/2.0];
          }else{
            float add = result[n/2] + result[n/2-1];
            return add/2.0;
          }

    }
};