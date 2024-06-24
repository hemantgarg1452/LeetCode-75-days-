class Solution {
    public int minKBitFlips(int[] nums, int k) {
        int flipCount = 0;
        int result = 0;

        for (int i = 0; i < nums.length; ++i) {
        
            if (i >= k && nums[i - k] == -1) {
                flipCount--;
            }
            if (flipCount % 2 == nums[i]) {
                if (i + k > nums.length) {
                    return -1;
                }
                nums[i] = -1;
                flipCount++;
                result++;
            }
        }

        return result;
    }
}