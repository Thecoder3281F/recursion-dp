#include <unordered_map>
class Solution {
public:
    unordered_map<int, int> memo;
    int tribonacci(int n) {
        if (memo.count(n) > 0) {
            return memo[n];
        }
        if (n == 0) {
            return 0;
        }
        if (n == 1 || n == 2) {
            return 1;
        }

        int t = tribonacci(n - 3) + tribonacci(n - 2) + tribonacci(n - 1);
        memo[n] = t;

        return t;
    }
};
