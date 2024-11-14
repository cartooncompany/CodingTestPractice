def fib(n):
    dp = [0] * (n+1)
    dp[1] = dp[2] = 1
    for i in range(3, n+1):
        dp[i] = dp[i-1] + dp[i-2]
    return dp[n]

def fibbonacci(n):
    dp = [0] * (n+1)
    dp[1] = dp[2] = 1
    count = 0
    for i in range(3, n+1):
        count+=1
        dp[i] = dp[i-1] + dp[i-2]
    return count

n = int(input())
print(fib(n), fibbonacci(n))