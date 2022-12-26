#include <algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int max_diff = 0;
        int min_seen = prices[0];
        for (std::size_t i = 1; i < prices.size(); ++i) {
            min_seen = std::min(min_seen, prices[i]);
            max_diff = std::max(max_diff, prices[i] - min_seen);
        }
        return max_diff;

    }
};
