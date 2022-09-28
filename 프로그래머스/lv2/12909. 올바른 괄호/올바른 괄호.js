function solution(s){
    let answer = true;
    let arr = [...s];
    let count = 0;
    
    if(arr[0] === ')') return false; 
    
    for(let i = 0; i < arr.length; i++) {
        if(arr[i] === '(') {
            count++;
        } else if(count >= 1 && arr[i] === ')') {
            count--; 
        }
    }
    if(count === 0) {
        return true; 
    } else {
        return false;
    }
}