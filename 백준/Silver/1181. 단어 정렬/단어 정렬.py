n = int(input())

# n개의 단어를 입력받아 중복을 제거하고 리스트를 생성합니다.
words = list(set([input() for _ in range(n)]))

# 단어들을 길이와 사전 순서에 따라 정렬합니다.
# 먼저 길이에 따라 정렬하고, 길이가 같은 경우 사전 순으로 정렬합니다.
# 이를 위해 lambda 함수를 사용하여 정렬 키를 설정합니다.
sorted_words = sorted(words, key=lambda word: (len(word), word))

for word in sorted_words:
    print(word)