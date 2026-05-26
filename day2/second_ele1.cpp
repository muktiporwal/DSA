#include<bits/stdc++.h>

using namespace std;
void getElements(int arr[], int n){
    if(n==0 || n==1){
        cout << -1 << " " << 1 << endl;
    }
    sort(arr,arr+n);
    int small=arr[1];
    int large=arr[n-2];
    cout << "Second largest element is " << large << endl;
    cout << "Second smallest element is " << small << endl;
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
    getElements(arr,n);
    return 0;
}