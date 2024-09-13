class Solution {
public:
    vector<int> xorQueries(vector<int>& arr, vector<vector<int>>& queries) {
        int n = arr.size();

        vector<int> cumXor(n, 0);
        vector<int>res;
        cumXor[0] = arr[0];

        for(int i=1; i<n; ++i){
            cumXor[i] = cumXor[i-1] ^ arr[i];
        }

        for(vector<int>query : queries){
            int Left = query[0];
            int Right = query[1];

            int total = cumXor[Right] ^ (Left == 0 ? 0 : cumXor[Left-1]); 

            res.push_back(total);
        }

        return res;
        
    }
};