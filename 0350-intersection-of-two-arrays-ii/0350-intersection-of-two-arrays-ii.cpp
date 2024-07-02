class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        sort(nums1.begin(), nums1.end());
        sort(nums2.begin(), nums2.end());

        int start = 0, end = 0;
        vector<int>ans;

        while(start<nums1.size() && end<nums2.size()){
            if(nums1[start] < nums2[end]) start++;
            else if(nums1[start] > nums2[end]) end++;
            else{
                ans.push_back(nums1[start]);
                start++;
                end++;
            }
        }
        return ans; 
    }
};