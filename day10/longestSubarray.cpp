#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubarray(vector<int> &arr,int k){
        int n=arr.size();
        int maxLength=0;
        for(int start=0;start<n;start++){
            for(int end=start;end<n;end++){
                int sum=0;
                for(int i=start;i<=end;i++){
                    sum=arr[i];
                }
                if(sum==k){
                    maxLength=max(maxLength,end-start+1);
                }
            }
        }
        return maxLength;
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