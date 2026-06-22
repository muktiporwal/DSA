#include<bits/stdc++.h>
using namespace std;
class solution{
public:
    int findRotations(vector<int> &arr){
        int n=arr.size();
        int minVal=arr[0];
        int minIndex=0;
        for(int i=0;i<n;i++){
            if(arr[i]<minVal){
                minVal=arr[i];
                minIndex=i;
            }
        }
        return minIndex;
    }
};
int main(){
    vector<int> nums;
    int temp;
    cout << "Enter the elements(to end enter -111): ";
    while(cin >> temp && temp!=-111){
        nums.push_back(temp);
    }
    solution sol;
    int target=sol.findRotations(nums);
    cout << "Times the array is rotated: " << target <<"\n";
    return 0;
}