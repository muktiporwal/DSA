#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[],int n){
    for(int i=1;i<n;i++){
        if(arr[i]<arr[i-1])
            return false;
    }
    return true;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of the array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    bool result=sorted(arr,n);
    if(result==true)
        cout << "Array is sorted";
    else
        cout << "Array is not sorted";

    return 0;
}