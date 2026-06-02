/*using hashing=> time complexity O(n) and space complexity is O(n)*/
#include<iostream>
#include<vector>
using namespace std;
int missingNum(vector<int>& arr){
    int n=arr.size()+1;
    vector<int> hash(n+1,0);
    for(int i=0;i<n-1;i++){
        hash[arr[i]]++;
    }
    for(int i=1;i<=n;i++){
        if(hash[i]==0){
            return i;
        }
    }
    return -1;
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
    int res=missingNum(arr);
    cout << "Element not present in the array is: " << res << endl;
    return 0;
}