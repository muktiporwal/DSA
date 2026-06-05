#include<iostream>
using namespace std;
int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int min_dist=i<j?i:j;
            min_dist=min_dist< (size-1-i)? min_dist: (size-1-i);
            min_dist=min_dist< (size-1-j)? min_dist: (size-1-j);
            cout << n-min_dist;
        }
        cout << endl;
    }
    return 0;
}