#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findPeakElement(vector<int> &nums){
        int n=nums.size();
        for(int i=0;i<n;i++){
            bool left=(i==0) || (nums[i]>= nums[i-1]);
            bool right=(i==n-1) || (nums[i]>= nums[i+1]);
            if(left && right)
                return i;
        }
        return -1;
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