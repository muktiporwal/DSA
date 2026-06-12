#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> leaders(vector<int> &arr){
        vector<int>ans;
        for(int i=0;i<arr.size();i++){
            bool leader=true;
            for(int j=i+1;j<arr.size();j++){
                if(arr[j]>=arr[i]){
                    leader=false;
                    break;
            }
            }
            if(leader){
            ans.push_back(arr[i]);
            }
        }
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
    for(int x=0;x<ans.size();x++)
        cout << ans[x] << " ";
    cout << endl;
    return 0;
}