#include<iostream>
#include<vector>
using namespace std;
class Solution{
public:
    vector<int> rearrangeBySign(vector<int> &arr){
        int n=arr.size();
        vector<int> ans(n,0);
        int posIndex=0,negIndex=1;
        for(int i=0;i<n;i++){
            if(arr[i]<0){
                ans[negIndex]=arr[i];
                negIndex+=2;
            }
            else{
                ans[posIndex]=arr[i];
                posIndex+=2;
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
    int n=arr.size();
    vector<int> ans=obj.rearrangeBySign(arr);
    cout << "The rearranged array is: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}