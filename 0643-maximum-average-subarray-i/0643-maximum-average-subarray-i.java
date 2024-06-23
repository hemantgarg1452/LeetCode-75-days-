class Solution {
    public double findMaxAverage(int[] nums, int k) {
      int window = 0;
      for(int i=0; i<k; ++i)
        window += nums[i];
        
      int maxWindow = window;  
      int st=0;
      int end=k;
      while(end<nums.length){
        window -= nums[st];
        st++;

        window += nums[end];
        end++;

        maxWindow = Math.max(maxWindow, window);
      }

      return  (double)maxWindow/k;
    }
}