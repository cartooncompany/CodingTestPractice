function solution(num) {
    let answer = num;
    for(let i = 0; i<500; i++){
        if(answer == 1) return i;
        else if(answer%2==0) answer/=2;
        else answer = (answer*3)+1;
    }
    return -1;
}