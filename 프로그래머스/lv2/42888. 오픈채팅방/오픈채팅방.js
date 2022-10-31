function solution(record) {
    var answer = [];
    var users = [];
    record = record.map((e) => e.split(' ')); 

    for (let i = 0; i < record.length; i++) {
        if(record[i][0] != 'Leave') {
            users[record[i][1]] = record[i][2]
            if(record[i][0] == 'Enter') {
                answer.push([record[i][1],"님이 들어왔습니다."]);
            }
        } else {
            answer.push([record[i][1],"님이 나갔습니다."]);
        }
    }
    answer = answer.map(([a,b]) => {
        return users[a]+b;
    })
    return answer;
}