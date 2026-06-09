#include<bits/stdc++.h>
using namespace std;
class Solution{
public:
    int stockBuySell(vector<int> &prices){
        int maxProfit=0;
        for(int i=0;i<prices.size();i++){
            for(int j=i+1;j<prices.size();j++){
                int profit=prices[j]-prices[i];
                maxProfit=max(maxProfit,profit);
            }
        }
        return maxProfit;
    }
};
int main(){
    Solution sol;
    vector<int> prices;
    int x;
    cout << "Enter the stock prices: ";
    while(cin >> x && x!=-111){
        prices.push_back(x);
    }
    int res=sol.stockBuySell(prices);
    cout << "The maximum profit is: "<< res << endl;
    return 0;
}