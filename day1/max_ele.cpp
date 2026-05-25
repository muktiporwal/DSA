/*Using the brute fore method time complexity is O(nlogn)*/

#include<iostream>
#include<algorithm>
using namespace std;
int maxEleBrute(int arr[], int n){
    sort(arr,arr+n);
    return arr[n-1];
}
int main(){
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int data[size];
    cout << "Enter elements of array: ";
    for(int i=0;i<size;i++){
        cin >> data[i];
    }
    int max_element=maxEleBrute(data,size);
    cout << "The largest element is: " << max_element << endl;

    return 0;
}
