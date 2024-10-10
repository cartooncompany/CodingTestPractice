function solution(num_list, n) {
    let result = 0;
    for(let i = 0; i < num_list.length; i++){
        if(num_list[i] == n){ 
            result = 1;
            break;
        }
        else result = 0;
    }
    return result;
}