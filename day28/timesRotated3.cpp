#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findRotations(vector<int> &arr){
        int low=0;
        int high=arr.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(arr[mid]>arr[high]){
                low=mid+1;
            }
            else{
                high=mid;
            }
        }
        return low;
    }
};
int main(){
    vector<int> nums;
    int temp;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        nums.push_back(temp);
    }
    Solution sol;
    int target=sol.findRotations(nums);
    cout << "Times the array is rotated: " << target <<"\n";
    return 0;
}