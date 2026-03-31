class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int mLeft = 0, mRight = matrix.size() - 1;
        while (mLeft <= mRight) {
            int midMatrix = (mLeft + mRight) / 2;
            int left = 0, right = matrix[midMatrix].size() - 1;
            if (matrix[midMatrix][left] <= target && matrix[midMatrix][right] >= target) {
                while (left <= right) {
                    int m = (left + right) / 2;
                    if (matrix[midMatrix][m] == target) {
                        return true;
                    }
                    if (matrix[midMatrix][m] > target) {
                        right--;
                    } else {
                        left++;
                    }
                }
            }
            if (matrix[midMatrix][right] > target) {
                mRight--;
            } else {
                mLeft++;
            }
        }
        return false;
    }
};
