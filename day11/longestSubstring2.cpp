/*Optimal approach where time complexity O(n)*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubstring(string &s){
        int n=s.size();
        int Hashlen=256;
        int hash[Hashlen];
        for(int i=0;i<Hashlen;i++){
            hash[i]=-1;
        }
        int l=0,r=0, maxLen=0;
        while(r<n){
            if(hash[s[r]]!=-1){
                l=max(hash[s[r]]+1,l);
            }
            int len=r-l+1;
            maxLen=max(len,maxLen);
            hash[s[r]]=r;
            r++;
        }
        return maxLen;
    }
};
int main(){
    string input;
    cout << "Enter the string: ";
    cin >> input;
    Solution sol;
    int length=sol.longestSubstring(input);
    cout << "Length of longest substring without repeating characters: " << length << endl;
    return 0;
}