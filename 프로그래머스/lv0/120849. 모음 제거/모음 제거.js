function solution(my_string) {
    var str = 'aeiou'
    var answer = my_string.split('').filter((el)=>(!str.includes(el))).join('')
    
    return answer;
    
}