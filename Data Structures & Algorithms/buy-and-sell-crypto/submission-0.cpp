class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice = INT_MAX;
        int maxPrice = 0;
        for (auto p : prices) {
            if (p < minPrice)  minPrice = p;
            int profit = p - minPrice;
            if (profit > maxPrice) maxPrice = profit;
        }
        return maxPrice;
    }
};
