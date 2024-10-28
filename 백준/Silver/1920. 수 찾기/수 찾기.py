N = int(input())
n_list = list(map(int, input().split()))
M = int(input())
m_list = list(map(int, input().split()))

n_list.sort()

for i in m_list:
    start = 0
    end = len(n_list)-1
    flag = False
    while start <= end:
        mid = (start + end)//2
        if i == n_list[mid]:
            flag = True
            break
        elif i > n_list[mid]:
            start = mid + 1
        else:
            end = mid - 1
        
    if flag:
        print(1)
    else:
        print(0)
        