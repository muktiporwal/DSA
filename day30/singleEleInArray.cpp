#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleNonDuplicate(vector<int> &arr){
        int n=arr.size();
        if(n==1)
            return arr[0];
        for(int i=0;i<n;i++){
            if(i==0){
                if(arr[i]!=arr[i+1])
                    return arr[i];
            }
            else if(i==n-1){
                if(arr[i]!=arr[i-1])
                    return arr[i];
            }
            else{
                if(arr[i]!=arr[i-1] && arr[i]!=arr[i+1])
                    return arr[i];
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr;
    int temp;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    Solution sol;
    int ans=sol.singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}