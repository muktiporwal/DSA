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