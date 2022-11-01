function solution(money) {
    var answer = [];
    var a = 0;
    var ice = 5500;
    
    while(money >= 5500) {
        a++;
        money -= 5500;
    }
    answer.push(a, money);
    return answer;
}