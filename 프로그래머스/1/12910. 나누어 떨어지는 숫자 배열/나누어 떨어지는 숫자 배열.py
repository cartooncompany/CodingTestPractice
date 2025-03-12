def solution(arr, divisor):
    answer = []
    arr.sort()
    for i in range(0, len(arr)):
        if arr[i] % divisor == 0:
            answer.append(arr[i])
            
    if answer == []:
        answer.append(-1)
    return answer