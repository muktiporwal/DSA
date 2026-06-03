/*Brute force approach time complexity is O(n^2)*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleElement(vector<int>& arr){
        int n=arr.size();
        for(int i=0;i<n;i++){
            int num=arr[i];
            int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j]==num)
                    cnt++;
            }
            if(cnt==1)
                return num;
        }
        return -1;
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