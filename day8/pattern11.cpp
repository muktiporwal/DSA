#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+i;ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
    /*Another Pattern*/
    for(int i=0;i<n;i++){
        for(char ch='A';ch<='A'+(n-i-1);ch++){
            cout << ch << " ";
        }
        cout << endl;
    }
    cout << endl;
    /*Another Pattern*/
    for(int i=0;i<n;i++){
        char ch='A'+i;
        for(int j=0;j<=i;j++){
            cout << ch << " ";
        }
        cout << endl;
    }
    return 0;
}