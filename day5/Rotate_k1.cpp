#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    void rotateRight(int arr[],int n,int k){
        if(n==0)
            return;
        k=k%n;
        int temp[k];
        for(int i=n-k;i<n;i++){
            temp[i-(n+k)]=arr[i];
        }
        for(int i=n-k-1;i>=0;i--){
            arr[i+k]=arr[i];
        }
        for(int i=0; i<k; i++){
            arr[i] = temp[i];
        }
    }
    void rotateLeft(int arr[],int n,int k){
        if(n==0)
            return;
        k=k%n;
        int temp[k];
        for(int i=0;i<n;i++){
            temp[i]=arr[i];
        }
        for(int i=k;i<n;i++){
            arr[i-k]=arr[i];
        }
        for(int i=0;i<k;i++){
            arr[n-k+i]=temp[i];
        }
    }
};
int main(){
    Solution sol;
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    cout << endl;
    cout << "Enter the value of k: ";
    cin >> k;
    cout << endl;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Array before left shift: " << "\n";
    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    sol.rotateRight(arr, n, k);
    cout << "Array after right rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    sol.rotateLeft(arr, n, k);
    cout << "Array after left rotation by " << k << " steps:\n";
    for (int i = 0; i < n; i++) 
        cout << arr[i] << " ";
    cout << endl;
    return 0;

}