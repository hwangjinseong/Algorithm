function solution(slice, n) {
    var answer = Math.floor(n/slice);
    var count = n%slice;
    if(count > 0) answer++;
    return answer;
}