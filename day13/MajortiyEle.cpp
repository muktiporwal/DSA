#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> &arr){
        int n=arr.size();
        for(int i=0;i<n;i++){
            int cnt=0;
            for(int j=0;j<n;j++){
                if(arr[j]==arr[i]){
                    cnt++;
                }
            }
            if(cnt>(n/2)){
                return arr[i];
            }
        }
        return -1;
    }
};
int main(){
    vector<int> arr;
    int x;
    cout << "Enter the elements of array (use -1 to stop): ";
    while(cin >> x && x!=-1){
        arr.push_back(x);
    }
    Solution obj;
    int ans=obj.majorityElement(arr);
    cout << "The majority element is: " << ans << endl;
    return 0;
}