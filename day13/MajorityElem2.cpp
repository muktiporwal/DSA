//uses hashmap to store element as key value
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int majorityElement(vector<int> &arr){
        int n=arr.size();
        unordered_map<int,int> mp;
        for(int num: arr){
            mp[num]++;
        }
        for(auto &pair : mp){
            if(pair.second > n/2){
                return pair.first;
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