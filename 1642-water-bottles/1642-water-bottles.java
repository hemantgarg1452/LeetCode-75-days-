class Solution {
    public int numWaterBottles(int numBottles, int numExchange) {
        int numEmpty = 0, ans = 0;
        
        while (numBottles > 0) {
            ans += numBottles;
            numEmpty += numBottles;
            numBottles = numEmpty / numExchange;
            numEmpty = numEmpty % numExchange;
        }
        return ans;
    }
}