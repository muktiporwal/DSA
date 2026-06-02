#include<iostream>
#include<vector>
using namespace std;

int missingNum(vector<int>& arr){
    int n=arr.size()+1;
    for(int i=1;i<=n;i++){
        bool found=false;
        for(int j=0;j<n-1;j++){
            if(arr[j]==i){
                found=true;
                break;
            }
        }
        if(!found)
            return i;
    }
    return -1;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Number not present in array is: " << missingNum(arr) << endl;
    return 0;
}