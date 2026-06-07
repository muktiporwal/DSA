#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> &arr){
        int n=arr.size();
        int cnt=0;
        int el;
        for(int i=0;i<n;i++){
            if(cnt==0){
                cnt=1;
                el=arr[i];
            }
            else if(el==arr[i]){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            if(arr[i]==el){
                cnt1++;
            }
        }
        if(cnt > (n/2)){
            return el;
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