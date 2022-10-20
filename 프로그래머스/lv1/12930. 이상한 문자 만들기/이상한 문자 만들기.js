function solution(s) {   
    let arr = s.split(' ');
        let answer = [];
        for(let i = 0; i < arr.length; i++){
            let w = arr[i].split('').map((word,index)=>{
            if(index % 2 === 0) {
                return word.toUpperCase()
            } else if(word % 2 !== 0) {
                return word.toLowerCase();
        }
    }).join('');
            answer.push(w)
        }
    return answer.join(' ')
}