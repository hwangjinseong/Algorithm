def min_steps(n):
    # 크기가 n+1인 리스트를 초기화합니다. 처음 두 요소는 0이고, 나머지는 무한대입니다.
    dp = [0, 0] + [float('inf')] * (n - 1)
    
    # 2부터 n까지 반복합니다.
    for i in range(2, n + 1):
        # i를 1로 줄이는 데 필요한 최소 단계 수는 적어도 i-1을 1로 줄이는 데 필요한 단계 수에 1을 더한 것입니다(1을 뺍니다).
        dp[i] = min(dp[i], dp[i - 1] + 1)
        
        # i가 2로 나누어 떨어지면, i/2를 두 배로 만들어 i를 얻을 수도 있습니다. 따라서, 단계 수는 i/2를 얻는 데 필요한 단계 수에 1을 더한 것입니다.
        if i % 2 == 0:
            dp[i] = min(dp[i], dp[i // 2] + 1)
        
        # 마찬가지로, i가 3으로 나누어 떨어지면, i/3을 세 배로 만들어 i를 얻을 수도 있습니다. 따라서, 단계 수는 i/3을 얻는 데 필요한 단계 수에 1을 더한 것입니다.
        if i % 3 == 0:
            dp[i] = min(dp[i], dp[i // 3] + 1)
    
    # n을 1로 줄이는 데 필요한 최소 단계 수를 반환합니다.
    return dp[n]

num = int(input())

print(min_steps(num))