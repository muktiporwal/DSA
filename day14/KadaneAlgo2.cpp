#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxSubArray(vector<int> &arr){
        int maxi=INT_MIN;
        for(int i=0;i<arr.size();i++){
            int sum=0;
            for(int j=i;j<arr.size();j++){
                sum+=arr[j];
                maxi=max(maxi,sum);
            }
        }
        return maxi;
    }
};
int main(){
    vector<int> arr;
    int x;
    cout << "Enter the elements of array (use -111 to stop): ";
    while(cin >> x && x!=-111){
        arr.push_back(x);
    }
    Solution obj;
    int ans=obj.maxSubArray(arr);
    cout << "The maximum sum of sub array is: " << ans << endl;
    return 0;
}