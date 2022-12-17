function solution(n) {
    var count = 0
    for(let i = 1 ; i <= n; i ++) {
        mixNumber(i) ? count++ : null
    }
    return count
}

function mixNumber(num) {
    var count = 0
    for(let i = 1 ; i <= (num/2)<<0 ; i ++) {
        num%i === 0 ? count++ : null
    }
    return count >= 2 ? true : false
}