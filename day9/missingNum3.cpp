/*using sum of n terms formula => time complexity O(n) and space complexity O(1)*/
#include<iostream>
#include<vector>
using namespace std;
int missingNum(vector<int> &arr){
    int n=arr.size()+1;
    int sum=0;
    for(int i=0;i<n-1;i++){
        sum+=arr[i];
    }
    long long expSum=(n * 1LL * (n+1))/2;
    return expSum-sum;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Element not present in the array is: " << missingNum(arr) << endl;
    return 0;
}