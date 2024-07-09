class Solution {
    public int largestAltitude(int[] gain) {
        int maxHeight = 0;
        int currentHeight = 0;

        for(int i=0; i<gain.length; ++i){
            currentHeight += gain[i];
            maxHeight = Math.max(maxHeight, currentHeight);
        }

        return maxHeight;
    }
}