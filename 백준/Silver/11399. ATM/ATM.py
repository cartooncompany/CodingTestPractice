N = int(input())
P = list(map(int, input().split()))

P.sort()

time = 0
total_time = 0

for i in P:
    time += i
    total_time += time

print(total_time)
