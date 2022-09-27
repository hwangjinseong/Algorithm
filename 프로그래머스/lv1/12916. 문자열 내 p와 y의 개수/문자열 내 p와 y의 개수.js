function solution(s){
    var answer = s.toLowerCase();
    var pp = 0;
    var yy = 0;
    for(let i = 0; i < s.length; i++) {
        if(answer[i] == "p") pp++;
        else if(answer[i] == "y") yy++;
    }
    return pp == yy ? true : false;
}