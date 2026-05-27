#include<bits/stdc++.h>
using namespace std;

bool sorted(int arr[], int n){
    int i,j;
    for(i=0;i<n;i++){
        for(j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                return false;
        }
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