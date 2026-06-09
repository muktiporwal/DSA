#include <iostream>
#include <vector>
using namespace std;
long arrayManipulation(int n, vector<vector<int>> queries) {
    vector<long long> diff(n + 2, 0);
    for (const auto& q : queries) {
        int a = q[0];
        int b = q[1];
        int k = q[2];

        diff[a] += k;
        diff[b + 1] -= k;
    }
    long long maxVal = 0;
    long long current = 0;
    for (int i = 1; i <= n; i++) {
        current += diff[i];
        maxVal = max(maxVal, current);
    }
    return maxVal;
}

int main() {
    int n, m;
    cout << "Enter array size (n): ";
    cin >> n;
    cout << "Enter number of queries (m): ";
    cin >> m;
    vector<vector<int>> queries;
    
    cout << "\nEnter each query as: start end value\n";
    for (int i = 0; i < m; i++) {
        int a, b, k;
        cout << "Query " << i + 1 << ": ";
        cin >> a >> b >> k;

        queries.push_back({a, b, k});
    }

    cout << "\nMaximum value after all operations: " << arrayManipulation(n, queries) << endl;
    return 0;
}
