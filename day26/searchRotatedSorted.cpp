#include<bits/stdc++.h>
using namespace std;

bool searchInRotatedArray(vector<int> &arr, int k){
    int n=arr.size();
    for(int i=0;i<n;i++){
        if(arr[i]==k)
            return true;
    }
    return false;
}

int main(){
    vector<int> arr;
    int temp,x;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    cout << "Enter the value of target to be found: ";
    cin >> x;

    bool target=searchInRotatedArray(arr,x);
    if(!target)
        cout << "Target is not present.\n";
    else
        cout << "Target present in the array " << "\n";
    return 0;
}