function solution(number, k) {
    var s = [];
    var answer = '';
    for(let i = 0; i < number.length; i++) {
        var e = number[i];
        while(k > 0 && s[s.length-1] < e) {
            s.pop();
            k--;
        }
        s.push(e);
    }
    s.splice(s.length-k, k);
    answer = s.join("");
    return answer;
}