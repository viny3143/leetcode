class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>> result(n, vector<int>(n));
        if (n == 1) return {{1}};

        int i = 0;
        int j = 0;
        int rowEnd = n - 1;
        int colEnd = n - 1;
        int number = 1;
        while (number <= (n*n)) {

            for (int col = j; col <= colEnd; ++col) {
                result[i][col] = number;
                number++;
            }
            i++;
            for (int row = i; row <= rowEnd; ++row) {
                result[row][colEnd] = number;
                number++;
            }
            colEnd--;
            if (i <= rowEnd) {
                for (int col = colEnd; col >= j; --col) {
                    result[rowEnd][col] = number;
                    number++;
                }
                rowEnd--;
            }
            if (j <= colEnd) {
                for (int row = rowEnd; row >= i; --row) {
                    result[row][j] = number;
                    number++;
                }
                j++; 
            }  
        }
        return result;
    }
};