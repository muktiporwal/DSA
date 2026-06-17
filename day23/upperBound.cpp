#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int lowerBound(vector<int> arr,int x,int n){
        for(int i=0;i<n;i++){
            if(arr[i]>x){
                return i;
            }
        }
        return n;
    }
};
int main(){
    vector<int> arr;
    int temp,x;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    int n=arr.size();
    cout << "Enter the value of x";
    cin >> x;
    Solution sol;
    int index=sol.lowerBound(arr,x,n);
    cout << "Lower bound for the given value of x is: " << index << "\n";
    return 0;
}