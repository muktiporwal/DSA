#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<vector<int>> rotateClockwise(vector<vector<int>> &matrix){
        int n=matrix.size();
        vector<vector<int>> rotated(n,vector<int>(n));
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                rotated[j][n-i-1]=matrix[i][j];
            }
        }
        return rotated;
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
    vector<vector<int>> rotated=sol.rotateClockwise(matrix);
    for(auto row:rotated){
        for(int val:row)
            cout << val << " ";
        cout << endl;
    }
    return 0;
}