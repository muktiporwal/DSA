#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    void sortZeroOneTwo(vector<int> &arr){
        int count0=0,count1=0,count2=0;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0)
                count0++;
            else if(arr[i]==1)
                count1++;
            else
                count2++;
        }
        int index=0;
        while(count0--){
            arr[index++]=0;
        }
        while(count1--){
            arr[index++]=1;
        }
        while(count2--){
            arr[index++]=2;
        }
    }
};
int main(){
    vector<int> arr;
    int x;
    cout << "Enter the elements of array(use -1 to stop): ";
    while(cin >> x && x!=-1){
        arr.push_back(x);
    }
    Solution obj;
    obj.sortZeroOneTwo(arr);
    for(int x:arr){
        cout << x << " ";
    }
    return 0;
}