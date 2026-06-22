#include<bits/stdc++.h>
using namespace std;
int findRotatiionCount(vector<int> &arr){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]>arr[i+1]){
            return i+1;
        }
    }
    return 0;
}
int main(){
    vector<int> arr;
    int temp,x;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    int target=findRotatiionCount(arr);
    cout << "Times the array is rotated: " << target <<"\n";
    return 0;
}