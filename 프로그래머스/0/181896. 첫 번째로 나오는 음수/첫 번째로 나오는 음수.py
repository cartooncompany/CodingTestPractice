def solution(num_list):
    result = 0
    for i in range(len(num_list)):
        if(num_list[i] < 0):
            result = i
            break;
        else:
            result = -1
    return result