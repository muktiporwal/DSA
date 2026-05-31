#include<bits/stdc++.h>
using namespace std;

class Solution{
public:
    vector<int> findUnion(int arr1[],int arr2[],int n,int m){
        set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr1[i]);
        }
        for(int i=0;i<m;i++){
            st.insert(arr2[i]);
        }
        vector<int> unionArray(st.begin(),st.end());
        return unionArray;
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
    vector<int> Union=obj.findUnion(arr1,arr2,n,m);
    cout << "Union of arr1 and arr2 is: " << endl;
    for(auto &val : Union)
        cout << val << " ";
    return 0;
}