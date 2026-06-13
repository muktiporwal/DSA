#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int subarraySum(vector<int> &arr,int k){
        int n=arr.size();
        int count=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum=0;
                for(int m=i;m<=j;m++){
                    sum+=arr[m];
                }
                if(sum==k){
                    count++;
                }
            }
        }
        return count;
    }
};
int main(){
    Solution obj;
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the array elements: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the value of k: ";
    cin >> k;
    int ans=obj.subarraySum(arr,k);
    cout << "The numver of subarray is " << ans << "\n";
    return 0;
}