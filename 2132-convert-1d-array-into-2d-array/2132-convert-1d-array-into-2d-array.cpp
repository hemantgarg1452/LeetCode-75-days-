class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& original, int m, int n) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);

        vector<vector<int>> res(m, vector<int>(n));

        if(original.size() != m*n) return {};

        // int idx = 0;
        // for(int i=0; i<m; ++i){
        //     for(int j=0; j<n; j++){
        //         res[i][j] = original[idx];
        //         idx++;
        //     }
        // }
        // return res;

        for(int i=0; i<original.size(); ++i){
            int row = i/n;
            int col = i%n;

            res[row][col] = original[i];
        }
        return res;
    }
};