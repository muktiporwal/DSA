#include<iostream>
#include<vector>
using namespace std;
class arrayManipulator{
public:
    vector<int> RearrangeBySign(vector<int> &arr,int n){
        vector<int> pos;
        vector<int> neg;
        for(int i=0;i<n;i++){
            if(arr[i]>0)
                pos.push_back(arr[i]);
            else
                neg.push_back(arr[i]);
        }
        for(int i=0;i<n/2;i++){
            arr[2*i]=pos[i];
            arr[2*i+1]=neg[i];
        }
        return arr;
    }
};
int main(){
    arrayManipulator obj;
    vector<int> arr;
    int x;
    cout << "Enter the array elements: ";
    while(cin >> x && x!=-111){
        arr.push_back(x);
    }
    int n=arr.size();
    vector<int> ans=obj.RearrangeBySign(arr,n);
    cout << "The rearranged array is: ";
    for(int i=0;i<ans.size();i++){
        cout << ans[i] << " ";
    }
    return 0;
}