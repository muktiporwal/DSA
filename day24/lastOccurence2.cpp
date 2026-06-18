#include<bits/stdc++.h>
using namespace std;
int solve(int n,int key, int arr[]){
    int start=0,end=n-1;
    int res=-1;
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            res=mid;
            start=mid+1;
        }
        else if(key<arr[mid]){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    }
    return res;
}
int main() {
    int n,key;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value of key: ";
    cin >> key;
    cout << solve(n, key, arr) << "\n";
    return 0;
}