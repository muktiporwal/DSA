#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void setZeroes(vector<vector<int>> &matrix){
        int m=matrix.size();
        int n=matrix[0].size();
        bool firstRowZero=false;
        bool firstColZero=false;
        for(int j=0;j<n;j++){
            if(matrix[0][j]==0){
                firstRowZero=true;
                break;
            }
        }
        for(int j=0;j<m;j++){
            if(matrix[j][0]==0){
                firstColZero=true;
                break;
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][j]==0){
                    matrix[i][0]=0;
                    matrix[0][j]=0;
                }
            }
        }
        for(int i=1;i<m;i++){
            for(int j=1;j<n;j++){
                if(matrix[i][0]==0 || matrix[0][j]==0){
                    matrix[i][j]=0;
                }
            }
        }
        if(firstRowZero){
            for(int j=0;j<n;j++){
                matrix[0][j]=0;
            }
        }
        if(firstColZero){
            for(int i=0;i<m;i++){
                matrix[i][0]=0;
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