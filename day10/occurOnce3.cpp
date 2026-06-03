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
    vector<int> arr;
    int x;
    cout << "Enter the elements of array(use -11 to stop): ";
    while(cin >> x && x!=-11){
        arr.push_back(x);
    }
    Solution obj;
    cout << "Single element is: " << obj.singleElement(arr) << endl;
    return 0;
}