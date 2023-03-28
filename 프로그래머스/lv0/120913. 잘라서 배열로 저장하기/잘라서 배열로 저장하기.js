function solution(my_str, n) {
    var arr = my_str.split("");
    var answer = [];
    while(arr.length > 0) {
        answer.push(arr.splice(0,n).join(""));
    }
    return answer;
}