/*better approach where we do two traversal to find the smallest and the largest element O(n)*/
#include<bits/stdc++.h>
using namespace std;

void getElements(int arr[], int n){
    if(n==0 || n==1){
        cout << -1 << " " << -1 << endl;
    }
    int small=INT_MAX, second_small=INT_MAX;
    int large=INT_MIN, second_large=INT_MIN;
    int i;
    for(int i=0;i<n;i++){
        small=min(small,arr[i]);
        large=max(large,arr[i]);
    }
    for(i=0;i<n;i++){
        if(arr[i]<second_small && arr[i]!=small){
            second_small=arr[i];
        }
        if(arr[i]>second_large && arr[i]!=large){
            second_large=arr[i];
        }
    }
    cout << "Second largest element is " << second_large << endl;
    cout << "Second smallest element is " << second_small << endl;
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