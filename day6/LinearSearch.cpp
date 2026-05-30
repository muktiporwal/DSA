#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to search: ";
    cin >> k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            cout << "Element found at index " << i << endl;
            return i;
        }
    }
    cout << "Element not found";
    return 0;
}