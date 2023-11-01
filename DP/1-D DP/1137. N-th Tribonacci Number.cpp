// Date : 01 - 11 - 2023
// Problem link : https://leetcode.com/problems/n-th-tribonacci-number/


// The Tribonacci sequence Tn is defined as follows: 

// T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

// Given n, return the value of Tn.

// Approch I :
int tribonacci(int n) {
      int dp[] = {0, 1, 1};
      for(int num=3;num<=n;num++){
          dp[num%3]=dp[0]+dp[1]+dp[2];
      }
     return dp[n%3];
    }

// Approch II :
int tribonacci(int n) {
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n == 2)
        return 1;

    vector<int> dp(n + 1, -1);

    dp[0] = 0;
    dp[1] = 1;
    dp[2] = 1;

    for (int i = 3; i <= n; i++) {
        dp[i] = dp[i - 3] + dp[i - 2] + dp[i - 1];
    }

    return dp[n];
}
