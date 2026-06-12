/*uses two matrices, one to keep track of visited cells. Movement in four directions: right, down, left, up*/
#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> spiralOrder(vector<vector<int>> &matrix){
        vector<int> result;
        int top=0;
        int bottom=matrix.size()-1;
        int left=0;
        int right=matrix.size()-1;
        while(top<=bottom && left<=right){
            for(int i=left;i<=right;i++){
                result.push_back(matrix[top][i]);
            }
            top++;
            for(int i=top;i<=bottom;i++){
                result.push_back(matrix[i][right]);
            }
            right--;
            if(top<=bottom){
                for(int i=right;i>=left;i--){
                    result.push_back(matrix[bottom][i]);
                }
                bottom--;
            }
            if(left<=right){
                for(int i=bottom;i>=top;i--){
                    result.push_back(matrix[i][left]);
                }
                left++;
            }
        }
        return result;
    }
};
int main(){
    Solution obj;
    int n;
    cout << "Enter the size of matrix: ";
    cin >> n;
    vector<vector<int>> matrix(n,vector<int>(n));
    cout << "Enter the matrix elements: ";
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin >> matrix[i][j];
        }
    }
    vector<int> ans=obj.spiralOrder(matrix);
    for(int x:ans)
        cout << x << " ";
    cout << endl;
    return 0;
}