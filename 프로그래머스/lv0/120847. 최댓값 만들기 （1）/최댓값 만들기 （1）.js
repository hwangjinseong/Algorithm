function solution(numbers) {
    var answer = []
    for(let i = 0 ; i < numbers.length; i ++) {
        for(let j = 0 ; j < numbers.length; j++) {
            if(i !== j) {
                answer.push(numbers[i] * numbers[j])    
            }
        }
    }
    
    //최댓값 출력
    return Math.max(...answer)
}