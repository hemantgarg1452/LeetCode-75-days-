class Solution {
public:
    int robotSim(vector<int>& commands, vector<vector<int>>& obstacles) {
        int max_dis = 0, temp = 0;
        int arr[4][2] = {{0, 1}, {1, 0}, {0, -1}, {-1, 0}}; 
        int arr_idx = 0;
        int a = 0, b = 0; 
        set<vector<int>> obs(obstacles.begin(), obstacles.end());
        for (int i : commands) {
            if (i > 0) {
                int dx = arr[arr_idx][0], dy = arr[arr_idx][1];
                for (int k = 1; k <= i; ++k) {
                    a += dx;
                    b += dy;
                    vector<int> pos = {a, b};
                    if (obs.count(pos)) {
                        a -= dx;
                        b -= dy;
                        break;
                    }
                }
                temp = a * a + b * b;
                if (temp > max_dis) {
                    max_dis = temp;
                }
            } else if (i == -1) {
                arr_idx = (arr_idx + 1) % 4;
            } else if (i == -2) {
                arr_idx = (arr_idx - 1 + 4) % 4;
            }
        }
        return max_dis;
    }
};