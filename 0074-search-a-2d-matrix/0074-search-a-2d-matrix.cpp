class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int rowSize = matrix.size();
        int colSize = matrix[0].size();
        int start = 0;
        int end = rowSize * colSize -1;

        while(start<=end){
            int mid = start+(end-start)/2;
            int row = mid / colSize;
            int col = mid % colSize;

            if(matrix[row][col]==target) return true;
            else if(matrix[row][col]>target) end = mid-1;
            else start = mid+1;
        }
        return false;
    }
};