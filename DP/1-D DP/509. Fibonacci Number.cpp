// Date: 01 - 11 -2023
// Problem link: https://leetcode.com/problems/fibonacci-number/description/

// The Fibonacci numbers, commonly denoted F(n) form a sequence, called the Fibonacci sequence, such that each number is the sum of the two preceding ones, starting from 0 and 1. That is,

// F(0) = 0, F(1) = 1
// F(n) = F(n - 1) + F(n - 2), for n > 1.
// Given n, calculate F(n).


// 1-Dp Approch I

 int fib(int n) {
        if(n<=1) return n;

        
        vector<int>dp(n+1,-1);

        dp[0]=0;
        dp[1]=1;
        
        for(int i=2;i<=n;i++)
            dp[i]=dp[i-1]+dp[i-2];

        return dp[n];

    }
};

// more optimize Approch
int fib(int n)
{
  int dp[]={0,1};
  
    for(int i =2; i<=n;i++)
    {
      dp[i%2] = dp[0]+dp[1];
    }
return dp[n%2];


