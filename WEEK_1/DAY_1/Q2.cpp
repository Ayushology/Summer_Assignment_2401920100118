class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buyingprice = INT_MAX;
        int maxprofit = 0;
        int n = prices.size();
        for(int i = 0 ; i< n ;i++){
            buyingprice = min(buyingprice,prices[i]);
            maxprofit = max(maxprofit,prices[i]-buyingprice);
        }
        return maxprofit;
    }
};