#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleElement(vector<int>& arr){
        int n=arr.size();
        int xorr=0;
        for(int i=0;i<n;i++){
            xorr=xorr^arr[i];
        }
        return xorr;
    }
};
int main(){
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    vector<int> arr(n);
    cout << "Enter the elements of array: ";
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    Solution obj;
    cout << "Single element is: " << obj.singleElement(arr) << endl;
    return 0;
}