#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void nextPermutation(vector<int> &arr){
        int index=-1;
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]<arr[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            reverse(arr.begin(),arr.end());
            return;
        }
        for(int i=arr.size()-1;i>index;i--){
            if(arr[i]>arr[index]){
                swap(arr[i],arr[index]);
                break;
            }
        }
        reverse(arr.begin()+index+1,arr.end());
    }
};
int main(){
    Solution obj;
    vector<int> arr;
    int x;
    cout << "Enter the array elements: ";
    while(cin >> x && x!=-111){
        arr.push_back(x);
    }
    obj.nextPermutation(arr);
    for(int x:arr)
        cout << x << " ";
    cout << endl;
    return 0;
}