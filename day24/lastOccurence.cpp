#include <bits/stdc++.h>
using namespace std;
int solve(int n, int key, int arr[]) {  
    int res = -1;
    for (int i = n - 1; i >= 0; i--) {
        if (arr[i] == key) {
            res = i;
            break;
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