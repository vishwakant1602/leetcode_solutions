class Solution {
public:
    int climbStairs(int n) {
        if (n <= 2)
            return n;

        int prev2 = 1;  // ways to reach stair 1
        int prev1 = 2;  // ways to reach stair 2

        for (int i = 3; i <= n; i++) {
            int curr = prev1 + prev2;

            prev2 = prev1;
            prev1 = curr;
        }

        return prev1;
//nth stair tak pahunchne ke liye:

// n-1 se 1 step aa sakte ho
// n-2 se 2 steps aa sakte ho

// So:

// ways(n) = ways(n-1) + ways(n-2)

// Example n = 5:

// ways(1) = 1
// ways(2) = 2
// ways(3) = 3
// ways(4) = 5
// ways(5) = 8

// Answer = 8
    }
};