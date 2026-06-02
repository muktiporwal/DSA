#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMaxConsecutiveOnes(vector<int> &nums){
        int cnt=0;
        int maxi=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1)
                cnt++;
            else
                cnt=0;
            maxi=max(maxi,cnt);
        }
        return maxi;
    }
};
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> nums(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> nums[i];
    }
    Solution obj;
    int ans=obj.findMaxConsecutiveOnes(nums);
    cout << "The maximum consecutive ones are " << ans;
    return 0;
}