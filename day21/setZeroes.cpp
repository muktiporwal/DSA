#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    void setZeroes(vector<vector<int>> &matrix) {
        int m = matrix.size();
        int n = matrix[0].size();

        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {

                if(matrix[i][j] == 0) {

                    // Mark row
                    for(int col = 0; col < n; col++) {
                        if(matrix[i][col] != 0)
                            matrix[i][col] = -1;
                    }

                    // Mark column
                    for(int row = 0; row < m; row++) {
                        if(matrix[row][j] != 0)
                            matrix[row][j] = -1;
                    }
                }
            }
        }

        // Convert marked cells to 0
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(matrix[i][j] == -1)
                    matrix[i][j] = 0;
            }
        }
    }
};

int main() {
    int m, n;

    cout << "Enter the size of matrix(m): ";
    cin >> m;

    cout << "Enter the size of matrix(n): ";
    cin >> n;

    vector<vector<int>> matrix(m, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < m; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    sol.setZeroes(matrix);

    cout << "\nMatrix after setting zeroes:\n";
    for(auto &row : matrix) {
        for(auto val : row) {
            cout << val << " ";
        }
        cout << endl;
    }

    return 0;
}