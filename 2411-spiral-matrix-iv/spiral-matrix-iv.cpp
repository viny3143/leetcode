class Solution {
public:
    vector<vector<int>> spiralMatrix(int m, int n, ListNode* head) {
        vector<vector<int>> result(m, vector<int>(n, -1));
        int i = 0;
        int j = 0;
        int rowEnd = m - 1;
        int colEnd = n - 1;
        while (head != nullptr) {
            for (int col = j; col <= colEnd && head != nullptr; col++) {
                result[i][col] = head->val;
                head = head->next;
            }
            i++;
            for (int row = i; row <= rowEnd && head != nullptr; row++) {
                result[row][colEnd] = head->val;
                head = head->next;
            }
            colEnd--;
            if (i <= rowEnd) {
                for (int col = colEnd; col >= j && head != nullptr; col--) {
                    result[rowEnd][col] = head->val;
                    head = head->next;
                }
                rowEnd--;
            }
            if (j <= colEnd) {
                for (int row = rowEnd; row >= i && head != nullptr; row--) {
                    result[row][j] = head->val;
                    head = head->next;
                }
                j++;
            }
        }
        return result;
    }
};
