/*Better approach using hash where time complexity is O(n)*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleElement(vector<int>& arr){
        int n=arr.size();
        int maxi=arr[0];
        for(int i=0;i<n;i++){
            maxi=max(maxi,arr[i]);
        }
        vector<int> hash(maxi+1,0);
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        for(int i=0;i<n;i++){
            if(hash[arr[i]]==1)
                return arr[i];
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