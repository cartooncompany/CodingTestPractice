function solution(my_string, is_prefix) {
    let answer = 0;
    if(my_string.slice(0, is_prefix.length) == is_prefix){
        answer = 1
    } else {
        answer = 0
    }
    return answer;
}