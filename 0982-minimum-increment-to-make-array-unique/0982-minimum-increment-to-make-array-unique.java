class Solution {
    public int minIncrementForUnique(int[] nums) {
        Arrays.sort(nums);
        int ans = 0;
        int nextVal = nums[0] + 1;

        for(int i=1; i<nums.length; ++i){ //For 1 <= i < n, if nums[i] is less than nxt, student i must move to that spot with nxt - nums[i] steps, and then nxt increases by 1.
            if(nextVal >= nums[i]) ans+= (nextVal++ - nums[i]); // ans = (ans + ((nextVal++)-nums[i])); 

            else nextVal = nums[i]+1; //If nums[i] is greater than nxt, student i does not need to move, and we set nxt = nums[i] + 1
        }
        return ans;
    }
}

//C++ Approach ------------>
    // int minIncrementForUnique(vector<int>& nums) {
    //     sort(nums.begin(), nums.end());
    //     int count = 0;
    //     for(int i=1; i<nums.size(); ++i){
    //         if(nums[i]<=nums[i-1]){
    //             count += nums[i-1]-nums[i]+1;
    //             nums[i]= nums[i-1]+1;
    //         }
    //     }
    //     return count;
    // }