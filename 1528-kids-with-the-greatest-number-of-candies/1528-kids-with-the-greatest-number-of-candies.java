class Solution {
    public List<Boolean> kidsWithCandies(int[] candies, int extraCandies) {
        int maximum = 0;
        for(int cd : candies){
            if(cd > maximum){
                maximum = cd;
            }
        }

        List<Boolean> result = new ArrayList<>();
        for(int candy : candies){
            if(candy + extraCandies >= maximum) result.add(true);
            else result.add(false);
        }
        return result;
    }
}


//C++ Approach ------->
    // vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
    //     int maximum = 0;
    //     int n = candies.size();
    //         for(int maxKid : candies){
    //         maximum = max(maximum, maxKid);
    //         }

    //     vector<bool> ans(n);
    //         for(int i=0; i<n; ++i){
    //         if(candies[i] + extraCandies >= maximum) ans[i] = true;
    //         else ans[i] = false;
    //     }
    //     return ans;
    // }