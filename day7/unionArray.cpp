#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> FindUnion(int arr1[],int arr2[],int n,int m){
        map<int,int> freq;
        vector<int> Union;
        for(int i=0;i<n;i++)
            freq[arr1[i]]++;
        for(int i=0;i<m;i++)
            freq[arr2[i]]++;
        for(auto &it:freq)
            Union.push_back(it.first);
        return Union;
    }
};

int main(){
    int n,m;
    cout << "Enter the size of array 1: ";
    cin >> n;
    cout << "Enter the size of array 2: ";
    cin >> m;
    int arr1[n],arr2[m];
    cout << "Enter the elements of array 1: ";
    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    cout << "Enter the elements of array 2: ";
    for(int i=0;i<m;i++){
        cin >> arr2[i];
    }
    Solution obj;
    vector<int> Union=obj.FindUnion(arr1,arr2,n,m);
    cout << "Union of arr1 and arr2 is: " << endl;
    for(auto &val : Union)
        cout << val << " ";
    return 0;
}