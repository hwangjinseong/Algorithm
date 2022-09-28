function solution(arr, divisor) {
    var answer = [];
    var num = 0;
    for(let i = 0; i < arr.length; i++) {
        if(arr[i] % divisor == 0) {
            answer.push(arr[i])
        }
    }
    return answer.length == 0? [-1]:answer.sort((a, b) => a-b);
}