length = int(input())
string = input()
answer = 0

# 아스키 코드 값을 돌려주는 ord함수 사용
for i in range(length):
    answer += (ord(string[i]) - 96) * (31 ** i)
print(answer % 1234567891)