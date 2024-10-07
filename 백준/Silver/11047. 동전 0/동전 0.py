N, K = map(int, input().split())

coins = []
for i in range(N):
    coins.append(int(input()))
coins.sort(reverse=True)

count = 0

for i in coins:
    if K == 0:
        break
    count += K//i
    K %= i
print(count)