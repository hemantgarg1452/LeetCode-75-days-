class Solution {
    public int minPatches(int[] nums, int n) {
        long left = 1;
        int ans = 0;
        int i = 0;

        while (left <= n) {
            if (i < nums.length && nums[i] <= left) {
                left += nums[i];
                i++;
            } 
            else {
                left += left;
                ans++;
            }
        }

        return ans;
    }
}