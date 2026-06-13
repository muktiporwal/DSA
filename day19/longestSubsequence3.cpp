#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestConsecutive(vector<int> &arr){
        int n=arr.size();
        if(n==0)
            return 0;
        int longest=1;
        unordered_set<int> st;
        for(int i=0;i<n;i++){
            st.insert(arr[i]);
        }
        for(auto it:st){
            if(st.find(it-1)==st.end()){
                int cnt=1;
                int x=it;
                while(st.find(x+1)!=st.end()){
                    x=x+1;
                    cnt=cnt+1;
                }
                longest=max(longest,cnt);
            }
        }
        return longest;
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
    int ans=obj.longestConsecutive(arr);
    cout << "The longest consequtive sequence is " << ans << "\n";
    return 0;
}