num = int(input())
m = []
for i in range(num):
    m.append(int(input()))
m = sorted(m)
for i in range(len(m)):
    print(m[i])