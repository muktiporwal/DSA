#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxSubArray(vector<int> &arr){
        long long maxi=LLONG_MIN;
        long long sum=0;
        for(int i=0;i<arr.size();i++){
            sum+=arr[i];
            if(maxi<sum)
                maxi=sum;
            if(sum<0)
                sum=0;
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