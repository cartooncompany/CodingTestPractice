import sys
n = int(sys.stdin.readline())

l = []
for _ in range(n):
    l.append(list(map(int, sys.stdin.readline().split())))
l.sort(key =  lambda x: (x[1], x[0]))

time = 0
count = 0

for e in l:
    if time <= e[0]:
        count += 1
        time = e[1]

print(count)