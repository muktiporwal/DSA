#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    string twoSum(vector<int>& arr, int target){
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==target){
                    return "YES";
                }
            }
        }
        return "NO";
    }
    vector<int> twoSumIndex(vector<int>& arr, int target){
        int n=arr.size();
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(arr[i]+arr[j]==target){
                    return{i,j};
                }
            }
        }
        return{-1,-1};
    }
};
int main(){
    Solution sol;
    vector<int> arr={2,6,5,8,11};
    int target=14;
    cout << sol.twoSum(arr,target) << "\n";
    vector<int> res = sol.twoSumIndex(arr, target);
    cout << "[" << res[0] << ", " << res[1] << "]\n";

    return 0;
}
