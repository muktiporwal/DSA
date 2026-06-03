#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &arr,int k){
        int n=arr.size();
        int maxLen=0;
        int left=0,right=0;
        int sum=arr[0];
        while(right<n){
            while(left<=right && sum >k){
                sum-=arr[left];
                left++;
            }
            if(sum==k){
                maxLen=max(maxLen,right-left+1);
            }
            right++;
            if(right<n)
                sum+=arr[right];
        }
        return maxLen;
    }
};
int main(){
    int n,k;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    cout << "Enter the length of longest subArray: ";
    cin >> k;
    Solution obj;
    int len=obj.longestSubarray(arr,k);
    cout << "Length of longest subArray is: "<< len << "\n";
    return 0;
}