#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int maxSubArray(vector<int> &arr){
        long long maxi=LLONG_MIN;
        long long sum=0;
        int start=0;
        int ansStart=-1,ansEnd=-1;
        for(int i=0;i<arr.size();i++){
            if(sum==0){
                start=i;
            }
            sum+=arr[i];
            if(sum>maxi){
                maxi=sum;
                ansStart=start;
                ansEnd=i;
            }
            if(sum<0)
                sum=0;
        }
        cout << "Sub array is: [";
        for(int i=ansStart;i<=ansEnd;i++){
            cout << arr[i] << " ";
        }
        cout << "]" << endl;
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