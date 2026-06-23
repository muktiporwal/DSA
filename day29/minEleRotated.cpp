#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int findMin(vector<int> &arr){
        int minVal=INT_MAX;
        for(int i=0;i<arr.size();i++){
            minVal=min(minVal,arr[i]);
        }
        return minVal;
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
    int target=sol.findMin(arr);
    cout << "Minimum element in the rotated array is: " << target <<"\n";
    return 0;
}