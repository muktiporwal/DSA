#include<bits/stdc++.h>
using namespace std;
class Solution{
private:
    bool linearSearch(vector<int> &arr, int num){
        int n=arr.size();
        for(int i=0;i<n;i++){
            if(arr[i]==num)
                return true;
        }
        return false;
    }
public:
    int longestConsecutive(vector<int> &arr){
        if(arr.size()==0){
            return 0;
        }
        int n=arr.size();
        int longest=1;
        for(int i=0;i<n;i++){
            int x=arr[i];
            int cnt=1;
            while(linearSearch(arr,x+1)==true){
                x+=1;
                cnt+=1;
            }
            longest=max(longest,cnt);
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