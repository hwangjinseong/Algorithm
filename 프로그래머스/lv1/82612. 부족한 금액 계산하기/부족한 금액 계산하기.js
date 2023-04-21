function solution(price, money, count) {
    var answer = 0;
    var num = 0;
    var pis = price;
    for(let i = 0; i < count; i++) {
        num += price;
        price += pis
    }
    if(money < num) {
        return num - money;
    } else {
        return answer;
    }
}