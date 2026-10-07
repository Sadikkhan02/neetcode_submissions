class Solution {
public:
    int climbStairs(int n) {
        return subsets(n, 0);
    }

    int subsets(int n, int i) {
        if (i >= n) return i == n;
        return subsets(n, i + 1) + subsets(n, i + 2);
    }
};