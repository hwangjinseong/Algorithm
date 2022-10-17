function solution(number) {
    var answer = 0;
    let c = (three, start) => {
        if (three.length == 3) {
            answer += three.reduce((acc, cur) => acc + cur, 0) === 0 ? 1 : 0;
            return;
        }
        for (let i = start; i < number.length; i++) {
            c([...three, number[i]], i + 1);
        }
    }
    c([], 0);
    return answer;
}