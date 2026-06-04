#include<bits/stdc++.h>
using namespace std;
int solve(vector<int> &a){
    int maxLen=0, sum=0;
    unordered_map<int,int> sumIndexMap;
    for(int i=0;i<(int)a.size();i++){
        sum+=a[i];
        if(sum==0){
            maxLen=i+1;
        }
        else if(sumIndexMap.find(sum)!=sumIndexMap.end()){
            maxLen=max(maxLen,i-sumIndexMap[sum]);
        }
        else{
            sumIndexMap[sum]=i;
        }
    }
    return maxLen;
}
int main(){
    vector<int> arr;
    int x;
    cout << "Enter the elements of array(use -11 to stop): ";
    while(cin >> x && x!=-11){
        arr.push_back(x);
    }
    cout << "Maximum length of the substring is: " << solve(arr) << endl;
    return 0;
}