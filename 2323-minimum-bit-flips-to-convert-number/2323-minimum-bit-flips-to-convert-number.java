class Solution {
    public int minBitFlips(int start, int goal) {
        int bits = 0;
        int diff = start ^ goal;

        while(diff!=0){
            bits += diff & 1;

            diff = diff>>1;
        }
        return bits;
    }
}