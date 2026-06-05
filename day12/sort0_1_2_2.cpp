#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void SortZeroOneTwo(vector<int> &arr){
        int low=0,mid=0,high=arr.size()-1;
        while(mid<=high){
            if(arr[mid]==0){
                swap(arr[mid],arr[low]);
                mid++;
                low++;
            }
            else if(arr[mid]==1){
                mid++;
            }
            else{
                swap(arr[mid],arr[high]);
                high--;
            }
        }
    }
};
int main(){
    Solution obj;
    vector<int> arr;
    int x;
    cout << "Enter the elements of array(use -1 to stop): ";
    while(cin >> x && x!=-1){
        arr.push_back(x);
    }
    obj.SortZeroOneTwo(arr);
    for(int x:arr){
        cout << x << " ";
    }
    return 0;
}