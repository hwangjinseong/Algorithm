num = input()

arr = []

for i in str(num):
    arr.append(i)

arr.sort(reverse=True)

print(''.join(arr))