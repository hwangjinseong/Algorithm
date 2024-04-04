n_num = int(input())
n_arr = set(map(int, input().split()))
m_num = int(input())
m_arr = list(map(int, input().split()))

for n_num in m_arr:
    if n_num in n_arr:
        print(1)
    else:
        print(0)
        