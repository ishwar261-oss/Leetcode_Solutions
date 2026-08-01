<<<<<<< HEAD
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows * cols - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;
            int value = matrix[mid / cols][mid % cols];

            if (value == target) return true;
            if (value < target)  left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }
=======
class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
      
        int rows = matrix.size();
        int cols = matrix[0].size();
        int left = 0;
        int right = rows * cols - 1;

        while (left <= right) {

            int mid = left + (right - left) / 2;
            int value = matrix[mid / cols][mid % cols];

            if (value == target) return true;
            if (value < target)  left = mid + 1;
            else right = mid - 1;
        }

        return false;
    }
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};