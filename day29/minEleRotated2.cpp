#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMin(vector<int> &arr){
        int low=0,high=arr.size()-1;
        while(low<high){
            int mid=low+(high-low)/2;
            if(arr[mid]>arr[high]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return arr[low];
    }
};
int main(){
    vector<int> arr;
    int temp;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    Solution sol;
    int target=sol.findMin(arr);
    cout << "Minimum element in the rotated array is: " << target <<"\n";
    return 0;
}
