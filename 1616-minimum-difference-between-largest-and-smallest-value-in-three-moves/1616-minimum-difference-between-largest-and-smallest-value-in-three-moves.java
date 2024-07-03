class Solution {
    public int minDifference(int[] nums) {
        if(nums.length <= 4) return 0;

        int mini = Integer.MAX_VALUE;
        Arrays.sort(nums);
        for(int i=0; i<4; ++i){
            mini = Math.min(mini, nums[nums.length-4+i]- nums[i]);
        }
        return mini;
    }
}