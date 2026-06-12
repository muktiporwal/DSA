#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> leaders(vector<int> &arr){
        vector<int> ans;
        if(arr.empty()){
            return ans;
        }
        int max=arr[arr.size()-1];
        ans.push_back(arr[arr.size()-1]);
        for(int i=arr.size()-2;i>=0;i--){
            if(arr[i]>max){
                ans.push_back(arr[i]);
                max=arr[i];
            }
        }
        reverse(ans.begin(),ans.end());
        return ans;
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
    vector<int> ans=obj.leaders(arr);
    for(int i=0;i<ans.size();i++)
        cout << ans[i] << " ";
    cout << endl;
    return 0;
}