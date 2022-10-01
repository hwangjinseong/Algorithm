function solution(sizes) {
    let a = 0;
    let b = 0;
    sizes = sizes.map(arr => { 
        if(arr[0] < arr[1]) {
            return arr.reverse()
        } else {
            return arr
        }
    })
    for(let i = 0; i < sizes.length; i++){
      if(sizes[i][0] > a) a = sizes[i][0]
      if(sizes[i][1] > b) b = sizes[i][1]
    }
    return a*b
}