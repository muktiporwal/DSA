#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void rotateClockwise(vector<vector<int>> &matrix){
        int n=matrix.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            reverse(matrix[i].begin(),matrix[i].end());
        }
    }
};
int main(){
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));

    cout << "Enter the elements of the matrix:\n";
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            cin >> matrix[i][j];
        }
    }

    Solution sol;
    sol.rotateClockwise(matrix);
    for(auto row:matrix){
        for(int val:row)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}