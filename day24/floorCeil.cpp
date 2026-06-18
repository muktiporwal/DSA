#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findFloor(int arr[],int n,int x){
        int low=0, high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]<=x){
                ans=arr[mid];
                low=mid+1;
            }
            else{
                high=mid-1;
            }
        }
        return ans;
    }
    int findCeil(int arr[],int n,int x){
        int low=0,high=n-1;
        int ans=-1;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans=arr[mid];
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
    pair<int, int> getFloorAndCeil(int arr[], int n, int x) {
        int f = findFloor(arr, n, x);
        int c = findCeil(arr, n, x);
        return make_pair(f, c);
    }
};
int main(){
    int n,x;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value of x: ";
    cin >> x;
    Solution sol;
    pair<int,int> ans=sol.getFloorAndCeil(arr,n,x);
    cout << "The floor and ceil are: " << ans.first << " " << ans.second << "\n";
    return 0;
}