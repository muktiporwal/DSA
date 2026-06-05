#include<iostream>
#define MAX(a,b) ((a)>(b)?(a):(b))
using namespace std;
int main(){
    int n;
    cout << "Enter the size: ";
    cin >> n;
    int size=2*n-1;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            int dist_i=i-(n-1);
            int dist_j=j-(n-1);

            if(dist_i<0)
                dist_i= -dist_i;
            if(dist_j<0)
                dist_j= -dist_j;

            int maxi=MAX(dist_i,dist_j);
            cout << maxi+1;
        }
        cout << endl;
    }
    return 0;
}
