class Solution {
    public int maxArea(int[] height) {
        //int n = height.length;
        int start=0;
        int end=height.length-1;

        int maxArea=0;

        while(start<end){
            int area = Math.min(height[start], height[end]) * (end-start);
            maxArea = Math.max(area, maxArea);

            if(height[start] > height[end]){ 
                end--;
            }
            else start++;
        }
        return maxArea;
    }
}