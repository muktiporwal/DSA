/*brute force approach where we xor all the elements and if the element is duplicate it will return 0 otherwise the number which is not duplicated will return
a^a=0 and a^0=a*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int singleNonDuplicate(vector<int> &arr){
        int n=arr.size();
        int ans=0;
        for(int i=0;i<n;i++){
            ans=ans ^ arr[i];
        }
        return ans;
    }
};
int main(){
    vector<int> arr;
    int temp;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        arr.push_back(temp);
    }
    Solution sol;
    int ans=sol.singleNonDuplicate(arr);
    cout << "The single element is: " << ans << "\n";
    return 0;
}