/*Longest non repeating substring using brute force*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int longestSubstring(string &s){
        int n=s.size();
        int maxLen=0;
        for(int i=0;i<n;i++){
            vector<int> hash(256,0);
            for(int j=i;j<n;j++){
                if(hash[s[j]]==1)
                    break;
                hash[s[j]]=1;
                int len=j-i+1;
                maxLen=max(maxLen,len);
            }
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