function solution(board, moves) {
    let basket = [];
    var answer = 0;
    for(let i = 0; i < moves.length; i++){
        let p = moves[i]-1;
        for(let j = 0; j < board.length; j++){
            if(board[j][p] == 0) {
                continue;
            } else {
                let last = basket.length <= 1 ? 0 : basket.length-1;
                if(basket[last] == board[j][p]) {
                    board[j][p] = 0;
                    basket.splice(last);
                    answer += 2
                } else {
                    basket.push(board[j][p]);
                    board[j][p] = 0;
                }
                break;
            }
        }
    }
    return answer;
}