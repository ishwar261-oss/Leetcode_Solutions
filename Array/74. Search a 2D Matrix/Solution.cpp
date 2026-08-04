<<<<<<< HEAD
=======
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
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
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
<<<<<<< HEAD
};
=======
>>>>>>> 90bb90bb2c571441903367ecd6656292423de447
};
>>>>>>> da8ae76aebc765b73442c19b1571de8aa45b6720
