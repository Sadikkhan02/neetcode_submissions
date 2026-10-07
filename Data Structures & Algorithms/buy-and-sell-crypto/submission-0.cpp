class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit=0, curr=prices[0];

        for(int i=0; i<prices.size(); i++){
            if(curr > prices[i]){
                curr = prices[i];
            }
            else if(profit < (prices[i]-curr)){
                profit = (prices[i]-curr);
            }

        }
        return profit;
    }
    
};
