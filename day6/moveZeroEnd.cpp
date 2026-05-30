#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> moveZeros(vector<int> &arr,int n){
        vector<int> temp(n,0);
        int index=0;
        for(int i=0;i<n;i++){
            if(arr[i]!=0){
                temp[index]=arr[i];
                index++;
            }
        }
        for(int i=0;i<n;i++){
            arr[i]=temp[i];
        }
        return arr;
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
    vector<int> res=sol.moveZeros(arr,n);
    cout << "Array after moving zeroes: ";
    for (int num : res) {
        cout << num << " ";
    }
    cout << endl;
    return 0;
}