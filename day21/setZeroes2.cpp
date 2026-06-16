#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void setZeroes(vector<vector<int>> &matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        vector<int> row(m,0);
        vector<int> col(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[i][j]==0){
                    row[i]=1;
                    col[j]=1;
                }
            }
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(row[i]==1 || col[j]==1){
                    matrix[i][j]=0;
                }
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