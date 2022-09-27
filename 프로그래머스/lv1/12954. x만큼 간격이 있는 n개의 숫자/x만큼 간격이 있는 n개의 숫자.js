function solution(x, n) {
    var answer = [];
    var multiply = x;
    for(let i = 0; i < n; i++) {
        answer.push(x);
        x += multiply;
}
    return answer;
}