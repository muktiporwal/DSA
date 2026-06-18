#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int searchInsertPosition(vector<int> arr,int x){
        int n=arr.size();
        int low=0, high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=x){
                ans=mid;
                high=mid-1;
            }
            else{
                low=mid+1;
            }
        }
        return ans;
    }
};
int main(){
    vector<int> arr;
    int temp,x;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    cout << "Enter the value of x: ";
    cin >> x;
    Solution sol;
    int index=sol.searchInsertPosition(arr,x);
    cout << "Element can be inserted at the position: " << index << "\n";
    return 0;
}