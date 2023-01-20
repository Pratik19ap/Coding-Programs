//Programmed in C++ | Author: Anshuman Pratik

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int mini= prices[0];
        int i, profit = 0;
        for(i=1;i<prices.size();i++) {  //We can't sell on same day
            int diff = prices[i]-mini;
            profit = max(profit,diff);
            mini = min(mini, prices[i]);
            
        }
        return profit;  
    }
};
//Fix Sell date, choose buying date in preceeding dates. Then select minimum value in preceeding sub-array and compute max Profit.
