#include<bits/stdc++.h>
using namespace std;
bool searchRotatedArray(vector<int> &arr,int k){
    int n=arr.size();
    int low=0,high=n-1;
    while(low<=high){
        int mid=(low+high)/2;
        if(arr[mid]==k)
            return true;
        if(arr[low]==arr[mid] && arr[mid]==arr[high]){
            low++;
            high--;
            continue;
        }
        if(arr[low]<=arr[mid]){
            if(arr[low]<=k && k<=arr[mid]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        else{
            if(arr[mid]<=k && k<=arr[high]){
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
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

    bool target=searchRotatedArray(arr,x);
    if(!target)
        cout << "Target is not present.\n";
    else
        cout << "Target present in the array " << "\n";
    return 0;
}