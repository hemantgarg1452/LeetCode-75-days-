class Solution {
public:
    int findTheWinner(int n, int k) {
        vector<int> circle(n);
        for (int i = 0; i < n; ++i) circle[i] = i + 1;

        int idx = 0;
        while (circle.size() > 1) 
        {
            idx = (idx + k - 1) % circle.size();
            circle.erase(circle.begin() + idx);
        }
        return circle[0];
    }
};