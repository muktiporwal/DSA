/*Time complexity O(n!*n) since all possible permuatations are generated AND space complexity O(n!)*/
#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    vector<int> nextPermutation(vector<int> &arr){
        vector<vector<int>> all;
        sort(arr.begin(),arr.end());
        do{
            all.push_back(arr);
        }while(next_permutation(arr.begin(),arr.end()));
        for(int i=0;i<all.size();i++){
            if(all[i]==arr){
                if(i==all.size()-1)
                    return all[0];
                return all[i+1];
            }
        }
        return arr;
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
    vector<int> ans=obj.nextPermutation(arr);
    for(int x:ans)
        cout << x << " ";
    cout << endl;
    return 0;
}