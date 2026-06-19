#include<bits/stdc++.h>
using namespace std;
int count(int arr[], int n, int x){
    int cnt=0;
    for(int i=0;i<n;i++){
        if(arr[i]==x)
            cnt++;
    }
    return cnt;
}
int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the element to find the occurence: ";
    cin >> x;
    int ans=count(arr,n,x);
    cout << "The number of occurences is: "<< ans << "\n";
    return 0;
}