#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
void moveZeroes(vector<int> &arr){
    int j=-1;
    for(int i=0;i<arr.size();i++){
        if(arr[i]==0){
            j=i;
            break;
        }
    }
    if(j==-1)
        return;
    for(int i=j+1;i<arr.size();i++){
        if(arr[i]!=0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
};
int main(){
    Solution sol;
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array is: " << "\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sol.moveZeroes(arr);
    cout << "Array after moving zeroes: ";
    for (int num : arr) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}