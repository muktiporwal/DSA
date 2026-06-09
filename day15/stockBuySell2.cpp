#include<bits/stdc++.h>
using namespace std;
class solution{
public: 
    int stockBuySell(vector<int> &prices){
        int minPrice=INT_MAX;
        int maxProfit=0;
        for(int price:prices){
            if(price<minPrice){
                minPrice=price;
            }
            else{
                maxProfit=max(maxProfit,price-minPrice);
            }
        }
        return maxProfit;
    }
};
int main(){
    solution obj;
    vector<int> prices;
    int x;
    cout << "Enter the stock prices: ";
    while(cin >> x && x!=-111){
        prices.push_back(x);
    }
    int res=obj.stockBuySell(prices);
    cout << "The maximum profit is: "<< res << endl;
    return 0;
}