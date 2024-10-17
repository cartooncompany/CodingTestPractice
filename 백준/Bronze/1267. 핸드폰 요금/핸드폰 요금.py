import sys
input = sys.stdin.readline

M = 0
Y = 0

n = int(input())
k = list(map(int, input().split()))

for i in k:
    M += (i//60+1)*15
    Y += (i//30+1)*10

if M > Y:
    print(f'Y {Y}')
elif Y > M:
    print(f'M {M}')
else:
    print(f'Y M {M}')
