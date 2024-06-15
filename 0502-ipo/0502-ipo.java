class Solution {
    public int findMaximizedCapital(int k, int w, int[] profits, int[] capital) {
        List<int[]> totalProjects = new ArrayList<>();
        for (int i = 0; i < profits.length; ++i) {
            totalProjects.add(new int[]{capital[i], profits[i]});
        }
        
        totalProjects.sort((a, b) -> a[0] - b[0]);
        PriorityQueue<Integer> maxHeap = new PriorityQueue<>(Collections.reverseOrder());
        
        for (int i = 0; i < totalProjects.size(); ++i) {
            if (w >= totalProjects.get(i)[0]) {
                maxHeap.offer(totalProjects.get(i)[1]);
            } else if (k > 0 && !maxHeap.isEmpty()) {
                k--;
                i--;
                w += maxHeap.poll();
            }
        }
        
        while (!maxHeap.isEmpty() && k > 0) {
            w += maxHeap.poll();
            k--;
        }
        return w;
    }
}