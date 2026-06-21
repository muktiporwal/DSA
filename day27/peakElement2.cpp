#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findPeakElement(vector<int> &nums){
        int low=0,high=nums.size()-1;
        while(low<high){
            int mid=(low+high)/2;
            if(nums[mid]>nums[mid+1]){
                high=mid;
            }
            else{
                low=mid+1;
            }
        }
        return low;
    }
};
int main(){
    vector<int> nums;
    int temp,x;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        nums.push_back(temp);
    }
    Solution sol;
    int target=sol.findPeakElement(nums);
    cout << "Peak at index: " << target << " with value:" << nums[target]<<"\n";
    return 0;
}