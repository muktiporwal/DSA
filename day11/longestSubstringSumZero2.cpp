#include<bits/stdc++.h>
using namespace std;
int maxLen(int arr[],int n){
    unordered_map<int,int> mpp;
    int maxi=0,sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(sum==0){
            maxi=i+1;
        }
        else{
            if(mpp.find(sum)!=mpp.end()){
                maxi=max(maxi,i-mpp[sum]);
            }
            else{
                mpp[sum]=i;
            }
        }
    }
    return maxi;
}
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout << "Maximum length of the substring is: " << maxLen(arr,n) << endl;
    return 0;
}